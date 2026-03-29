// A LayerNorm (normalização de camada)

// Verifica se LAYERNORM_H já foi definido, para evitar múltiplas inclusões
#ifndef LAYERNORM_H

// Define LAYERNORM_H se ainda não tiver sido definido
#define LAYERNORM_H

#include <vector>   // vetores
#include <iostream> // entrada e saída
#include <cmath>    // cálculos matemáticos
#include <algorithm> // algoritmos genéricos (como std::min, std::max)
#include <numeric> // operações numéricas (como soma)

// classe LayerNorm, implementa a normalização por camada
class LayerNorm {

public:
    
    // Construtor que inicializa a dimensão do modelo e os vetores gamma e beta
    explicit LayerNorm(int model_dim);

    // Função que aplica a normalização nos dados de entrada
    std::vector<double> normalize(const std::vector<double>& input) const;

private:
    
    // Dimensão do modelo (tamanho da representação vetorial)
    int model_dim;
    
    // Vetor de escala (gamma) e deslocamento (beta) para a normalização
    std::vector<double> gamma, beta;
};

#endif
