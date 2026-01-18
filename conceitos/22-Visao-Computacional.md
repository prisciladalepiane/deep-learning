# Visão Computacional

## História e Evolução da Visão Computacional com Deep Learning

A Visão Computacional com Deep Learning é um campo que evoluiu significamente nos últimos anos. Antes do Deep Learning, a Visão Computacional dependia de técnicas mais tradicionais de processamento de imagem e algoritmos específicos para tarefas como detecção de bordas, segmentação de imagem e reconhecimento de padrões. Essas abordagens exigiam muito conhecimento e habilidade manual para ajustar os algoritmos às necessidades específicas de cada aplicação.

O advento do Deep Learning revolucionou essa área. O marco inicial dessa revolução pode ser rastreado até 2012, quando a equipe de Alex Krizhevsky, Ilya Sutskever e Geoffrey Hinton apresentou a rede neural convolucional (CNN) chamada AlexNet. Esta rede venceu o desafio ImageNet, um marco importante no campo da Visão Computacional, por uma margem significativa. A AlexNet era especial por sua capacidade de aprender automaticamente características hierárquicas de imagens, uma tarefa que antes exigia engenharia manual.

Desde então, houve uma rápida evolução no campo. Redes neurais mais profundas e eficientes foram desenvolvidas, como a VGG, Inception e ResNet, cada uma introduzindo novas ideias para melhorar o desempenho. Esses avanços não apenas melhoraram a precisão na classificação de imagens, mas também possibilitaram progressos em tarefas mais complexas como detecção de objetos, segmentação semântica e reconhecimento de gestos.

Além disso, a disponibilidade de grandes conjuntos de dados e o aumento do poder computacional, principalmente através de GPUs, desempenharam um papel essencial na adoção do Deep Learning em Visão Computacional. A aplicação dessas tecnologias estendeu-se a diversos campos, desde a medicina na análise de imagens médicas até sistemas de vigilância e veículos autônomos.

Hoje, a Visão Computacional com Deep Learning é um campo em constante expansão, incorporando novas abordagens como redes generativas adversárias (GANs) e aprendizado por reforço, abrindo caminho para aplicações ainda mais sofisticadas e integradas ao nosso cotidiano. Além disso, os LLMs (inicialmente criados para Processamento de Linguagem Natural) começaram a ganhar espaço em Visão Computacional.


### Diferença Entre Classificação, Detecção e Segmentação

No contexto da Visão Computacional, Classificação, Detecção e Segmentação são três tarefas fundamentais que servem a diferentes propósitos e têm aplicações variadas. Cada uma dessas tarefas lida com a compreensão e interpretação de imagens de maneiras específicas.

### Classificação

A classificação de imagens é a tarefa de atribuir uma etiqueta (ou classe) a uma imagem inteira com base no conteúdo da imagem. Por exemplo, dada uma imagem de um animal, o objetivo de um sistema de classificação seria determinar se a imagem é de um cão, gato, pássaro, etc. A classificação é geralmente considerada uma tarefa de nível mais alto e menos detalhada, pois não fornece informações sobre a localização ou contorno dos objetos na imagem, apenas sobre a presença ou ausência deles.

### Detecção

A detecção de objetos vai um passo além da classificação ao não apenas identificar os objetos presentes em uma imagem, mas também localizá-los. Isso é geralmente realizado por meio da identificação de "caixas delimitadoras" (bounding boxes) que circundam cada objeto detectado. Por exemplo, em uma imagem urbana, um sistema de detecção de objetos poderia identificar e localizar carros, pessoas, semáforos, etc. A detecção é essencial em aplicações como vigilância de vídeo e sistemas de assistência ao motorista, onde saber a localização de cada objeto é tão importante quanto identificar sua presença.

### Segmentação

A segmentação de imagens é a tarefa de dividir uma imagem em regiões ou segmentos que correspondem a diferentes objetos ou partes de objetos. A segmentação pode ser de dois tipos principais: segmentação semântica e segmentação de instâncias.

**Segmentação Semântica**: Cada pixel na imagem é classificado de acordo com a classe do objeto a que pertence. Isso significa que, se houver vários objetos da mesma classe, todos serão pintados da mesma cor na imagem segmentada. Por exemplo, em uma cena de rua, todos os carros podem ser marcados com a mesma cor, independentemente de serem objetos distintos.

**Segmentação de Instâncias**: É semelhante à segmentação semântica, mas distingue entre diferentes instâncias do mesmo tipo de objeto. Continuando com o exemplo anterior, cada carro individual seria marcado com uma cor única, permitindo a identificação de cada um como uma entidade separada.