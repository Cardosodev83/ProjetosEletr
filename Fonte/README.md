# FONTE
Fonte de tensão ajustável entre 3V a 12V com capacidade de 100mA.

Adotou-se como parametros da entrada: Corrente alternada com 127V de tensao e 60Hz de frequencia.



https://github.com/Cardosodev83/ProjetosEletr/assets/128706259/d225af27-bb15-43af-b5f2-a2721c720896


| Apresentação da Fonte |
| --- |





| Componente | Preço |
| --- | --- |
| Transformador | Emprestado|
| Diodo 1n4007 x10 | R$2,00|
| Capacitor 680uF 25v | R$5,80 |
| Resistor 2k2Ω | R$0,70 |
| Potenciômetro 5kΩ | R$7,00 |
| Diodo Zener 13v | R$0,48 |
| transistor NPN BC337-40 | R$0,70 |
| LED | R$0,33 |
| Placa Protoboard | R$20,40|
| ***TOTAL*** | ***R$37,41*** |

*Componentes comprados na Ca&Ma 

## Ficha Tecnica
### Transformador: 
Componente eletrônico encarregado de converter a voltagem elétrica de entrada em níveis mais adequados para uma aplicação específica, utilizando bobinas e os princípios eletromagnéticos da Lei de Faraday-Lenz. No projeto, foi selecionado um transformador comercial para transformar uma entrada de 127V para cerca de 17V.
### Diodos:
Componentes eletrônicos com a propriedade de permitir a passagem de corrente elétrica em apenas um sentido. No projeto, são empregados na montagem de uma ponte de diodos, um dispositivo retificador de tensão que possibilita a utilização de ambos os ciclos da corrente alternada de entrada.
### Resistores:
Componentes eletrônicos que possuem valores predefinidos de resistência, responsáveis por assegurar a corrente adequada no circuito, garantindo o funcionamento correto de cada um dos componentes presentes.
### Capacitor:
Componente eletrônico que tem a capacidade de armazenar pequenas quantidades de energia elétrica e fornecer corrente contínua quando a tensão interna é maior do que a externa. No projeto, utilizamos um capacitor de 680uF.
### Potenciômetro:
Componente elétrico com resistência variável, permitindo regular o fluxo de corrente e, consequentemente, modificar os valores de tensão do circuito. No projeto, foi utilizado para permitir a seleção dos valores de tensão entre 3V a 12V.
### Diodo Zener:
Variação do diodo convencional conhecido como diodo zener, caracterizado por permitir a passagem de corrente apenas quando a tensão aplicada é superior à sua tensão de trabalho especificada pelo fabricante, limitando assim a voltagem máxima permitida no circuito. No projeto, foi utilizado para garantir valores de tensão máxima inferiores a 13V, com uma margem de erro máxima de 12V.
### Transistor:
Componente eletrônico capaz de comutar ou amplificar sinais e potência elétrica. No projeto, foi utilizado para controlar a corrente elétrica no circuito, a fim de evitar desperdício de corrente no diodo zener.

## Funcionamento:

### Transformacao:
Nesta fase, os sinais elétricos de entrada (corrente alternada com tensão de 127V e frequência de 60Hz) são reduzidos em sua diferença de potencial pelo transformador, resultando em valores próximos a 17V, enquanto as outras características da forma de onda são mantidas.
### Retificacao:
Nesta etapa, os sinais elétricos em corrente alternada (originados da etapa de transformação) são retificados para um sinal contínuo positivo através da ação da ponte de diodos. Nessa estrutura, a disposição geométrica dos diodos no circuito alterna entre permitir e bloquear a passagem de corrente elétrica, estabelecendo, durante ambos os ciclos da onda, um sentido único para o fluxo de elétrons. O resultado desse processo é uma completa eliminação dos valores negativos de tensão em relação ao eixo das abscissas.
### Filtragem: 
Nesta etapa, os sinais elétricos, que são arredondados devido à natureza senoidal dos valores de entrada, são aproximados para um sinal contínuo através da ação do capacitor eletrolítico. Essa configuração, após ser carregada brevemente durante os períodos de tensão máxima, fornece corrente elétrica nos momentos em que a tensão de entrada diminui, simulando assim uma saída de tensão contínua. As imperfeições desse processo são parametrizadas pelo termo "ripple".
### Regulagem:
Nesta etapa, os sinais elétricos que foram processados nas etapas anteriores são submetidos a um maior nível de estabilização e linearização por meio da ação combinada do diodo zener e do transistor. Isso garante que a saída do sistema seja uma tensão fixa e constante, mesmo diante de pequenas imperfeições dos processos anteriores ou da presença de ruídos devido a flutuações de corrente e temperatura. Por fim, o potenciômetro é ativado para ajustar o valor de saída dentro da faixa especificada de 3V a 12V.

