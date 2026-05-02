# Backpropagation (Retropropagação do Erro)

O **Backpropagation** é o algoritmo central de aprendizado em redes neurais artificiais. 
Ele permite **ajustar os pesos da rede** de forma eficiente, **minimizando o erro** entre a saída prevista e a saída real. 

Foi popularizado por Rumelhart, Hinton e Williams (1986) e é usado até hoje em quase todos os modelos de Deep Learning.

---

## Ideia Geral

O processo ocorre em **duas fases principais**:

1. **Propagação direta (Forward Pass):**
 - Os dados entram na rede e passam camada por camada até gerar uma **saída predita** ($\hat{y}$).
 - Essa saída é comparada com a **saída real** ($y$) para calcular o **erro (loss)**.

2. **Propagação reversa (Backward Pass):**
 - O erro é **retropropagado** através das camadas da rede.
 - Calcula-se o **gradiente da função de custo** em relação a cada peso usando a **Regra da Cadeia (Chain Rule)** do cálculo diferencial.
 - Esses gradientes são então usados para **ajustar os pesos**, reduzindo o erro na próxima iteração.

---

## Etapas Matemáticas

1. **Cálculo da saída (forward):**
 $$
 z_j = \sum_i w_{ij} x_i + b_j
 $$
 $$
 a_j = f(z_j)
 $$
 onde $f$ é a **função de ativação**.

2. **Cálculo do erro (função de custo):**
 $$
 E = \frac{1}{2} (y - \hat{y})^2
 $$
 (para um problema de regressão simples).

3. **Propagação do erro (backward):**
 - Calculamos o gradiente do erro em relação aos pesos:
 $$
 \frac{\partial E}{\partial w_{ij}} = \frac{\partial E}{\partial a_j} \cdot \frac{\partial a_j}{\partial z_j} \cdot \frac{\partial z_j}{\partial w_{ij}}
 $$
 - Essa é a **regra da cadeia**, que “propaga” o erro de volta, camada por camada.

4. **Atualização dos pesos (descida do gradiente):**
 $$
 w_{ij}^{(t+1)} = w_{ij}^{(t)} - \eta \frac{\partial E}{\partial w_{ij}}
 $$
 onde $\eta$ é a **taxa de aprendizado** (*learning rate*).

<center>

| Etapa | Descrição |
|-------|------------|
| **Forward pass** | Calcula a saída da rede. |
| **Erro** | Mede o quanto a saída está errada (função de custo). |
| **Backward pass** | Propaga o erro de volta, calculando gradientes. |
| **Atualização** | Ajusta pesos e vieses para reduzir o erro. |
</center>


## Função de Custo e Otimização

Os otimizadores são estratégias diferentes para usar o gradiente e atualizar os pesos de forma mais eficiente, rápida e estável.

O **backpropagation** trabalha junto com um **algoritmo de otimização**, geralmente uma variação da **descida do gradiente** (*Gradient Descent*), como:
- **SGD (Stochastic Gradient Descent)**
- **Adam**
- **RMSprop**

Esses métodos determinam **como atualizar os pesos** com base nos gradientes.


## Desafios

- **Desaparecimento ou explosão do gradiente:** em redes muito profundas, os gradientes podem ficar muito pequenos ou muito grandes. 
- **Convergência lenta:** pode exigir ajustes finos de hiperparâmetros (como taxa de aprendizado). 
- **Overfitting:** a rede pode memorizar os dados de treino.


## Em resumo

O **Backpropagation** é o **mecanismo de aprendizado das redes neurais**, que permite:
- calcular **quanto cada peso contribuiu para o erro**,
- **ajustar esses pesos** de modo eficiente,
- e **fazer a rede aprender padrões complexos** nos dados.

# O Papel do Backpropagation e Otimização em Deep Learning

O backpropagation, também conhecido como retropropagação, é um algoritmo fundamental em Deep Learning, utilizado para reinar redes neurais. Seu papel principal é **calcular o gradiente da função de perda** (ou erro) em relação a cada peso da rede, de modo eficiente, através da aplicação da regra da cadeia do cálculo diferencial. Este gradiente indica a direção e magnitude de mudança para cada peso, a fim de minimizar o erro da rede.

Quando alimentamos uma rede neural com uma entrada, a informação flui da camada de entrada através das camadas ocultas até a camada de saída em um processo chamado "feedforward". Ao comparar a saída produzida pela rede com a saída desejada, obtemos um valor de erro utilizando uma função de perda. O backpropagation entra em cena para determinar **como esse erro se propaga de volta através da rede**, do final para o início. Ele **calcula quanto cada peso na rede contribuiu para o erro**, fornecendo um mapa de como ajustar os pesos para melhorar o desempenho da rede. 

No entanto, saber o gradiente por si só não é suficiente. É aqui que entra a **otimização**. O processo de otimização ajusta iterativamente os pesos da rede na direção oposta ao gradiente, buscando minimizar o erro. O tamanho do ajuste é geralmente determinado por um parâmetro chamado "taxa de aprendizado". Um dos otimizadores mais básicos e amplamente conhecidos é o Gradiente Descendente (e suas variantes como Gradiente Descendente Estocástico e Gradiente Descendente em Mini-lotes). No entanto, existem muitos outros otimizadores, como Adam, RMSprop e Adagrad, que não só consideram o gradiente atual, mas também incorporam informações de gradientes anteriores para fazer atualizações mais informadas.

