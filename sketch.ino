#include <WiFi.h>
#include <ThingerESP32.h>

// Definições de sensores simulados
#define SENSOR_PH 1 // Sensor de pH
#define SENSOR_TEMPERATURA 2 // Sensor de temperatura
#define SENSOR_TURBIDEZ 3 // Sensor de turbidez
#define SENSOR_OXIGENIO 4 // Sensor de oxigênio dissolvido

// Definições de pinos do ESP32
#define PIN_PH 32 // Pino do sensor de pH
#define PIN_TEMPERATURA 33 // Pino do sensor de temperatura
#define PIN_TURBIDEZ 34 // Pino do sensor de turbidez
#define PIN_OXIGENIO 35 // Pino do sensor de oxigênio dissolvido

// Definições de credenciais do Thinger.io
#define THINGER_DEVICE_ID "seu_device_id"
#define THINGER_DEVICE_CREDENTIAL "seu_device_credential"
#define THINGER_BUCKET_ID "seu_bucket_id"

ThingerESP32 thing(THINGER_DEVICE_ID, THINGER_DEVICE_CREDENTIAL);

void setup() {
  // Inicializar sensores
  pinMode(PIN_PH, INPUT);
  pinMode(PIN_TEMPERATURA, INPUT);
  pinMode(PIN_TURBIDEZ, INPUT);
  pinMode(PIN_OXIGENIO, INPUT);

  // Conectar ao Wi-Fi
  WiFi.begin("seu_ssid", "seu_senha");
  while (WiFi.status()!= WL_CONNECTED) {
    delay(1000);
    Serial.println("Conectando ao Wi-Fi...");
  }

  Serial.println("Conectado ao Wi-Fi!");
  thing.begin();
}

void loop() {
  // Gerar valores aleatórios para os sensores
  int phValue = random(0, 1024);
  int temperaturaValue = random(0, 1024);
  int turbidezValue = random(0, 1024);
  int oxigenioValue = random(0, 1024);

  // Converter valores para unidades adequadas
  float ph = phValue * 3.3 / 4095;
  float temperatura = temperaturaValue * 3.3 / 4095;
  float turbidez = turbidezValue * 3.3 / 4095;
  float oxigenio = oxigenioValue * 3.3 / 4095;

  // Enviar dados para o Thinger.io
  thing.add("ph", ph);
  thing.add("temperatura", temperatura);
  thing.add("turbidez", turbidez);
  thing.add("oxigenio", oxigenio);

  thing.send();

  delay(10000); // Enviar dados a cada 10 segundos
}
