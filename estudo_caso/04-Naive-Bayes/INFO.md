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