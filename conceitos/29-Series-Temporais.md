# Deep Learning para Séries Temporais

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

## Limitações dos métodos estatísticos e como Deep Learning pode ajudar

Os métodos estatísticos tradicionais, como ARIMA, SARIMA e Holt-Winters, têm sido amplamente utilizados na modelagem de séries temporais. No entanto, eles apresentam algumas limitações, especialmente quando se trata de lidar com grandes volumes de dados, complexidades não lineares e padrões dinâmicos.

Deep Learning pode ajudar a superar essas limitações de várias maneiras. Vejamos a seguir:

### Limitações dos métodos estatísticos tradicionais:

1. **Assumem Linearidade:**

Muitos métodos, como ARIMA e SARIMA, assumem que os relacionamentos entre variáveis são lineares. Isso pode ser insuficiente para capturar padrões não lineares complexos em dados reais.

2. **Necessidade de Estacionaridade**:

Métodos como ARIMA requerem que os dados sejam estacionários, o que muitas vezes implica a aplicação de transformações e diferenciações que podem complicar o modelo e nem sempre remover todos os aspectos não estacionários.

3. **Dificuldade em capturar sazonalidades e ciclos complexos**:

Enquanto SARIMA pode lidar com sazonalidades simples, ele pode falhar em capturar sazonalidades múltiplas ou padrões cíclicos complexos presentes nos dados.

4. **Dependência de parâmetros específicos**:

Os modelos tradicionais exigem a seleção e ajuste manual de parâmetros, o que pode ser demorado e suscetível a erros.

5. Limitações na capacidade de modelar grandes volumes de dados:

Modelos tradicionais podem ter dificuldades em lidar com grandes volumes de dados e múltiplas variáveis, tornando a análise ineficiente para dados de alta dimensão.

### Como Deep Learning pode ajudar?

1. **Capacidade de Capturar Relações Não Lineares**:

Redes neurais profundas, como **LSTM** (Long Short-Term Memory) e **GRU** (Gated Recurrent Units), são capazes de capturar padrões não lineares e dinâmicos em séries temporais, oferecendo maior flexibilidade e precisão.

2. **Modelagem de dados não estacionários**:

Modelos de Deep Learning podem lidar diretamente com dados não estacionários, sem a necessidade de transformações complicadas. Eles podem aprender padrões sazonais e de tendência complexos diretamente dos dados brutos.

3. **Capacidade de lidar com sazonalidades e ciclos complexos**:

Modelos como LSTM e GRU são especialmente eficazes para capturar dependências de longo prazo e padrões sazonais múltiplos, superando as limitações dos métodos tradicionais.

4. **Escalabilidade e eficiência com grandes volumes de dados**:

Deep learning é adequado para grandes volumes de dados e pode processar múltiplas variáveis simultaneamente. Isso é particularmente útil em aplicações com grandes conjuntos de dados e múltiplos fatores influenciadores.

5. **Automatização da seleção de parâmetros**:

Através de técnicas de otimização, modelos de Deep Learning podem automaticamente ajustar seus parâmetros durante o treinamento, reduzindo a necessidade de intervenção manual.
Uma abordagem híbrida que combina métodos estatísticos tradicionais com Deep Learning pode oferecer o melhor de ambos os mundos. Por exemplo, métodos tradicionais podem ser usados para pré-processamento e extração de características, enquanto modelos de Deep Learning podem ser aplicados para capturar padrões complexos e fazer previsões finais.

Embora os métodos estatísticos tradicionais sejam valiosos e amplamente utilizados, suas limitações tornam Deep Learning uma alternativa atraente para séries temporais complexas e volumosas.

A capacidade dos modelos de Deep Learning de lidar com não linearidades, múltiplas variáveis e grandes volumes de dados os torna ferramentas poderosas para a análise e previsão de séries temporais modernas.


## Modelos de Atenção e Transformers para Séries Temporais

