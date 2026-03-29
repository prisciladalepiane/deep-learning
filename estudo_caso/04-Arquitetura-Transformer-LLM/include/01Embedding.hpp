// Construindo Um LLM a Partir do Zero com Arquitetura Transformers em C++


#ifndef EMBEDDING_H // Verifica se EMBEDDING_H já foi definido, para evitar múltiplas definições
#define EMBEDDING_H // Define EMBEDDING_H se não tiver sido definido ainda


#include <iostream> // Biblioteca padrão de entrada e saída
#include <string>  // Biblioteca padrão de strings
#include <vector>  // Biblioteca padrão de vetores
#include <map>     // Biblioteca padrão de mapeamento (mapa associativo)
#include <iomanip> // Biblioteca padrão para manipulação de formato de saída
#include <random>  // Biblioteca padrão de geração de números aleatórios
#include <fstream> // Biblioteca padrão para manipulação de arquivos
#include <sstream> // Biblioteca padrão de fluxos de strings

class Embedding {

private:
    
    // Tamanho do vocabulário
    int vocab_size;
    
    // Dimensão da representação vetorial (embedding)
    int embed_dim;
    
    // Tamanho máximo da sequência
    int max_seq_len;
    
    // Ponteiro para a matriz de embeddings
    std::vector<std::vector<double>> *embedding_matrix;

public:
    
    // Construtor que inicializa vocab_size e embed_dim
    Embedding(int vocab_size, int embed_dim);
    
    // Retorna o vetor de embedding para um token específico, identificado por token_id
    std::vector<double> getEmbedding(int token_id);
    
    // Converte uma sequência de tokens em uma sequência de embeddings
    std::vector<std::vector<double>> *tokenToEmbeddings(std::vector<int> tokens);
    
    // Salva a matriz de embeddings em um arquivo
    void saveEmbeddingMatrix(const std::string &filename);
    
    // Carrega a matriz de embeddings de um arquivo
    void loadEmbeddingMatrix(const std::string &filename);
    
    // Gera uma matriz de embeddings aleatória com base no tamanho do vocabulário e dimensão de embedding
    std::vector<std::vector<double>> *generateRandomEmbeddingMatrix(int embed_dim, int vocab_size);

    // Imprime a matriz de embeddings no console
    void printEmbeddingMatrix();
    
    // Destrutor para liberar a memória alocada
    ~Embedding();
};

// Encerra o bloco da definição condicional de EMBEDDING_H
#endif