Juntos, o **backpropagation e os algoritmos de otimização formam a espinha dorsal do treinamento de redes neurais em Deep Learning**. Eles permitem que a rede aprenda padrões complexos e não lineares nos dados, ajustando-se iterativamente para reduzir o erro e melhorar a precisão. Esta combinação de calcular gradientes e ajustar pesos é repetida muitas vezes até que a rede alcance um desempenho satisfatório ou até que se cumpra algum critério de parada definido


# Compreendendo o Algoritmo Backpropagation

O algoritmo de retropropagação (backpropagation) é um método utilizado para treinar redes neurais artificiais. Ele é usado em conjunto com um algoritmo de otimização, como o Gradiente Descendente, para ajustar os pesos da rede neural. A ideia central é minimizar a diferença entre a saída prevista pela rede neural e a saída real (ou desejada), conhecida como erro ou perda.

O Processo de Backpropagation é Composto Pelas Seguintes Etapas:

## Etapa 1. Propagação para Frente (Forward Propagation)

• A entrada é fornecida à rede neural.

• Esta entrada passa pelas várias camadas da rede, onde cada neurônio processa a entrada e a passa para a próxima camada.

• O processo continua até que a saída seja gerada.


## Etapa 2. Cálculo do Erro:

• A saída gerada pela rede é comparada com a saída esperada para calcular o erro. Geralmente, usa-se uma função de perda para isso, como o erro quadrático médio.


Etapa 3. Propagação Reversa do Erro (Backpropagation):


• O erro é então propagado de volta pela rede, começando da última camada até a primeira.


• Durante este processo, o algoritmo calcula o gradiente da função de perda em relação a cada peso na rede. Isso é feito usando a regra da cadeia do cálculo diferencial.


## Etapa 4. Ajuste dos Pesos:


• Os pesos da rede são ajustados na direção oposta ao gradiente para minimizar o erro. Esse ajuste é feito usando um algoritmo de otimização, como o Gradiente Descendente.


• A taxa de aprendizagem determina o tamanho do passo feito na direção oposta ao gradiente.


## Etapa 5. Iteração:


• Este processo é repetido para várias iterações ou até que o erro seja reduzido a um nível aceitável.



## Etapa 6. Atualização em Lote ou Mini-Lote:


• O treinamento geralmente é feito em lotes ou mini-lotes, o que significa que os pesos são atualizados após passar múltiplos exemplos de treinamento pela rede, o que ajuda na estabilidade e eficiência do treinamento.


O algoritmo de backpropagation é essencial para o aprendizado profundo, pois permite que redes neurais complexas com muitas camadas aprendam padrões intrincados e sutis a partir de grandes quantidades de dados.

A eficiência e eficácia desse algoritmo são um dos principais motivos pelos quais as redes neurais são tão poderosas em tarefas de aprendizado de máquina, como reconhecimento de imagem, processamento de linguagem natural, entre outros.

# Resumo Backpropogation

Backpropagation é o **algoritmo que permite uma rede neural aprender**, ajustando seus pesos para reduzir o erro entre as previsões da rede e os valores verdadeiros.

A ideia central é simples:

1. A rede faz uma previsão.
2. Calcula quanto errou.
3. Propaga esse erro de volta por todas as camadas.
4. Ajusta os pesos para que o erro diminua na próxima vez.

Partes:

### 1. Forward pass: a rede faz uma previsão

Os dados entram pela primeira camada e vão passando camada por camada até gerar uma saída.

Exemplo em cada camada:

* soma ponderada: $ z = W x + b $
* ativação: $ a = f(z) $

No final, temos a previsão $\hat{y}$.


### 2. Cálculo do erro

Comparamos a previsão com o valor verdadeiro.

Exemplo com erro quadrático médio:

$
\text{Loss} = \frac{1}{n} \sum (y - \hat{y})^2
$

Se o erro está alto, os pesos estão “ruins”.


### 3. Backward pass: propagação do erro

Agora o erro é **retropropagado** da última camada para a primeira.

A pergunta que o backprop tenta responder é:

**"Como cada peso contribuiu para o erro?"**

Para isso, ele usa cálculo diferencial (regra da cadeia).

Exemplo da ideia para um peso ( w ):

$$
\frac{\partial \text{Loss}}{\partial w}
$$

Essa derivada diz:

* se for positiva, o peso está aumentando o erro → diminuir o peso
* se for negativa, o peso está diminuindo o erro → aumentar o peso
* se for zero, o peso não influencia o erro naquele momento


### 4. Atualização dos pesos

Depois de calcular os gradientes, atualizamos cada peso:

$$
w_{novo} = w_{antigo} - \eta \frac{\partial \text{Loss}}{\partial w}
$$

Onde:

* $ \eta $ é a **taxa de aprendizado**
* o gradiente mostra a direção para reduzir o erro

Esse processo é chamado de **gradiente descendente**.


## Como isso acontece em uma rede profunda?

O backpropagation calcula os gradientes camada por camada de trás para frente:

1. Última camada: calcula gradiente do erro direto
2. Camadas intermediárias: recebem parte do gradiente das camadas seguintes
3. Primeira camada: termina a cadeia de derivadas

O algoritmo aplica a **regra da cadeia** muitas vezes.


### Resumo

1. **Forward:** calcula a previsão.
2. **Erro:** compara com o valor real.
3. **Backward:** calcula como cada peso afeta o erro.
4. **Atualiza pesos:** ajusta tudo usando gradiente descendente.

https://neptune.ai/blog/backpropagation-algorithm-in-neural-networks-guide