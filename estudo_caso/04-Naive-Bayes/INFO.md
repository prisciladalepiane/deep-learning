# Machine Learning Para Classificação de Documentos em C++

Neste estudo é construido um modelo de Machine Learning para classificação.

Cada parte do modelo foi contruído através de funções C++, sem o uso de bibliotecas ou frameworks.

Implementado o algoritmo Naive Bayes para construir um modelo de classificação. 

O conjunto de dados possui as variáveis: "ID","tipo_doc","classe","certificado_valido","uso_dias"]

Com base no tipo de documento, certificado e uso, vamos construir um modelo para prever a classe do documento.O algoritmo Naive Bayes é um método de classificação baseado no Teorema de Bayes, que assume a independência entre as características. 

Apesar dessa suposição simplificadora, que raramente é verdadeira na prática, o algoritmo é eficaz e amplamente utilizado devido à sua simplicidade e eficiência. 

Ele calcula a probabilidade de cada classe com base nas características fornecidas e seleciona a classe com a maior probabilidade. 

Naive Bayes é particularmente útil em problemas de classificação de texto, como filtragem de spam e análise de sentimentos, onde as características (palavras) são tratadas como independentes entre si

## PARTE 1 - Definindo Libs, Namespaces, Índices e Assinatura de Funções

Este é o começo do script. O código faz a seguinte série de ações:

- Suprime avisos específicos do compilador GCC sobre comparações entre tipos de sinal (inteiros com sinal versus inteiros sem sinal).

- Inclui diversas bibliotecas padrão da linguagem C++ necessárias para operações de entrada e saída, manipulação de arquivos, uso de vetores, strings, operações numéricas e algorítmicas, e funções matemáticas.

- Define o uso dos namespaces std e std::chrono para evitar a necessidade de prefixar esses nomes em todas as suas chamadas.

- Declara uma constante startTest com valor 900, que representa o índice de início para um conjunto de dados de teste.

- Declara as assinaturas de duas funções, calcMean e calcVariance, que serão responsáveis por calcular a média e a variância de um vetor de double, respectivamente.

## PARTE 2 - Métodos Auxiliares Para Calcular Probabilidades e Métricas Estatísticas

A segunda parte do código tem por objetivo implementar métodos auxiliares para calcular probabilidades e métricas estatísticas relacionadas a diferentes características de documentos.

Essa parte utiliza o Teorema de Bayes para calcular as probabilidades de classe dos documentos com base em suas características.

Bem como, avalia a performance do modelo de classificação gerando métricas como matriz de confusão e precisão, além de configurar a quantidade de previsões que serão exibidas.

O código fornecido realiza as seguintes operações:

Declara métodos auxiliares que são utilizados para manipulação e cálculos envolvendo vetores bidimensionais `(vector<vector<double>>)`:

- `print2DVector` imprime um vetor bidimensional de double.
- `priorProb` calcula a probabilidade a priori a partir de um vetor de double.
- `countclasse` conta a ocorrência de classes em um vetor de double.

- `likelihoodtipo_doc`, `likelihoodcertificado_valido`, `uso_diasMean` e `uso_diasVar` calculam as probabilidades de verossimilhança para diferentes características (tipo de documento, certificado válido, uso em dias) com base nas classes e contagens fornecidas.

- `uso_dias_metrics` calcula métricas relacionadas ao uso em dias, combinando média e variância.
- `calc_uso_dias_lh` calcula a verossimilhança do uso em dias dada a média e a variância.

Declara um método para a implementação do Teorema de Bayes:

- `calc_raw_prob` calcula a probabilidade bruta usando o Teorema de Bayes, considerando as características tipo de documento, certificado válido e uso em dias, junto com as probabilidades a priori e de verossimilhança correspondentes.

Declara métodos para o cálculo de métricas de avaliação do modelo:

- `confusionMatrix` calcula a matriz de confusão comparando duas matrizes de double.
- `accuracy` calcula a acurácia do modelo comparando duas matrizes de double.

Define ainda uma constante `numOfIterations` com valor 5, que especifica o número de previsões que serão mostradas.