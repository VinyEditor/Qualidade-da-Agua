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
#define USERNAME "VInyEditor" // Substitua pelo seu nome de usuário do Thinger.io
#define DEVICE_ID "ESP32"
#define DEVICE_CREDENTIAL "mudar.520"
#define BUCKET_ID "bES32" // Substitua pelo seu ID de bucket no Thinger.io

ThingerESP32 thing(USERNAME, DEVICE_ID, DEVICE_CREDENTIAL);

void setup() {
  Serial.begin(115200);

  // Inicializar sensores
  pinMode(PIN_PH, INPUT);
  pinMode(PIN_TEMPERATURA, INPUT);
  pinMode(PIN_TURBIDEZ, INPUT);
  pinMode(PIN_OXIGENIO, INPUT);

  // Conectar ao Wi-Fi
  WiFi.begin("Wokwi-GUEST");
  while (WiFi.status() != WL_CONNECTED) {
    delay(1000);
    Serial.println("Conectando ao Wi-Fi...");
  }

  Serial.println("Conectado ao Wi-Fi!");
  thing.add_wifi("Wokwi-GUEST");

  // Definindo recursos para cada sensor
  thing["ph"] >> [](pson & out){
    int phValue = analogRead(PIN_PH);
    float ph = phValue * 3.3 / 4095; // Ajuste para 0-3.3V
    out = ph;
  };

  thing["temperatura"] >> [](pson & out){
    int temperaturaValue = analogRead(PIN_TEMPERATURA);
    float temperatura = temperaturaValue * 3.3 / 4095; // Ajuste para 0-3.3V
    out = temperatura;
  };

  thing["turbidez"] >> [](pson & out){
    int turbidezValue = analogRead(PIN_TURBIDEZ);
    float turbidez = turbidezValue * 3.3 / 4095; // Ajuste para 0-3.3V
    out = turbidez;
  };

  thing["oxigenio"] >> [](pson & out){
    int oxigenioValue = analogRead(PIN_OXIGENIO);
    float oxigenio = oxigenioValue * 3.3 / 4095; // Ajuste para 0-3.3V
    out = oxigenio;
  };
}

void loop() {
  thing.handle();

  // Gerar novos valores aleatórios a cada 10 segundos
  delay(10000);

  // Fazer leituras e enviar para o Thinger.io
  int phValue = random(0, 1024);
  float ph = phValue * 3.3 / 1023; // Ajuste para 0-3.3V

  int temperaturaValue = random(0, 1024);
  float temperatura = temperaturaValue * 3.3 / 1023; // Ajuste para 0-3.3V

  int turbidezValue = random(0, 1024);
  float turbidez = turbidezValue * 3.3 / 1023; // Ajuste para 0-3.3V

  int oxigenioValue = random(0, 1024);
  float oxigenio = oxigenioValue * 3.3 / 1023; // Ajuste para 0-3.3V

  // Criando um objeto pson para enviar os dados
  pson data;
  data["ph"] = ph;
  data["temperatura"] = temperatura;
  data["turbidez"] = turbidez;
  data["oxigenio"] = oxigenio;

  // Enviando dados para o Thinger.io
  thing.write_bucket(BUCKET_ID, data);
}
