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

## PARTE 3 - Processamento de Dados e Aplicação do Modelo

Essa parte do código tem como objetivo principal processar um dataset de documentos e aplicar um modelo de classificação baseado no Teorema de Bayes.

1. Lê um arquivo CSV contendo dados dos documentos, extrai e limpa as informações necessárias, como IDs, tipos de documentos, classes, validade de certificados e dias de uso, e armazena esses dados em vetores apropriados.

2. Após o processamento e limpeza dos dados, o código utiliza funções auxiliares para calcular as probabilidades a priori e condicionais, bem como outras métricas estatísticas.

3. Em seguida, implementa o Teorema de Bayes para prever a probabilidade de cada documento pertencer a uma classe específica, com base nas características extraídas.

4. Avalia a performance do modelo gerando métricas de avaliação, como matriz de confusão, acurácia, sensibilidade e especificidade. Ele também exibe um conjunto de previsões para ilustrar os resultados do modelo, medindo o tempo total de execução para garantir a eficiência do processo. 

## PARTE 4 - Método Para Imprimir Vetor 2D em C++

A parte 4 do código permite imprimir os elementos de um vetor bidimensional de números do tipo double. Ele percorre cada elemento do vetor e o exibe no console, organizando os valores em formato de matriz para facilitar a visualização.

Primeiramente, o código acessa cada linha do vetor bidimensional e, em seguida, percorre os elementos de cada linha, imprimindo-os com espaços entre eles. Após completar a impressão de uma linha, ele insere uma quebra de linha para que a próxima linha do vetor comece em uma nova linha no console.

Assim, este método facilita a visualização de dados armazenados em um vetor bidimensional, apresentando-os de uma maneira organizada e clara, similar à forma como os dados seriam visualizados em uma tabela ou matriz.

## PARTE 5 - Função para calcular as probabilidades

Esta parte do código calcula as probabilidades a priori para um conjunto de dados de treinamento. Ele utiliza uma matriz para armazenar as contagens de ocorrências de duas possíveis classes (representadas por 0 e 1) dentro do vetor fornecido.

Primeiro, o código percorre o vetor de dados de entrada e incrementa as contagens para cada classe. Em seguida, essas contagens são normalizadas pela divisão pelo tamanho total do vetor, resultando nas probabilidades a priori de cada classe.

Essas probabilidades a priori são então armazenadas e retornadas em uma matriz, que pode ser utilizada posteriormente em algoritmos de classificação, como o classificador de Naive Bayes, para calcular as probabilidades de classes baseadas nos dados de treinamento.

Probabilidades a priori são estimativas iniciais da probabilidade de um evento antes de qualquer evidência nova ser considerada. Elas são baseadas em informações ou conhecimentos pré-existentes, sem levar em conta dados específicos da situação atual. Em termos estatísticos, é a crença inicial sobre a distribuição de probabilidade de um evento, que pode ser atualizada posteriormente com a introdução de novas evidências, utilizando o Teorema de Bay