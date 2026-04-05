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

Probabilidades a priori são estimativas iniciais da probabilidade de um evento antes de qualquer evidência nova ser considerada. Elas são baseadas em informações ou conhecimentos pré-existentes, sem levar em conta dados específicos da situação atual. Em termos estatísticos, é a crença inicial sobre a distribuição de probabilidade de um evento, que pode ser atualizada posteriormente com a introdução de novas evidências, utilizando o Teorema de Bayes.

## PARTE 6 - Função Para Contagem de Classe

A parte 6 do código tem como objetivo calcular a contagem de ocorrências de cada classe em um vetor de dados, que será usada posteriormente para calcular as probabilidades das variáveis de entrada. Ele armazena essas contagens em uma matriz.

Observe que primeiramente, ele inicializa uma matriz para armazenar as contagens de duas classes distintas (representadas por 0 e 1). Em seguida, percorre o vetor de entrada e incrementa a contagem correspondente na matriz para cada ocorrência de 0 ou 1 encontrada.

E finalmente, a matriz com as contagens de cada classe é retornada, proporcionando uma base para cálculos posteriores de probabilidades condicionais em algoritmos de classificação, como o Naive Bayes.

## PARTE 7 - Função Para Calcular a Probabilidade Condicional 1

Esse código tem por objetivo calcular a probabilidade condicional da variável tipo_doc para diferentes classes nos dados de treinamento. Ele armazena essas probabilidades em uma matriz, permitindo a análise de como a variável tipo_doc se distribui entre as classes.

Veja que no início, o código percorre os vetores de classes e tipos de documentos, incrementando contadores específicos em uma matriz para cada combinação de classe e tipo de documento. Isso resulta em uma contagem bruta de ocorrências para cada tipo de documento dentro de cada classe.

Em seguida, essas contagens são normalizadas pela divisão pelo número total de ocorrências de cada classe, resultando em probabilidades condicionais. A matriz final, que contém essas probabilidades, é então retornada e pode ser usada para cálculos posteriores em algoritmos de classificação, como o Naive .

## PARTE 8 - Função Para Calcular a Probabilidade Condicional 2

Essa parte do código tem como objetivo calcular a probabilidade da variável certificado_valido dada a classe correspondente nos dados de treino. Inicialmente, ele cria uma matriz 2x2 para armazenar as contagens das combinações possíveis entre as classes e os valores de certificado_valido.

Observe que em seguida, o código percorre os vetores de entrada classe e certificado_valido, atualizando a matriz de contagem com base nas ocorrências observadas para cada combinação de valores. Este processo é feito usando um loop que verifica a condição de cada classe e o valor associado de certificado_valido, incrementando as posições apropriadas na matriz.

E por fim, o código normaliza as contagens na matriz, dividindo cada valor pela contagem total de sua respectiva classe, que é fornecida pelo vetor count_classe. O resultado é uma matriz de probabilidades condicionais, que representa a probabilidade de certificado_valido para cada classe nos dados de treino.

## PARTE 9 - Função para calcular a Média de diferentes classes

O objetivo dessa parte do código é calcular a média da variável uso_dias para diferentes classes nos dados de treino. Inicialmente, ele cria uma matriz 1x2 para armazenar as somas dos valores de uso_dias para cada classe.

O código então percorre os vetores de entrada classe e uso_dias, somando os valores de uso_dias nas posições apropriadas da matriz de soma, dependendo da classe correspondente. Isso é feito usando um loop que verifica a classe de cada instância e adiciona o valor de uso_dias à soma acumulada para essa classe.

E finalmente, o código normaliza as somas dividindo cada valor pela contagem total de instâncias em cada classe, fornecida pelo vetor count_classe. O resultado é uma matriz que representa a média de uso_dias para cada classe nos dados de treino.

## PARTE 10 - Função para calcular a Variância

O objetivo dessa parte do código é calcular a variância da variável uso_dias para diferentes classes nos dados de treino. Inicialmente, ele cria uma matriz 1x2 para armazenar as somas dos quadrados das diferenças entre os valores de uso_dias e suas respectivas médias para cada classe.

O código então calcula as médias de uso_dias para cada classe, utilizando uma função previamente definida. Em seguida, ele percorre os vetores de entrada classe e uso_dias, acumulando as somas dos quadrados das diferenças entre os valores de uso_dias e as médias calculadas, para cada classe correspondente.

