# Funções de Ativação em Deep Learning

Uma função de ativação em Deep Learning é um mecanismo matemático aplicado à saída de cada neurônio que decide se o sinal deve ser “ativado” ou não, introduzindo não linearidade ao modelo.

Sem ela, uma rede neural, mesmo com várias camadas, se comportaria como uma simples regressão linear, incapaz de aprender relações complexas entre variáveis.

Em Deep Learning, as funções de ativação desempenham um papel essencialem redes neurais artificiais, permitindo-lhes modelar relações complexas e não lineares entre as entradas e as saídas. 

## Papéis das funções de ativação:

### Introdução de Não-linearidade
Uma das principais razões para usar funções de ativação é introduzir não-linearidade nos cálculos da rede neural. Sem funções de ativação, mesmo que tenhamos várias camadas em uma rede neural, tudo se reduziria a uma operação linear. A não-linearidade permite que a rede neural modele funções mais complexas e capture padrões intrincados nos dados, como:

- relações entre pixels em uma imagem,
- dependências temporais em séries de tempo,
- nuances de significado em textos.

### Ativação dos Neurônios:
As funções de ativação determinam a saída de um neurônio quando recebe uma entrada ou conjunto de entradas. Baseando-se nessa saída, o neurônio pode ser considerado "ativado" ou não.

### Diferenciabilidade: 
Algumas funções de ativação são contínuas e diferenciáveis. Isso é essencial para técnicas de otimização, como a retropropagação (backpropagation), onde o gradiente (derivada) é usado para atualizar os pesos da rede.

### Regularização: 
Algumas funções de ativação, como a função ReLU (Rectified Linear Activation) e suas variantes, podem ajudar na regularização do modelo, tornando-o menos propenso a overfitting.


## Variedade de Funções: 

Existem várias funções de ativação disponíveis, cada uma com suas características e aplicações. Algumas das mais populares incluem:

- **Sigmoid**: Gera saídas entre 0 e 1. Foi amplamente usada em redes neurais mais antigas, mas tem problemas com gradientes que desaparecem em camadas profundas.

- **Tanh** (tangente hiperbólica): Produz saídas entre -1 e 1. É centrada em zero, o que a torna preferível ao sigmoid em muitos casos.

- **ReLU**: Gera saídas entre 0 e infinito. É a função de ativação mais usada atualmente em redes neurais profundas devido à sua eficiência computacional e propriedades que ajudam a mitigar o problema do gradiente que desaparece.

- **Variantes de ReLU:** Leaky ReLU, Parametric ReLU e Exponential Linear Unit são variantes da ReLU criadas para lidar com o problema de neurônios "mortos", onde alguns neurônios nunca se ativam. A GeLU é outra variação usada em alguns modelos com arquitetura Transformer.

| Função | Fórmula / Ideia | Características | Uso comum |
|--------|------------------|-----------------|------------|
| **Sigmoid** | $$f(x) = \frac{1}{1 + e^{-x}}$$ | Saída entre 0 e 1 | Camadas de saída binárias |
| **tanh** | $$f(x) = \tanh(x)$$ | Saída entre -1 e 1, centrada | Camadas intermediárias antigas |
| **ReLU (Rectified Linear Unit)** | $$f(x) = \max(0, x)$$ | Simples e eficiente; resolve *vanishing gradient* | Camadas ocultas em CNNs e DNNs |
| **Leaky ReLU** | $$f(x) = \begin{cases} x, & \text{se } x > 0 \\ 0.01x, & \text{caso contrário} \end{cases}$$ | Evita “morte” de neurônios | Alternativa à ReLU |
| **Softmax** | $$f(x_i) = \frac{e^{x_i}}{\sum_j e^{x_j}}$$ | Normaliza saídas em probabilidades | Camadas de saída com múltiplas classes |

**Desvantagens e Cuidados:**