Os modelos de atenção e transformers revolucionaram muitas áreas da inteligência artificial, incluindo o processamento de séries temporais. Eles são particularmente eficazes para capturar dependências complexas e de longo prazo entre pontos temporais, algo que modelos tradicionais e até mesmo redes neurais recorrentes (RNNs) podem ter dificuldades para fazer. Vamos explorar como esses modelos funcionam e como são aplicados às séries temporais.


### Modelos de Atenção (Attention Models)

Os modelos de atenção funcionam atribuindo pesos a diferentes partes da entrada, permitindo que o modelo se concentre em partes relevantes dos dados enquanto ignora outras menos importantes. Isso é especialmente útil para capturar dependências de longo prazo em séries temporais.

Componentes Principais:

#### 1. Pontuações de Atenção (Attention Scores):

Calculam a importância de cada ponto de entrada em relação ao ponto atual sendo processado.

#### 2. Softmax:

Aplica uma função softmax para normalizar as pontuações de atenção em um conjunto de pesos que somam 1.

#### 3. Contexto:

Calcula uma combinação ponderada dos pontos de entrada com base nos pesos de atenção, produzindo um vetor de contexto.

### Transformers
Transformers são uma arquitetura que usa múltiplas camadas de mecanismos de atenção e redes feedforward para processar entradas sequenciais, capturando relações complexas e dependências de longo prazo. Eles não dependem de recorrência, o que os torna mais paralelizáveis e eficientes.

Componentes Principais:

#### 1. Camadas de Atenção Multi-Cabeça (Multi-Head Attention Layers):

Usam várias "cabeças" de atenção para aprender diferentes partes da sequência simultaneamente. Cada cabeça aplica uma função de atenção separada, permitindo que o modelo capture diferentes aspectos das dependências temporais.

#### 2. Feedforward Layers:

Aplicam redes neurais densas para processar as saídas das camadas de atenção, permitindo que o modelo aprenda representações mais complexas.

#### 3. Camadas de Normalização e Dropout:

Melhoram a estabilidade e evitam overfitting durante o treinamento.

#### 4. Codificação Posicional:

Adiciona informações sobre a posição dos elementos na sequência, compensando a falta de ordem inerente nas operações de atenção.

### Arquitetura do Transformer:

Um transformer típico consiste em várias camadas de codificador (encoder) e decodificador (decoder), onde cada camada tem subcomponentes de atenção e feedforward.

Aplicação de Transformers para Séries Temporais:

#### Temporal Fusion Transformer (TFT):

Um dos modelos mais avançados para séries temporais é o Temporal Fusion Transformer, que combina mecanismos de atenção com outras técnicas para prever séries temporais complexas. Usaremos essa arquitetura no projeto deste capítulo.
Componentes do TFT:

1. **Atenção Multi-Cabeça:**

Permite que o modelo capture dependências de longo prazo em dados temporais.

2. **Codificação Temporal Dinâmica**:

Incorpora diferentes frequências temporais para melhor representar a dinâmica dos dados.

3. **Redes LSTM**:

Utilizadas para capturar dependências sequenciais antes de aplicar as camadas de atenção.

4. **Atenção Temporal e Estatística de Contexto**:

Permite que o modelo ajuste o peso de diferentes partes da série temporal com base em suas características.
Vantagens dos Transformers para Séries Temporais

1. **Captura de Dependências de Longo Prazo**:


O mecanismo de atenção pode focar em qualquer parte da sequência, permitindo que o modelo capture dependências de longo prazo mais eficazmente que RNNs tradicionais.

2. **Paralelização**:

Ao contrário das RNNs, que processam sequências de forma sequencial, os transformers permitem paralelização, tornando o treinamento mais rápido e eficiente.

3. **Flexibilidade**:

Modelos transformers são flexíveis e podem ser ajustados para diferentes tipos de dados e tarefas, incluindo previsão de séries temporais com múltiplas variáveis.

4. **Incorporação de Múltiplas Fontes de Informação**:

Transformers podem facilmente integrar informações de diferentes fontes, como variáveis exógenas e sazonais, melhorando a precisão das previsões.

