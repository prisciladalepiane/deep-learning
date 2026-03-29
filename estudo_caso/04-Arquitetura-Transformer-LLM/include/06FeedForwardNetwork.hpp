// Verifica se FEED_FORWARD_NETWORK_H já foi definido, para evitar múltiplas inclusões
#ifndef FEED_FORWARD_NETWORK_H

// Define FEED_FORWARD_NETWORK_H se ainda não tiver sido definido
#define FEED_FORWARD_NETWORK_H


#include <vector> // biblioteca padrão de vetores
#include <iostream> // biblioteca padrão de entrada e saída
#include <cmath> // biblioteca matemática padrão para funções como exp, tanh, etc.
#include <random> // biblioteca random

// Declaração da classe FeedForwardNetwork
class FeedForwardNetwork {

public:

    // Construtor que inicializa apenas a dimensão do modelo
    explicit FeedForwardNetwork(int model_dim);

    // Função que realiza o forward pass, processando os inputs pela rede feedforward
    std::vector<double> forward(const std::vector<double>& input) const;

private:

    // Dimensão do modelo (tamanho da representação vetorial)
    int model_dim;

    // Dimensão da camada oculta definida internamente
    const int hidden_dim = 4 * model_dim;  // Geralmente, hidden_dim é 4 vezes o model_dim nos transformers

    // Pesos e vieses para a primeira transformação linear
    std::vector<std::vector<double>> W1;
    std::vector<double> b1;

    // Pesos e vieses para a segunda transformação linear
    std::vector<std::vector<double>> W2;
    std::vector<double> b2;

    // Funções para inicializar os pesos com valores aleatórios
    void initialize_weights(std::vector<std::vector<double>>& weights, int rows, int cols);
    void initialize_bias(std::vector<double>& bias, int size);

    // Função de ativação (ReLU neste caso)
    std::vector<double> relu(const std::vector<double>& x) const;
};

#endif