Apesar de sua importância, as funções de ativação não são isentas de desafios. Por exemplo, o Sigmoid e o Tanh podem sofrer do problema de gradientes que desaparecem em redes muito profundas. A ReLU, por outro lado, pode sofrer do problema de neurônios "mortos".


## Resumo
- As funções de ativação são o “interruptor inteligente” de cada neurônio.
- Elas determinam como e quando a rede “reage” a um padrão.
- São fundamentais para que o modelo aprenda a representar relações complexas e abstratas nos dados.

> As funções de ativação são componentes essenciais das redes neurais em Deep Learning, permitindo que elas capturem e representem complexidades nos dados. A escolha da função de ativação apropriada depende da arquitetura da rede e da natureza do problema que está sendo tratado. 

## Principais Funções

### Sigmoid

A Sigmoid é uma função de ativação amplamente utilizada nas primeiras redes neurais e ainda muito comum em problemas de classificação binária.

- Valores muito negativos = saída próxima de 0
- Valores muito positivos = saída próxima de 1
- Valor próximo de 0 = saída ≈ 0.5

### Quando usar Sigmoid?
Indicado para:

- Camada de saída em classificação binária;
- Modelos de regressão logística;
- Quando a saída precisa representar probabilidade.

### Problemas da Sigmoid

Desaparecimento do gradiente (_Vanishing Gradient_). Para valores muito altos ou muito baixos, a função entra em região de saturação: O gradiente se aproxima de 0,
O aprendizado desacelera. Em redes profundas, as camadas iniciais quase não aprendem. 
Isso foi um dos principais motivos para sua substituição por ReLU em camadas ocultas.

Não recomendado para:
- Camadas ocultas em redes profundas
- Arquiteturas muito profundas (devido ao vanishing gradient)

## ReLU

A **ReLU (Rectified Linear Unit)** é uma função de ativação definida por:

$$
f(x) = \max(0, x)
$$

Ou seja:

- Se \(x < 0\), saída = 0  
- Se \(x > 0\), saída = x

Ela introduz **não-linearidade** na rede neural, permitindo que modelos profundos aprendam relações complexas.

### Vantagens da ReLU

#### 1. Reduz o problema de vanishing gradient

Diferente de sigmoid e tanh, a ReLU não satura para valores positivos grandes.

Gradiente:

- 0 para \(x < 0\)  
- 1 para \(x > 0\)

Isso facilita a propagação do gradiente em redes profundas.

#### 2. Eficiência computacional

A operação `max(0, x)` é simples e rápida, reduzindo custo computacional.

#### 3. Induz esparsidade

Como valores negativos são zerados:

- Parte dos neurônios fica inativa  
- A rede se torna mais esparsa  
- Pode melhorar a generalização  

#### 4. Convergência mais rápida

Na prática, redes com ReLU tendem a treinar mais rapidamente do que com sigmoid ou tanh.

### Limitação da ReLU

**Dying ReLU**: Se muitos neurônios passam a receber apenas valores negativos,o neurônio deixa de aprender.  Isso pode ocorrer com learning rate alto ou má inicialização.

### Quando usar ReLU?

INdicado para, Redes profundas, MLPs, CNNs, Problemas de visão computacional, Quando se deseja treinamento estável e rápido. 

É a ativação padrão para camadas ocultas em Deep Learning.


## LeakyReLu

A função de ativação LeakyReLU (Leaky Rectified Linear Unit) é uma variação da função ReLU (Rectified Linear Unit), amplamente usada em redes neurais.

A ideia por trás da LeakyReLU é abordar um dos problemas da ReLU, quando alguns neurônios se tornam inativos e só apresentando output zero, independentemente do input recebido. Isso pode ocorrer durante o treinamento, especialmente com taxas de aprendizado altas.

A LeakyReLU é útil para resolver o problema de neurônios inativos nas redes neurais, especialmente em redes profundas, e pode ser uma alternativa valiosa para experimentar em diferentes cenários de aprendizado de máquina.