> Os modelos de atenção e transformers oferecem uma abordagem poderosa e flexível para a modelagem de séries temporais, superando muitas das limitações dos métodos estatísticos tradicionais.

> Eles são particularmente úteis para capturar dependências de longo prazo e padrões complexos em dados temporais, tornando-os uma escolha preferida em muitas aplicações modernas de previsão de séries temporais.

### Como Mecanismos de Atenção Podem Capturar Dependências de Longo Prazo

Os mecanismos de atenção são particularmente eficazes para capturar dependências de longo prazo em séries temporais devido à sua capacidade de considerar todas as partes da sequência de entrada simultaneamente e atribuir diferentes pesos a diferentes partes. 

Funcionamento dos Mecanismos de Atenção:

1. **Pontuações de Atenção (Attention Scores)**


Os mecanismos de atenção começam calculando pontuações de atenção que medem a relevância de cada ponto de entrada em relação ao ponto de saída atual. Essas pontuações são determinadas usando uma função de compatibilidade (como o produto escalar ou uma rede neural) entre a consulta (query) e as chaves (keys).

2. **Normalização das Pontuações (Softmax)**

As pontuações de atenção são normalizadas usando a função softmax para obter os pesos de atenção, que somam 1 e determinam a importância relativa de cada ponto de entrada.

3. **Cálculo do Vetor de Contexto (Context Vector)**

O vetor de contexto é uma combinação ponderada dos valores (values) da sequência de entrada, onde os pesos de atenção determinam a contribuição de cada valor.

#### Captura de Dependências de Longo Prazo

1. **Consideração Simultânea de Toda a Sequência**

Ao contrário dos modelos recorrentes, que processam a sequência de forma sequencial, os mecanismos de atenção consideram toda a sequência de entrada de uma vez. Isso permite que o modelo atribua peso a qualquer parte da sequência, independentemente da distância temporal entre os pontos, capturando assim dependências de longo prazo de maneira eficaz.

2. **Pesos Dinâmicos e Contexto**

Os pesos de atenção são dinâmicos e dependem do contexto atual. Isso significa que o modelo pode ajustar os pesos de acordo com a relevância de diferentes partes da sequência em diferentes momentos, permitindo uma flexibilidade maior na captura de dependências complexas.

3. **Multi-Head Attention**

A atenção multi-cabeça (multi-head attention) permite que o modelo aprenda diferentes tipos de dependências em paralelo. Cada "cabeça" de atenção pode focar em diferentes partes da sequência e capturar diferentes aspectos das dependências temporais.

4. **Codificação Posicional**

Como os mecanismos de atenção não têm uma ordem sequencial intrínseca, a codificação posicional é adicionada para fornecer informações sobre a posição dos elementos na sequência. Essa codificação ajuda o modelo a distinguir entre diferentes posições temporais e a capturar a ordem dos eventos.

### Vantagens dos Mecanismos de Atenção

1. **Flexibilidade na Captura de Dependências**:

Capazes de capturar dependências tanto de curto quanto de longo prazo de maneira eficaz.

2. **Paralelização**:

Permitem o processamento paralelo da sequência, aumentando a eficiência computacional.

3. **Integração de Múltiplas Fontes de Informação**:

Facilmente integráveis com diferentes tipos de dados e variáveis exógenas.
Os mecanismos de atenção e transformers são ferramentas poderosas para modelagem de séries temporais, capazes de superar muitas limitações dos métodos tradicionais e das RNNs. Sua capacidade de considerar toda a sequência simultaneamente e de ajustar pesos dinamicamente permite capturar dependências de longo prazo e padrões complexos de maneira eficiente e eficaz.

## Por que fazemos o shift na Série Temporal?

A função `shift(1)` foi utilizada para engenharia de atributos nos dados financeiros com um propósito muito específico: ela ajusta os dados um período no tempo para frente (por exemplo, um dia no caso de dados diários). Isso é feito por algumas razões principais:

**Evitar Vazamento de Dados (Data Leakage):** Ao usar técnicas de Machine Learning em séries temporais financeiras, é importante que o modelo não tenha acesso a informações futuras no momento de fazer previsões. Usando shift(1), você garante que as previsões para um determinado dia são feitas apenas com dados disponíveis até o dia anterior, evitando que o modelo "veja o futuro" e, assim, obtenha uma avaliação realista de seu desempenho.

**Relacionamento Temporal**: Em muitos casos, o valor de um ativo em um dado momento é mais diretamente influenciado pelos valores imediatamente anteriores do que pelos valores atuais. Por exemplo, ao prever o preço de fechamento, pode ser mais relevante saber o preço de fechamento do dia anterior do que o preço de abertura do mesmo dia. O shift permite alinhar esses valores de modo que as características (features) reflitam adequadamente as dependências temporais.

**Uso em Cálculos de Indicadores Técnicos**: Muitos dos indicadores técnicos usados na análise de dados financeiros, como médias móveis, índice de força relativa (RSI) ou preço médio ponderado pelo volume (VWAP), são calculados com base nos valores anteriores. O shift(1) é usado para alinhar esses indicadores de forma que representem o valor calculado até o dia anterior, garantindo que o modelo utilize informações consistentes e alinhadas temporalmente.

# Modelo Temporal Fusion Transformer

## Construção do Modelo Temporal Fusion Transformer 

O Temporal Fusion Transformer (TFT) é um modelo de Deep Learning avançado desenvolvido para lidar com séries temporais complexas, capturando tanto dependências temporais de curto quanto de longo prazo, além de incorporar múltiplas variáveis exógenas. A construção de um TFT envolve várias etapas, desde a preparação dos dados até a implementação do modelo e ajuste dos hiperparâmetros.

Aqui estão os passos detalhados para construir um modelo Temporal Fusion Transformer:

### 1. Preparação dos Dados

#### a. Coleta e Limpeza dos Dados

**Coleta**: Reúna os dados históricos e as variáveis exógenas relevantes.
**Limpeza**: Trate valores ausentes, remova outliers e normalize/escale os dados.

#### b. Divisão dos Dados

**Treinamento, Validação e Teste**: Divida os dados em conjuntos de treinamento, validação e teste. Uma divisão comum é 70% para treinamento, 15% para validação e 15% para teste.

#### c. Codificação das Variáveis

**Codificação Temporal**: Adicione características temporais, como dia da semana, mês, feriados, etc.
**Codificação de Variáveis Categóricas**: Use técnicas de codificação, como one-hot encoding, para variáveis categóricas.

### 2. Definição da Estrutura do TFT

#### a. Entrada do Modelo

- **Entradas Históricas**: Sequências de dados históricos que serão usadas para fazer previsões.
- **Entradas Futuras**: Variáveis exógenas futuras conhecidas (como feriados, tendências econômicas, etc.).

#### b. Camadas do TFT

**1. Embedding Layer:** Para variáveis categóricas e temporais, embeddings são usados para transformar essas variáveis em vetores de alta dimensão.

**2. Gated Residual Network (GRN):** Captura interações complexas entre variáveis. Consiste em uma combinação de redes totalmente conectadas, dropout, normalização de camada e mecanismos de gating.

**3. Atenção Multi-Cabeça:** Captura dependências de longo prazo na série temporal.

**4. Camadas LSTM:** Capturam dependências de curto prazo e fornecem representações seqüenciais.

**5. Atenção Temporal:** Ajusta os pesos das características temporais dinamicamente.

### 3. Implementação do Modelo

Bibliotecas Necessárias: Utilize bibliotecas como TensorFlow ou PyTorch. 

### 4. Treinamento do Modelo

#### a. Configuração do Treinamento

**Função de Custo**: Normalmente, a função de custo é o erro quadrático médio (MSE) ou outra função de perda apropriada.

**Otimizador**: Adam ou outros otimizadores baseados em gradiente.

#### b. Loop de Treinamento


### 5. Avaliação e Ajuste
#### a. Avaliação do Modelo

