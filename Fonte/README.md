# FONTE
Fonte de tensão ajustável entre 3V a 12V com capacidade de 100mA.

Adotou-se como parametros da entrada: Corrente alternada com 127V de tensao e 60Hz de frequencia.


| Apresentação da Fonte | Cálculo do Ripple |
| --- | --- |
| <video> VIDEO </video> | <video > VIDEO</video> |



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
Componente eletrônico encarregado de converter a voltagem elétrica de entrada em níveis mais adequados para uma aplicação específica, utilizando bobinas e os princípios eletromagnéticos da Lei de Faraday-Lenz. No projeto, foi selecionado um transformador comercial para transformar uma entrada de 127V para cerca de 24V.
### Diodos:
Componentes eletrônicos com a propriedade de permitir a passagem de corrente elétrica em apenas uma direção. No projeto, são empregados na montagem de uma ponte de diodos, um dispositivo retificador de tensão que possibilita a utilização de ambos os ciclos da corrente alternada de entrada.
### Resistores:
Componentes eletrônicos que possuem valores predefinidos de resistência, responsáveis por assegurar a corrente adequada no circuito, garantindo o funcionamento correto de cada um dos componentes presentes.
### Capacitor:
Componente eletrônico que tem a capacidade de armazenar pequenas quantidades de carga elétrica e fornecer corrente contínua quando a tensão interna é maior do que a externa. No projeto, utilizamos um capacitor de 680uF.
### Potenciômetro:
Componente elétrico com resistência variável, permitindo regular o fluxo de corrente e, consequentemente, modificar os valores de tensão do circuito. No projeto, foi utilizado para permitir a seleção dos valores de tensão entre 3V a 12V.
### Diodo Zener:
Variação do diodo convencional conhecido como diodo zener, caracterizado por permitir a passagem de corrente apenas quando a tensão aplicada é superior à sua tensão de trabalho especificada pelo fabricante, limitando assim a voltagem máxima permitida no circuito. No projeto, foi utilizado para garantir valores de tensão máxima inferiores a 13V, com uma margem de erro máxima de 12V.
### Transistor:
Componente eletrônico capaz de alternar ou amplificar sinais e potência elétrica. No projeto, foi utilizado para controlar a corrente elétrica no circuito, a fim de evitar desperdício de corrente no diodo zener.

## Funcionamento:

### Transformacao:
Nesta fase, os sinais elétricos de entrada (corrente alternada com tensão de 127V e frequência de 60Hz) são reduzidos em sua diferença de potencial pelo transformador, resultando em valores próximos a 24V, enquanto as outras características da forma de onda são mantidas.
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

[Circuito no Falstad](https://www.falstad.com/circuit/circuitjs.html?ctz=CQAgjCAMB0l3BWcA2aAOMB2ALGXyEw1sESQFJyRsBmcgUwFowwAoAN3DACYVKXe3NGijgQyfmkrSo0BKwDuXXmAngAnCrWRFykEJFhN+4VFYAVDYNMG+o7LKJpkmTSSE1ITkd2jZaCDQUmDSaeJBodAjomJCe2NwJsQiECEx4supZrAAmIEFalNhw+hH64AByxZDYufkIggjI1CXcZSpVcLV58aUiBXYd1d35NX31jc1DXbq2qpQD82ZK1ePYUuM6SgPcTRMmIlv7tiemR71t-WMD59cN1Bs3rABO5P76mLykDjf6bToAYwelEuwP20lgcBcWRhsLh+V8qgI-mQqjQ3EwkVkcDYKw2oO+m106wW90JTyUhNBEh8ZR0NAcAC96AA7ejPZh0fjQTB4AoYTQYeDcJiYUQqLmsRniMo0Noynw2EDMtkcsA0XQ0hGULUUhX7cn3HSqL7vAlmz7lHL0ABmAEMAK4AGwALownfQ8hAZDAvC99dT2nsQfBWABzMEDEnUVSiI5a0GYhyg+NB5ouSZmF0gTD3XbNJP6YNiZjqaDceJob4IXlxOWyXnrdTq5DrBINbgQMAla3250u-0Z-ZDuUyf7xy0DXVGzU2Uy5zOpnx7BNnVhYBxD-PiSfyiAUEq+yBIABK9AAzgBLc8uu0sgH0XSFxPEfTFZY518Y3iF3o6V6-mMv5GuAbRPq+U6TjOAD29TiD8LRZKUsi8PwrBAA)

![Circuito](https://user-images.githubusercontent.com/24720405/179834899-ba1af617-4492-4a14-963c-7540d1b17340.png)


