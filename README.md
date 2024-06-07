# Qualidade-da-Agua

Nome da nossa aplicação/projeto: PraiApp
image

Escopo do Projeto
Para a criação do nosso projeto utilizamos dois pontos focais: Soluções para Redução da Poluição Marinha e Ferramentas de Dados para Gestão Sustentável dos Oceanos. Diante do mar de possibilidades que tínhamos em nossa frente, decidimos focar nas regiões costeiras do nosso país e suas praias. Dessa forma surgiu a ideia do PraiApp.

Introdução
Atualmente um dos maiores problemas a serem resolvidos pelo ser humano é a poluição deixada pelo avanço tecnológico e falta de cuidado, algo que muitos vêm tentando solucionar em várias frentes como reciclagem e produtos reutilizáveis. Dentro deste contexto um dos locais do meio ambiente em que podemos proteger é o oceano, contendo a vida marinha. Considerando este contexto, vê-se a necessidade de tomar uma atitude e mudar a realidade de nossos oceanos, e no caso desta proposta, melhorar a qualidade de vida da vida marinha a partir do controle da poluição em praias.

O que é o PraiApp?
Uma aplicação voltada para a gestão ambiental criada com o intuito de auxiliar instituições responsáveis e interessadas em cuidar das nossas praias, levando a elas as informações necessárias sobre o estado atual de uma região específica, podendo assim focar seus recursos nos pontos principais a serem melhorados de modo rápido e intuitivo. Dados esses que só serão atualizados por instituições de confiança, ONGs com histórico positivo e instituições governamentais relacionadas, fazemos essa seleção para que tenhamos certeza de que estaremos trabalhando com dados de confiança. Assim, uma pessoa que gostaria de ajudar o meio ambiente e utilizar a nossa aplicação como uma ferramenta deveria procurar se afiliar a uma dessas organizações.

Sistema de Avaliações
Antes de tudo, é necessário entender os pontos de cada tópico de avaliação:

Limpeza: Trata de avaliar a quantidade de resíduo deixada na faixa de areia da praia em questão.
Estrutura: Trata de avaliar o quanto a praia está preparada (ou não) para receber seus visitantes, considerando pontos relacionados à infraestrutura, ou seja, se está se preocupando em manter uma infraestrutura que não agride o meio ambiente, disposição de banheiros, pontos para descarte de lixo, entre outros.
Sinalização: Trata de avaliar quão bem sinalizada está aquela praia, considerando pontos como sinalização de perigo em pontos de risco, sinalização para informar aos banhistas sobre as condições do mar, sinalização para indicar os pontos adequados onde o descarte de lixo deve ser realizado, etc.
Monitoramento: Avalia quanto as organizações responsáveis estão se preocupando em monitorar e contribuir para o controle de todos os outros pontos de avaliação. Esse ponto é fundamental para a educação das pessoas que frequentam determinada região.
Poluição: Trata de avaliar o quanto de resíduo está sendo descartado na praia. Estamos falando de canais, resíduos químicos, lixo contaminante e materiais não biodegradáveis, ou seja, tudo aquilo que é descartado indevidamente e acaba parando no mar.
Conservação Ambiental: Avalia o quão bem cuidada está aquela praia para a conservação do habitat natural dos seres vivos da região, se o uso daquela praia está sendo feito de maneira sustentável e que não agride o meio ambiente.
Total: Considera todos os pontos avaliados acima e gera uma avaliação geral sobre a praia.
De certo modo, todos os pontos estão interligados. É evidente que todos os pontos de avaliação se correlacionam em certo nível, porém abordam separadamente diferentes tópicos. É assim que desejamos entregar uma solução de fácil entendimento e análise.

Guia para Executar a aplicação (PraiApp):
Maiores detalhes para isso podem ser conferidos no vídeo (Último Item) de apresentação da nossa aplicação, onde teremos um exemplo de uso da mesma.

Caso queira desconsiderar o vídeo, pode seguir os seguintes passos:

2.1 - Abra o nosso projeto no Visual Studio 2022, certifique-se de ter o .NET 7 instalado em sua máquina.

2.2 - Dê dois cliques em PraiApp.sln.

2.3 - A partir desse momento já é possível iniciar a aplicação clicando no botão run em verde com o descritivo "https" (Imagem abaixo).

image

2.4 - Pronto, você está dentro da nossa aplicação e está livre para navegar sobre suas funcionalidades.

Sequência de Endpoints
Temos um CRUD completo de todas as Entidades presentes na nossa aplicação, assim cada uma delas possui os seguintes endpoints:

Create
Delete
Details
Edit
Index
Logo, quando alguma dessas funcionalidades for acessada, terá uma URL semelhante a esta: https://localhost:7002/EnderecosModel/Create, assim o valor para a Model variando de acordo com a Entidade que estiver acessando e também o verbo.

Exemplo de Endpoint para testes:
Observação: Esse seria apenas um exemplo de caminho lógico com a nossa aplicação acessada

https://localhost:7002 (HomePage)
https://localhost:7002/EnderecosModel (Index)
https://localhost:7002/EnderecosModel/Create
https://localhost:7002/EnderecosModel/Details/(código do endereco em detalhamento)
https://localhost:7002/EnderecosModel/Edit/(código do endereco a ser editado)
https://localhost:7002/EnderecosModel/Delete/(código do endereco a ser deletado)
Vídeo Pitch
PlaceHodler

Vídeo de Apresentação
PlaceHolder