**Métricas de Desempenho**: Use métricas como RMSE, MAE, MAPE para avaliar o desempenho no conjunto de teste.

#### b. Ajuste de Hiperparâmetros

**Busca em Grade ou Aleatória**: Ajuste hiperparâmetros como a taxa de aprendizado, número de camadas, tamanho dos embeddings, etc.

#### c. Diagnóstico de Resíduos

**Análise de Resíduos**: Verifique os resíduos para identificar padrões não capturados pelo modelo e ajustar a estrutura ou os hiperparâmetros conforme necessário.

### 6. Implementação em Produção

#### a. Implementação

**Script de Previsão**: Desenvolva scripts para carregar o modelo treinado e fazer previsões com novos dados.
Automação: Configure pipelines de dados para alimentar continuamente novos dados ao modelo e gerar previsões.

### b. Monitoramento

**Monitoramento Contínuo**: Monitorar o desempenho do modelo em produção e ajustar conforme necessário com novos dados ou re-treinamentos.

> Construir um modelo Temporal Fusion Transformer envolve uma combinação de preparação cuidadosa dos dados, definição da arquitetura do modelo, treinamento meticuloso e avaliação rigorosa. Com essas etapas, você pode desenvolver um modelo poderoso para previsão de séries temporais complexas, capaz de capturar tanto dependências de curto quanto de longo prazo.

## Arquitetura Temporal Fusion Transformer

A arquitetura Temporal Fusion Transformer (TFT) é um modelo de rede neural projetado para lidar com séries temporais multivariadas, integrando dados históricos e conhecimentos específicos do contexto para fazer previsões precisas. Aqui estão os principais componentes da arquitetura TFT:

**Camada de Entrada e Pré-processamento:** A entrada do TFT consiste em três tipos principais de dados: variáveis estáticas (que não mudam ao longo do tempo), variáveis conhecidas (disponíveis no futuro) e variáveis observadas (históricas). Cada tipo de dado é pré-processado adequadamente para garantir que o modelo possa interpretá-lo corretamente.

**Gating Mechanisms (Mecanismos de Portão)**: TFT utiliza mecanismos de gating, como o Gated Linear Unit (GLU), para controlar o fluxo de informações no modelo. Esses mecanismos ajudam a modelar interações complexas e não-lineares e a filtrar ruídos irrelevantes.

**Variable Selection Networks**: As redes de seleção de variáveis são usadas para identificar e priorizar as variáveis mais importantes para a previsão. Isso ajuda o modelo a se concentrar nas informações mais relevantes, melhorando a precisão e a eficiência do modelo.

**Processamento Temporal**: O coração do TFT é a sua capacidade de processar sequências temporais. Ele usa uma combinação de camadas convolucionais e mecanismos de atenção para capturar padrões temporais de longo e curto prazo. A atenção multi-cabeça permite que o modelo avalie a importância relativa de diferentes pontos no tempo.

**Decoder e Saída**: Na fase final, o TFT utiliza as representações aprendidas das etapas anteriores para fazer previsões sobre futuros valores da série temporal. Isso geralmente envolve a previsão de vários passos à frente, utilizando tanto os dados históricos quanto as informações contextuais.

**Regularização e Componentes Adicionais**: Para melhorar a generalização, o TFT pode incluir componentes de regularização como dropout. Além disso, técnicas de aprendizado profundo, como normalização em lote, também podem ser incorporadas para estabilizar e acelerar o treinamento.

> O TFT é particularmente adequado para aplicações onde as séries temporais são influenciadas por uma variedade de fatores de entrada e onde a interpretabilidade do modelo é essencial. Ele tem sido aplicado com sucesso em previsões financeiras, previsão de demanda e outras áreas onde as previsões precisas de séries temporais são fundamentais.

## Métricas de avaliação para modelos de Séries Temporais

Avaliar a performance de modelos de séries temporais é essencial para garantir a precisão e eficácia das previsões. Existem várias métricas de avaliação usadas para medir o desempenho dos modelos de séries temporais.

