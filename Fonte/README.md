# FONTE
Fonte de tensão ajustável entre 3V a 12V com capacidade de 100mA.

Adotou-se como parametros da entrada: Corrente alternada com 127V de tensao e 60Hz de frequencia.


| Componente | Preço |
| --- | --- |
| Transformador | Emprestado|
| Diodo 1n4007 x4 | R$0,70|
| Capacitor 680uF 25v | R$5,70 |
| Resistor 2k2Ω | R$0,70 |
| Potenciômetro Linear 5kΩ | R$7,00 |
| Diodo Zener 13v | R$0,70 |
| transistor NPN BC337-40 | R$0,69 |
| LED | R$0,50 |
| Placa Protoboard | R$20,40|
| ***TOTAL*** | ***R$36,21*** |

*Componentes comprados na Ca&Ma 

## Ficha Tecnica
### Transformador: 
(RESUMO)
### Diodos:

### Resistores:

### Capacitor:

### Potenciômetro:

### Diodo Zener:

### Transistor:


## Funcionamento:
### Transformacao:
Nesta etapa, os sinais eletricos da entrada(corrente alternada com 127V de tensao e 60Hz de frequencia) tem sua DDP reduzida pelo transformador para valores proximos a 24V, sendo mantidas as demais caracteristicas de onda.
### Retificacao:
Nesta etapa, os sinais eletricos em corrente alternada(provenientes da etapa de transformacao) sao retificados para um sinal contiuamente positivo pela acao da ponte de diodos. Nesta estrutura, a disposicao geometrica dos diodos no circuito ora permite ora bloqueia a passagem de corrente eletrica, de modo a definir, durante ambos os ciclos da onda, um sentido unico para o fluxo de eletrons. O resultado do procedimento e uma reflexao completa dos valores negativos de tensao em relacao ao eixo das abcissas.
### Filtragem: 
Nesta etapa, os sinais eletricos arredondados pela caracteristica senoidal dos valores de entrada sao aproximados para valores continuos pela acao do capacitor eletrolitico. Tal estrutura, apos ser carregada brevemente durante os periodos de voltagem maxima, supre com libercao de corrente eletrica os momentos de diminuicao na voltagem de entrada, de modo a simular uma saida de tensao continua, sendo suas imperfeicoes parametrizadas pelo ripple.
### Regulagem:
Nesta etapa, os sinais eletricos ja trabalhados pelas etapas anteriores sao submentidos a uma maior establizacao e linearizacao em funcao da acao complementar entre o diodo Zener e o transistor, de modo que a saida do sistema configure uma tensao fixa e constante, a despeito de ligeiras imperfeicoes de processos anteriores ou mesmo da presenca de ruido por flutuacoes de corrente e temperatura. Finalmente, ativa-se o potenciometro para regular o valor de saida entre os especificados 3V e 12V.

[Circuito no Falstad](https://www.falstad.com/circuit/circuitjs.html?ctz=CQAgjCAMB0l3BWcMBMcUHYMGZIA4UA2ATmIxAUgpABZsKBTAWjDACgB3CmmkbbQrWwo+AqGwBO3Xijx5powVTBpOClAkEIeIWfMhrtvMMRFHdKXgbAZedEZar2+kYxXhRYkJACUGAZwBLfwAXAEMAOwBjBjUBeUc+QgSMEQMuHhSzFV0aKnShEX5BeMVxKWdiwpcrXXg2EIocxPNE5RAWYmgwbGJIZMxsPGIwQltPDDAaYchSGhQUYgIMeTA4EAATBgAzMIBXABsQuOTcp2Ez8S5SkzMdW-EAc0uqxLz88qTV0y-LqjQ4GxRkVXOAfrgZJpdJsdvsjkwDgwNuAoKiYJB2NdTlUIWUCqVcQSxAZsLwAF4MCIMCQsejKaCTOgIWS3PBrdDMcj-cB0thk36E06YBwgClUmk9OKgh43H4FRI40FVeV5MEg4xythRS4PBXEzzwMakY0m018FCwWzEBAmQg2ZZpLzsKS4jQlJX6haAriEXivVXKtS+tUgYOBrisBypWhZK7gZqqyO6aMFUbKH6JB4GZHBh5JxIiMAAOXeNDYOY1hZyUxk4BLcDLyPzicI6ZFxdL5fjhfurZDhfrrjYABUOtNkyJxzXUVZunIjZZmXhcGA5AloMy+nJsKMBGBtCIWNAxjYaK2ra5iDQEMwcjBjWoWLIJ2PYwYAG4dFSrHRPt8ovtVw+fIN0fb9wF-KcdAKKDjGraC2CAA)
![Circuito](https://user-images.githubusercontent.com/24720405/179834899-ba1af617-4492-4a14-963c-7540d1b17340.png)
Esquemático no EAGLE
![Esquemático no EAGLE](https://i.imgur.com/WNwCi8H.png)
Board no EAGLE

![Board no EAGLE](https://i.imgur.com/DSsR56V.png)

