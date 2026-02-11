# Deep Learning para Séries Temporais

## Definição e Características de Séries Temporais

Uma série temporal é uma sequência de observações de uma variável, coletadas e registradas em intervalos de tempo específicos e regulares. Essas observações podem ser diárias, semanais, mensais, anuais, entre outros intervalos.

Séries temporais são comuns em diversas áreas como economia, finanças, meteorologia, ciências sociais e engenharia, onde é necessário analisar e prever comportamentos ao longo do tempo.


## Principais características de Séries Temporais:

1. **Tendência (Trend):**

Refere-se ao movimento de longo prazo da série temporal. Pode ser uma tendência ascendente, descendente ou constante. A tendência capta a direção geral em que os dados estão se movendo ao longo do tempo.

2. **Sazonalidade (Seasonality):**

Padrões repetitivos ou cíclicos que ocorrem em intervalos regulares, como dias, meses ou anos. A sazonalidade é influenciada por fatores como estações do ano, horários do dia, dias da semana, entre outros.

3. **Ciclicidade (Cyclicality):**

Flutuações que ocorrem em intervalos não regulares e são geralmente influenciadas por fatores econômicos ou outros fatores de longo prazo. Ciclos diferem da sazonalidade por não serem necessariamente regulares.

4. **Estacionaridade (Stationarity):**

Uma série é considerada estacionária se suas propriedades estatísticas, como média, variância e autocorrelação, forem constantes ao longo do tempo. Muitas técnicas de análise de séries temporais assumem estacionaridade, pois facilita a modelagem.

5. **Autocorrelação (Autocorrelation):**

Medida de como os valores da série temporal estão correlacionados com seus próprios valores passados. Autocorrelação alta indica que os valores atuais dependem fortemente dos valores passados.

6. **Rupturas Estruturais (Structural Breaks):**

Mudanças súbitas e significativas nos padrões da série temporal, frequentemente causadas por eventos externos como mudanças políticas, crises econômicas, desastres naturais, entre outros.

7. **Ruído (Noise):**

Variações aleatórias e imprevisíveis nos dados que não seguem um padrão discernível. O ruído pode ser causado por fatores externos aleatórios ou por erros de medição.

9. **Lags (Defasagens) e Diferenças (Differencing):**

Lags referem-se ao uso de valores passados da série para prever valores futuros. Diferenças são usadas para transformar uma série não estacionária em estacionária, subtraindo valores consecutivos.

## Tendência, Sazonalidade e Ciclicidade

### Tendência (Trend)
A  tendência é o componente de uma série temporal que representa o movimento de longo prazo dos dados. É a direção geral em que a série se move ao longo do tempo, podendo ser ascendente, descendente ou constante.

Exemplos:

Ascendente: Aumento contínuo nas vendas de uma empresa ao longo dos anos devido ao crescimento do mercado.\
Descendente: Declínio gradual na popularidade de um produto ao longo do tempo.\
Constante: Níveis de produção de uma fábrica que permanecem estáveis ao longo de vários anos.

Visualização:

Geralmente, a tendência pode ser observada em um gráfico de séries temporais como uma linha suavizada que segue o padrão geral dos dados.


### Sazonalidade (Seasonality)
Sazonalidade é o padrão regular e repetitivo que ocorre em intervalos fixos de tempo dentro da série temporal. Esses padrões são de curta duração e geralmente ocorrem dentro de um intervalo de tempo, influenciados por fatores como estações do ano, feriados ou eventos periódicos.

Exemplos:

Mensal: Aumento nas vendas de sorvete durante os meses de verão.\
Semanal: Maior volume de compras de supermercado nos fins de semana.\
Diária: Picos de tráfego em sites de notícias pela manhã e à noite.

Visualização:

Em um gráfico de séries temporais, a sazonalidade aparece como flutuações regulares que se repetem em intervalos consistentes.

### Ciclicidade (Cyclicality)

Ciclicidade refere-se a flutuações na série temporal que ocorrem em intervalos irregulares e são influenciadas por fatores econômicos, políticos ou sociais de longo prazo. Diferente da sazonalidade, os ciclos não têm periodicidade fixa.

Exemplos:

Econômico: Ciclos de expansão e recessão econômica que podem durar vários anos.
Demográfico: Ciclos de crescimento e declínio populacional em determinadas regiões.
Político: Mudanças no mercado de trabalho devido a ciclos eleitorais.

Visualização:

Em um gráfico, os ciclos aparecem como ondas ou oscilações que não seguem um padrão regular, mas que podem ser observados ao longo de períodos mais longos.


## Não Estacionariedade e Autocorrelação

### Não Estacionariedade
Uma série temporal é considerada não estacionária quando suas propriedades estatísticas, como média, variância e autocorrelação, mudam ao longo do tempo. Em outras palavras, os dados apresentam tendências, sazonalidades ou outras estruturas que variam com o tempo.

Características da Não Estacionariedade:

1. **Média Variável**: A média dos valores da série muda ao longo do tempo.

2. **Variância Variável:** A dispersão dos valores ao redor da média não é constante.

3. **Autocorrelação Variável**: A relação entre os valores em diferentes momentos no tempo muda.

#### Aplicações e Importância da Não Estacionariedade:
 - É Importante identificar e tratar a não estacionariedade para aplicar modelos de séries temporais que pressupõem estacionariedade, como ARIMA.

- A não estacionariedade pode indicar a presença de tendências, sazonalidades ou rupturas estruturais que precisam ser modeladas separadamente.


#### Exemplos de Não Estacionaridade:
- Uma série de preços de ações que mostra tendências de alta e baixa em diferentes períodos.

- Dados de temperatura anual que apresentam uma tendência ascendente devido ao aquecimento global.

### Autocorrelação (Autocorrelation)

**Autocorrelação** mede a correlação entre os valores da série temporal em diferentes momentos no tempo. Em termos simples, é a correlação dos dados da série consigo mesma, mas com um certo atraso (ou defasagem).

#### Funcionamento da Autocorrelação

- **Autocorrelação Positiva:** Valores atuais estão positivamente correlacionados com os valores passados. Por exemplo, se os valores foram altos recentemente, é provável que os valores futuros próximos também sejam altos.

- **Autocorrelação Negativa**: Valores atuais estão negativamente correlacionados com os valores passados. Por exemplo, se os valores foram altos recentemente, é provável que os valores futuros próximos sejam baixos.

- **Nenhuma Autocorrelação:** Não há padrão discernível entre os valores atuais e os valores passados.

#### Aplicações e Importância da Autocorrelação:
 - Usada para identificar padrões repetitivos e dependências temporais nos dados.

 - Essencial para modelar processos autoregressivos (AR), onde os valores futuros são previstos com base em valores passados.

 - Ajuda a determinar a estrutura adequada do modelo para prever a série temporal.
Esses conceitos são fundamentais na análise de séries temporais, pois ajudam a entender a estrutura dos dados e a escolher os métodos apropriados para modelagem e previsão.