Apresentamos a seguir algumas das métricas mais comuns e importantes:

### 1. Erro Absoluto Médio (MAE - Mean Absolute Error)
O MAE mede a média das diferenças absolutas entre os valores previstos e os valores reais. É uma métrica simples que indica, em média, o quanto as previsões diferem dos valores reais.

Vantagens: Fácil de interpretar e não amplifica grandes erros.\
Desvantagens: Não diferencia entre erros positivos e negativos.

### 2. Erro Quadrático Médio (MSE - Mean Squared Error)

O MSE mede a média dos quadrados das diferenças entre os valores previstos e os valores reais. Penaliza mais os grandes erros devido à elevação ao quadrado.

Vantagens: Penaliza grandes erros mais severamente, útil para problemas onde grandes erros são mais indesejáveis.\
Desvantagens: Pode ser influenciado por outliers.

### 3. Raiz do Erro Quadrático Médio (RMSE - Root Mean Squared Error)

O RMSE é a raiz quadrada do MSE. Mantém as mesmas unidades dos valores previstos e reais, facilitando a interpretação.

Vantagens: Fácil de interpretar e compara diretamente com os valores reais.\
Desvantagens: Influenciado por grandes erros, assim como o MSE.

### 4. Erro Percentual Absoluto Médio (MAPE - Mean Absolute Percentage Error)

O MAPE mede a média dos erros absolutos em termos percentuais em relação aos valores reais.

Vantagens: Fácil de interpretar em termos percentuais.\
Desvantagens: Pode ser distorcido por valores reais próximos de zero.

### 5. Erro de Previsão de Raiz Média Quadrática Normalizado (NRMSE - Normalized Root Mean Squared Error)

O NRMSE é a RMSE normalizada pela amplitude dos valores reais, permitindo a comparação entre diferentes séries temporais.

Vantagens: Útil para comparar a precisão entre diferentes séries temporais.\
Desvantagens: A normalização pode ser sensível à amplitude dos dados.


### 6. R² (Coeficiente de Determinação)
O R² mede a proporção da variabilidade nos dados que é explicada pelo modelo. Varia de 0 a 1, onde 1 indica um modelo perfeito.

Vantagens: Facilmente interpretável e comumente usado.\
Desvantagens: Pode ser enganoso se usado com séries temporais não estacionárias.

### 7. Erro Quadrático Médio de Previsão (MSPE - Mean Squared Prediction Error)

O MSPE é semelhante ao MSE, mas é calculado especificamente para dados de teste ou validação, avaliando a performance do modelo fora da amostra de treinamento.

Vantagens: Focado na capacidade de generalização do modelo.\
Desvantagens: Pode ser influenciado por valores atípicos.

### 8. Critério de Informação de Akaike (AIC - Akaike Information Criterion)

O AIC é usado para comparar diferentes modelos e selecionar o melhor. Penaliza a complexidade do modelo para evitar overfitting.

Vantagens: Útil para seleção de modelos.\
Desvantagens: Requer a verossimilhança do modelo, que pode ser difícil de calcular para modelos complexos.

### 9. Critério de Informação Bayesiano (BIC - Bayesian Information Criterion)

O BIC é semelhante ao AIC, mas penaliza mais severamente a complexidade do modelo.

Vantagens: Útil para seleção de modelos com uma penalização mais forte para complexidade.\
Desvantagens: Requer a verossimilhança do modelo e o tamanho da amostra.

Escolher a métrica de avaliação certa é essencial para entender o desempenho do modelo de séries temporais e garantir que ele esteja alinhado com os objetivos específicos da aplicação. É comum usar várias métricas em conjunto para obter uma visão mais completa do desempenho do modelo.

LINKS

Temporal Fusion Transformers for Interpretable Multi-horizon Time Series Forecasting
https://arxiv.org/abs/1912.09363

Demand forecasting with the Temporal Fusion Transformer
https://pytorch-forecasting.readthedocs.io/en/stable/tutorials/stallion.html
