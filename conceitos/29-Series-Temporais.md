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


## Fundamentos da Modelagem de Séries Temporais

A modelagem de séries temporais é uma técnica estatística usada para analisar e prever valores futuros com base em dados observados ao longo do tempo.

### 1. Identificação e Diagnóstico da Série Temporal

#### a. Visualização dos Dados

**Plotar a série temporal**: Uma visualização inicial ajuda a identificar tendências, sazonalidades, ciclos e outliers.
Diagramas de dispersão: Úteis para observar padrões de autocorrelação.

#### b. Análise Exploratória de Dados (EDA)

**Estatísticas descritivas**: Média, mediana, variância, desvio padrão.
**Decomposição da série:** Separar a série em componentes de tendência, sazonalidade e resíduo.

#### c. Teste de Estacionaridade

**Teste de Dickey-Fuller aumentado (ADF)**: Testa a hipótese nula de que a série é não estacionária.
**Teste KPSS (Kwiatkowski-Phillips-Schmidt-Shin)**: Testa a hipótese nula de que a série é estacionária.

### 2. Transformações e Preparação dos Dados

#### a. Diferença (Differencing)

Usada para remover a tendência e tornar a série estacionária. Diferenças de primeira ordem e de ordem superior podem ser aplicadas.

#### b. Transformação Logarítmica

Estabiliza a variância em séries com crescimento exponencial ou heterocedasticidade.

#### c. Remoção de Sazonalidade

Ajuste sazonal para remover padrões sazonais regulares.

### 3. Seleção de Modelos
#### a. Modelos Autoregressivos (AR)

**AR(p)**: Modela a série como uma função linear de seus valores passados (lags).
#### b. Modelos de Média Móvel (MA)

**MA(q)**: Modela a série como uma função linear de erros passados.

#### c. Modelos ARMA e ARIMA

**ARMA(p,q)**: Combinação de AR e MA para séries estacionárias.
**ARIMA(p,d,q)**: Extensão do ARMA que inclui diferenciação (d) para tornar a série estacionária.

##### d. Modelos Sazonais (SARIMA)

**SARIMA(p,d,q)(P,D,Q)[s]**: Extensão do ARIMA que inclui componentes sazonais.

#### e. Modelos Exponenciais

**Suavização Exponencial Simples**: Para séries sem tendência ou sazonalidade.
**Suavização Exponencial Dupla**: Para séries com tendência.
**Suavização Exponencial Tripla (Holt-Winters)**: Para séries com tendência e sazonalidade.

### 4. Estimação dos Parâmetros
#### a. Métodos de Estimação

**Máxima verossimilhança:** Estima parâmetros maximizando a probabilidade dos dados observados.
**Método dos momentos**: Usa momentos estatísticos (média, variância) para estimar parâmetros.

### 5. Diagnóstico do Modelo
#### a. Análise de Resíduos
**Autocorrelação dos resíduos**: Resíduos devem ser não correlacionados (ruído branco).
**Teste Ljung-Box:** Avalia a independência dos resíduos.
**Normalidade dos resíduos**: Verificar se os resíduos seguem uma distribuição normal.

### 6. Validação e Previsão
#### a. Divisão dos Dados

**Conjunto de treino e teste**: Dividir os dados para treinar o modelo e testar sua performance.

#### b. Métricas de Avaliação

**Erro Absoluto Médio (MAE)**: Média das diferenças absolutas entre valores observados e previstos.

**Erro Quadrático Médio (MSE)**: Média dos quadrados das diferenças entre valores observados e previstos.

**Raiz do Erro Quadrático Médio (RMSE)**: Raiz quadrada do MSE.

**Erro Percentual Absoluto Médio (MAPE)**: Média dos erros percentuais absolutos.

### 7. Aplicação do Modelo e Implementação
#### a. Previsão

Usar o modelo ajustado para prever valores futuros.

#### b. Monitoramento e Atualização

Continuar monitorando a precisão do modelo e atualizar com novos dados conforme necessário.

> Esses fundamentos fornecem um guia abrangente para a modelagem de séries temporais, permitindo a análise e previsão precisas de dados temporais.

## Métodos Estatísticos Tradicionais - ARIMA, SARIMA e Holt-Winters

Os métodos estatísticos tradicionais como ARIMA, SARIMA e Holt-Winters são amplamente utilizados na modelagem de séries temporais devido à sua eficácia e simplicidade. Vamos explorar cada um desses métodos com mais detalhes.

### ARIMA (Autoregressive Integrated Moving Average)
O modelo ARIMA é um dos métodos mais usados para séries temporais, combinando três componentes: autoregressivo (AR), integração (I) e média móvel (MA). É adequado para séries que são estacionárias após uma diferenciação.

Componentes:

**AR (p)**: Parte autoregressiva, onde os valores passados são usados para prever o valor atual.\
**I (d)**: Diferenciação, usada para tornar a série estacionária subtraindo valores consecutivos.\
**MA (q)**: Parte de média móvel, onde os erros passados são usados para modelar o valor atual.

### SARIMA (Seasonal ARIMA)
SARIMA é uma extensão do ARIMA que incorpora componentes sazonais, tornando-o adequado para séries com padrões sazonais.

Componentes:

**AR (p), I (d), MA (q):** Componentes não sazonais.\
**SAR (P), SI (D), SMA (Q)**: Componentes sazonais, onde P, D e Q são as ordens da parte autoregressiva sazonal, diferenciação sazonal e média móvel sazonal, respectivamente.\
**s:** Período sazonal.

### Holt-Winters (Suavização Exponencial Tripla)
O método Holt-Winters é uma técnica de suavização exponencial que ajusta componentes de nível, tendência e sazonalidade.

Componentes:

**Nível (l)**: Estimativa da média atual da série.\
**Tendência (b)**: Estimativa da tendência atual.\
**Sazonalidade (s)**: Estimativa do componente sazonal.

Tipos:

**Aditivo**: Adequado para séries com sazonalidade constante ao longo do tempo.\
**Multiplicativo**: Adequado para séries com sazonalidade que varia proporcionalmente ao nível da série.

### Comparação e Seleção do Modelo
**ARIMA**: Adequado para séries sem sazonalidade ou com sazonalidade que pode ser removida pela diferenciação.

**SARIMA**: Ideal para séries com padrões sazonais regulares.

**Holt-Winters**: Preferível para séries com padrões de tendência e sazonalidade, especialmente quando a sazonalidade é constante ou proporcional ao nível da série.

### Implementação em Softwares Estatísticos
Esses modelos são implementados em diversas bibliotecas de software estatístico e linguagens de programação como Python (pandas, statsmodels), R (forecast) e outros, facilitando a aplicação prática desses métodos.

A escolha do modelo adequado depende das características da série temporal específica, e uma análise cuidadosa dos dados é essencial para uma modelagem precisa e eficaz.