Board no EAGLE

![Board no EAGLE](https://i.imgur.com/DSsR56V.png)

Esquemático no EAGLE
![Esquemático no EAGLE](https://i.imgur.com/WNwCi8H.png)

[Circuito no Falstad](https://www.falstad.com/circuit/circuitjs.html?ctz=CQAgjCAMB0l3BWcA2aAOMB2ALGXyEw1sESQFJyRsBmcgUwFowwAoAN3DACYVKXe3NGijgQyfmkrSo0BKwDuXXmAngAnCrWRFykEJFhN+4VFYAVDYNMG+o7LKJpkmTSSE1ITkdzmkpQgjqEmjckAhIjDBgcNzcNBRSaJjO2Miy6pmsACYgCVqU2HD6kD7gAHJFkNg5eQiCCOlVJWVglXA1uZ4OYSL5dirt1bXdLXUN6YNVNUq2qpT982ZKzb3UUmPcuv3cjeMmIjpKOzanh9vVY6P9R3mX-dgbN6wATuTYPZi8pA43+mE6ADG60oa0eC3qohg8BcmTh8IReTA0DANEwNGQxHUNEycXUsjgbBWGzWPzGRJB+zJzyUZLWIXJrBoDgAXvQAHb0F7MOj8aCYPD5DCaDDwbhMTCiFS81gs8SlPJheU+GwgNmc7mo3QMmhKnWQ27674ffY6VTGnoKulffQgbL0ABmAEMAK4AGwALow3fRchAZNC2G8GfSFbt0vx4KwAOaUh4bfBQ7VhhUpS3nJQhvYuCZmD0gTCQ8MF4j6Pb8EDMNAojAIHEUbDqAU8WQCxs0TxoHHcIzBSUxSj253uj2vcQ2-o5xUyIhhbUTyFG5biM4Fovl5M+bNh0xmnDj3NT3UVijFaHhEAAJXoAGcAJY3j1O9mA+i6NNjD-cIrLr82j+jDobwAZcAEGuAc5KGBvBHgarAAPZ1OIvzUJAmQlLIvD8KwQA)

![Circuito](https://github.com/Cardosodev83/ProjetosEletr/blob/master/Fonte/circuit-20230713-1430.png?raw=true)


## Cálculos

Como o objetivo era  um Ripple pequeno(10%), a fórmula utilizada simplificada: 
Vs/RP = 2 * F * C *R

![Cálculo](https://github.com/Cardosodev83/ProjetosEletr/blob/master/Fonte/IMG-20230707-WA0040.jpg?raw=true)

O capacitor minímo deveria ser de 371 uF, porém como poderiamos errar as contas resolvemos utilizar um de 680 uF, que não altera em nada o circuito, só deixa o ripple menor e o projeto com um custo maior.
##Cortador Simétrico

Em nossa primeira tentativa de ligar a fonte, por um erro na placa na ponte de diodos, acabamos criando uma nova função para o circuito, um cortador simétrico pois esse foi o resultado que tivemos:

![Diodo Cortado ao meio](https://github.com/Cardosodev83/ProjetosEletr/blob/master/Fonte/WhatsApp%20Image%202023-07-10%20at%2022.51.55.jpeg?raw=true)


