# Projetos de Deep Learning para aplicações de Inteligência Artificial

## 1 - Modelo Transformer para Classificação de Sentimento em Texto

Este projeto desenvolve e compara três abordagens de **NLP para classificação de sentimentos em textos** (6 classes), utilizando dados do Twitter. O pipeline inclui **pré-processamento linguístico com `spaCy`** (tokenização, lematização e remoção de stopwords), tratamento de **desbalanceamento de classes** e avaliação com métricas clássicas de classificação. A primeira abordagem utiliza **TF-IDF combinado com uma rede neural totalmente conectada**, explorando vetorização estatística de texto e regularização para controle de overfitting. A segunda implementa um modelo **LSTM bidirecional**, com embeddings treináveis e modelagem sequencial do texto, permitindo capturar dependências temporais. A terceira abordagem realiza **fine-tuning de um modelo Transformer pré-treinado (DistilBERT multilingual)**, aplicando **transfer learning** com congelamento parcial das camadas e ajuste fino da cabeça de classificação.

📁 [01-Classificacao-Sentimento](01-Classificacao-Sentimento)


## 2 - CNN para Classificação de Imagem Satélite

Este é um projeto de **visão computacional** que traz o processo de construção de um modelo de DeepLearning a partir do zero para classificar imagens de satélite coloridas em **10 classes**, como floersta, rio, indústria, etc...
O conjunto de dados foi dividido em 21.600 imagens para treinamento e 5.400 para teste.
O modelo usado é uma **rede neural convolucional (CNN)** com três camadas convolucionais de 64, 128 e 256 filtros, responsáveis por aprender características visuais das imagens, como bordas, texturas e formas. Após cada convolução, aplica-se a função ReLU para introduzir não linearidade. Em seguida, uma operação de max pooling reduz as dimensões dos mapas de características, enquanto o dropout ajuda a reduzir o sobreajuste durante o treinamento. O modelo foi treinado com GPU durante 5 épocas, alcançando uma **acurácia de 80,39% no conjunto de teste**. Isso significa que classificou corretamente cerca de 80 em cada 100 imagens avaliadas. O treinamento pode ser estendido para mais épocas, acompanhando o desempenho em um conjunto de validação para verificar se há melhora e identificar possíveis sinais de sobreajuste.

*This computer vision project demonstrates the process of building a deep learning model from scratch to classify color satellite images into 10 classes, such as forest, river, and industrial areas. The dataset was split into 21,600 images for training and 5,400 for testing. The model is a convolutional neural network (CNN) with three convolutional layers containing 64, 128, and 256 filters, which learn visual features such as edges, textures, and shapes. Each convolution is followed by a ReLU activation function to introduce nonlinearity. Next, a max pooling operation reduces the spatial dimensions of the feature maps, while dropout helps reduce overfitting during training. The model was trained on a GPU for 5 epochs, achieving 80.39% accuracy on the test set. This means it correctly classified approximately 80 out of every 100 images evaluated. Training can be extended to more epochs while monitoring performance on a validation set to assess improvements and detect potential signs of overfitting.*

📁 [02-Classificacao-Imagem-Satelite](02-Classificacao-Imagem-Satelite)

# 🔗 Outros Projetos

Lista de repositórios externos.

## ⚙️ Machine Learning
- [machine-learning](https://github.com/prisciladalepiane/machine-learning): Estudos e projetos com redes neurais, fundamentos de arquiteturas profundas, treinamento, avaliação e experimentos aplicados.

## 🧠 Deep Learning
- [deep-learning](https://github.com/prisciladalepiane/deep-learning): Estudos e projetos com redes neurais, fundamentos de arquiteturas profundas, treinamento, avaliação e experimentos aplicados.

## 🔬 Ciência de Dados com Python

- [data_sci_py](https://github.com/prisciladalepiane/data_sci_py): Scripts e notebooks de estudos com Python, Pandas, Matplotlib, Scikit-Learn, etc.

## 🧪 Shiny e TCT

- [app_shiny_tct](https://github.com/prisciladalepiane/app_shiny_tct): Aplicativo Shiny para visualização de resultados em Teoria Clássica dos Testes (TCT) usando dados educacionais.

## 🗃️ Banco de Dados

- [banco_de_dados](https://github.com/prisciladalepiane/banco_de_dados): Modelagem e consultas SQL com foco em bancos relacionais. Inclui scripts de criação de tabelas e casos de uso.

## 📚 Artigo Teoria de Resposta ao Item

- [artigo-tri-latex](https://github.com/prisciladalepiane/artigo-tri-latex): Repositório da monografia sobre TRI, com código LaTeX e referências.

---

**Priscila Gonçalves Dalepiane**
Estatística | Engenharia de Software | Pós em Machine Learning e MLOps  

[LinkedIn](https://www.linkedin.com/in/priscila-gon%C3%A7alves-dalepiane-947b65b2/) | [Rpubs](https://rpubs.com/prisciladalepiane) | [GitHub](https://github.com/prisciladalepiane)
