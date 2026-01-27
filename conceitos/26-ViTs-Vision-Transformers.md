# Vision Transformers (ViTs) e Abordagens com Transformers

Os **Vision Transformers (ViTs)** representam uma inovadora abordagem no campo do aprendizado profundo, especialmente em tarefas de Visão Computacional.

Inspirados pelo sucesso dos Transformers no processamento de linguagem natural (PLN), os ViTs adaptam a arquitetura dos Transformers para trabalhar com imagens, oferecendo uma alternativa promissora às redes neurais convolucionais (CNNs) tradicionalmente dominantes nesse domínio. Os ViTs são estudados nos cursos de Visão Computacional aqui na DSA.

## Conceito Básico dos Vision Transformers

Assim como os Transformers no PLN dividem o texto em tokens (palavras ou subpalavras), os ViTs dividem a imagem em patches (pequenos pedaços ou "tokens" da imagem) de tamanho fixo. Cada patch é então achatado e projetado em um espaço de dimensão maior (embedding) semelhante ao processo de embedding de palavras.

Para manter a informação espacial, embeddings de posição são adicionados aos embeddings dos patches, permitindo que o modelo saiba onde cada patch se localiza na imagem.

Os Transformers usam um mecanismo de atenção, especificamente a atenção multi-cabeça, para ponderar a importância relativa de diferentes patches da imagem uns aos outros. Isso permite que o modelo considere relações globais entre partes da imagem, independentemente da distância espacial entre elas.

## Vantagens dos Vision Transformers
Ao contrário das CNNs, que analisam a imagem através de filtros locais, os ViTs são capazes de capturar relações globais entre os patches desde as primeiras camadas do modelo.

Os ViTs mostram grande capacidade de escala com o aumento do volume de dados e complexidade das tarefas, muitas vezes superando as CNNs em grandes conjuntos de dados.

Dada a similaridade arquitetural com os Transformers usados em PLN, os ViTs podem se beneficiar de técnicas e insights desenvolvidos nesse outro domínio, como treinamento prévio em grandes conjuntos de dados e ajuste fino para tarefas específicas.

## Desafios e Limitações
Para imagens de alta resolução, o número de patches pode ser muito grande, tornando o processamento computacionalmente intensivo devido ao mecanismo de atenção, que é quadrático em relação ao número de tokens.

Os ViTs frequentemente requerem grandes quantidades de dados de treinamento para alcançar desempenho competitivo com as CNNs, embora técnicas como treinamento prévio e modelos híbridos possam ajudar a mitigar isso.

## Abordagens Híbridas e Avanços
Para melhorar a eficiência e desempenho em conjuntos de dados menores, algumas abordagens combinam CNNs para extrair características locais com Transformers para modelar interações globais.

Novas variantes, como a atenção local ou atenção escalável (como a Linformer, Performer, etc.), foram propostas para reduzir a complexidade computacional do mecanismo de atenção.

Além da classificação e detecção de objetos, os ViTs também têm sido explorados em modelos auto-regressivos e generativos, abrindo novos caminhos para a criação de imagens e vídeos sintéticos.

Os Vision Transformers destacam-se como uma abordagem poderosa e versátil para problemas de visão computacional, demonstrando capacidade de alcançar e muitas vezes superar o estado da arte em várias tarefas.

À medida que a pesquisa avança, espera-se que os ViTs se tornem ainda mais eficientes e acessíveis para uma gama mais ampla de aplicações.