E ao final, o código normaliza essas somas dividindo-as pelo número de instâncias menos um em cada classe, fornecido pelo vetor count_classe. O resultado é uma matriz que representa a variância de uso_dias para cada classe nos dados de treino.

## PARTE 11 - Função para formatar as métricas

Na parte 11 o código organiza as métricas da variável uso_dias em uma matriz 2x2. Ele utiliza as médias e variâncias previamente calculadas para uso_dias.

Primeiramente, ele armazena as médias de uso_dias para cada classe nas posições apropriadas da matriz. Em seguida, ele calcula a raiz quadrada das variâncias, convertendo-as em desvio padrão, e armazena esses valores na matriz.

O resultado é uma matriz 2x2 que contém as médias e os desvios padrão de uso_dias para cada classe, facilitando a análise e interpretação dessas métricas.

## PARTE 12 - Função para calcular probabilidade usando Função de Densidade

Nessa parte o código calcula a probabilidade da variável uso_dias para um valor específico usando a função de densidade de probabilidade de uma distribuição normal.

Veja que inicialmente, ele determina a probabilidade utilizando a média e a variância fornecidas para a variável uso_dias. Esse cálculo envolve a aplicação da fórmula da distribuição normal, que leva em conta a diferença entre o valor específico e a média, ajustada pela variância.

O resultado é a probabilidade associada ao valor específico de uso_dias, indicando quão provável é esse valor dentro da distribuição definida pelos parâmetros de média e variância fornecidos.

A PDF é usada para calcular a probabilidade de a variável aleatória cair dentro de um determinado intervalo, através da integração da função sobre esse intervalo.

## PARTE 13 - Função para implementar o algoritmo

Na parte 13 o código implementa o Teorema de Bayes para calcular as probabilidades de duas classes baseadas em várias características observadas. Ele começa calculando as probabilidades numéricas para cada classe, utilizando as probabilidades a priori e as verossimilhanças das variáveis observadas (tipo_doc, certificado_valido e uso_dias).

Primeiramente, são calculadas as probabilidades numeradoras para cada classe, combinando as verossimilhanças de tipo_doc e certificado_valido, a probabilidade a priori da classe e a verossimilhança de uso_dias. Isso resulta em dois valores, cada um representando a probabilidade conjunta das variáveis observadas para uma classe específica.

Em seguida, é calculado o denominador que normaliza essas probabilidades. O denominador é a soma das probabilidades numeradoras de ambas as classes, garantindo que a soma das probabilidades resultantes seja igual a 1. Por fim, as probabilidades normalizadas para cada classe são armazenadas e retornadas, representando as probabilidades condicionais das classes dadas as variáveis observadas....

## PARTE 14 - Função para criar a Matriz de confusão

Nessa parte o código constrói uma matriz de confusão para avaliar a performance de um modelo de classificação, comparando os resultados previstos com os resultados reais. A matriz de confusão é uma tabela 2x2 que armazena os valores de verdadeiros positivos (TP), falsos positivos (FP), falsos negativos (FN) e verdadeiros negativos (TN).

Observe que primeiro, ele inicializa uma matriz 2x2 para armazenar esses valores. Em seguida, percorre os vetores de previsões e resultados reais, incrementando as contagens apropriadas na matriz de confusão conforme as combinações de previsões e valores reais que encontra.

O resultado é uma matriz que resume a performance do modelo de classificação, fornecendo informações sobre quantas previsões foram corretas (tanto positivas quanto negativas) e quantas foram incorretas (tanto falsos positivos quanto falsos negativos). Isso permite uma análise detalhada da precisão e dos erros do modelo.

## PARTE 15 - Função para calcular a Acurácia

Na última parte de implementação do projeto veja que o código calcula a acurácia de um modelo de classificação comparando as previsões com os resultados reais. A acurácia é a proporção de previsões corretas em relação ao total de previsões feitas.

Inicialmente, o código verifica se os tamanhos dos vetores de previsões e resultados reais são iguais, assegurando que possam ser comparados diretamente. Se os tamanhos forem diferentes, ele emite uma mensagem de erro.

Em seguida, o código percorre os vetores de previsões e resultados reais, contando quantas vezes eles coincidem. Essa contagem de previsões corretas é então dividida pelo total de previsões para calcular a acurácia, que é retornada como um valor entre 0 e 1, representando a precisão do modelo.


https://gcc.gnu.org/onlinedocs/cpp/Pragmas.html