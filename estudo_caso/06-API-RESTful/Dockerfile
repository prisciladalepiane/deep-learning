# Usar uma imagem base do Ubuntu
FROM ubuntu:latest

LABEL maintainer="Priscila"

# Atualiza o sistema e instala dependências essenciais (incluindo compilador C++)
RUN apt-get update && apt-get install -y \
    build-essential \
    g++ \
    cmake \
    curl \
    git \
    libboost-all-dev \
    libssl-dev \
    libeigen3-dev \
    && rm -rf /var/lib/apt/lists/*

# Criar a pasta /app como um ponto de montagem para um volume
RUN mkdir /app
VOLUME /app

# Pasta de trabalho
WORKDIR /app

# Expor a porta que será usada pela API 
EXPOSE 5001

# Definir o comando padrão para execução quando o container for iniciado
CMD ["/bin/bash"]