### O que é LeakyReLU?

A LeakyReLU é definida pela fórmula $$ f(x) = max(ax, x)$$, onde $a$ é um pequeno valor constante.

Para valores positivos de x, funciona da mesma forma que a ReLU, mantendo x.

Para valores negativos de x, ao invés de gerar zero (como a ReLU faria), ela gera um pequeno valor proporcional a x (ou seja, ax), onde a é tipicamente um valor pequeno como 0.01.

### Vantagens da LeakyReLU:

Previne Neurônios Mortos: Ao permitir um pequeno gradiente quando a unidade está inativa, ajuda a manter os neurônios ativos durante o treinamento e evita o problema comum na ReLU.

Melhora o Desempenho: Em alguns casos, a LeakyReLU pode acelerar a convergência do treinamento e melhorar o desempenho do modelo em comparação com a ReLU.

### Quando usar LeakyReLU?

**Em Redes Profundas:** Em redes profundas a LeakyReLU pode ser particularmente útil.

**Experimentação em diferentes problemas**: Como com muitas técnicas em deep learning, a eficácia da LeakyReLU pode variar dependendo do problema específico. É comum experimentá-la e comparar os resultados com outras funções de ativação, como a ReLU ou a ELU (Exponential Linear Unit).

**Quando houver problemas com neurônios morrendo**: Se durante o treinamento você observar que muitos neurônios estão se tornando inativos, a LeakyReLU pode ser uma solução para experimentar.

# Resumo sobre Papel da Função de Ativação

A função de ativação em redes neurais é um componente matemático que introduz não-linearidade ao modelo, permitindo que a rede aprenda e modele relações complexas nos dados. Ela decide se um neurônio específico deve ser ativado ou não, contribuindo para a capacidade da rede de realizar tarefas complexas como classificação e previsão.

No contexto de deep learning, a função de ativação desempenha um papel importante porque muitos dos problemas reais que queremos resolver são não-lineares por natureza.

Aqui estão alguns pontos principais sobre o papel das funções de ativação:

### Introdução de Não-Linearidade:

Sem funções de ativação não-lineares, uma rede neural, não importa quão muitas camadas possua, comportaria-se como um modelo linear. Isso limitaria significativamente o tipo de relações e padrões que a rede pode aprender.

### Ajuda na Aprendizagem de Recursos Complexos: 

A capacidade de uma rede neural de aprender recursos complexos e realizar tarefas como reconhecimento de imagem, processamento de linguagem natural e previsões sofisticadas, depende em grande parte da não-linearidade introduzida pelas funções de ativação.

### Decisão de Ativação dos Neurônios: 

As funções de ativação ajudam a determinar se um neurônio deve ser ativado ou não. Isso significa que elas ajudam a decidir se as informações que o neurônio está processando são relevantes para a entrada fornecida.

### Diferentes Tipos para Diferentes Propósitos: 

Existem várias funções de ativação, como ReLU (Rectified Linear Unit), Sigmoid, Tanh, etc., cada uma com características específicas. Por exemplo, ReLU é comumente usada em camadas ocultas devido à sua eficiência computacional e ao fato de ajudar a mitigar o problema do desaparecimento do gradiente. Por outro lado, Sigmoid e Tanh são frequentemente usadas em situações que requerem uma saída normalizada, como a camada de saída para classificação binária.

### Impacto no Processo de Aprendizagem: 

As funções de ativação influenciam como a aprendizagem acontece na rede através da retropropagação. Elas determinam a forma do gradiente que é propagado de volta na rede durante o treinamento e, portanto, têm um impacto significativo na rapidez e eficácia com que a rede aprende.

### Problemas Potenciais: 

Embora sejam fundamentais, as funções de ativação também podem introduzir problemas, como o desaparecimento ou a explosão dos gradientes, que precisam ser considerados e gerenciados durante o projeto e o treinamento da rede.


