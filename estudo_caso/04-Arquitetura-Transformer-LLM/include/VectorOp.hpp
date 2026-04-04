// Verifica se VECTOR_MATH_H já foi definido, para evitar múltiplas inclusões
#ifndef VECTOR_MATH_H

// Define VECTOR_MATH_H se ainda não tiver sido definido
#define VECTOR_MATH_H

#include <vector>
#include <stdexcept> // Inclui exceções padrão para tratamento de erros
#include <iostream>  // Biblioteca padrão de entrada e saída (para depuração, se necessário)
#include <cmath> 

// Declaração da classe VectorMath que contém funções auxiliares para operações matriciais
class VectorMath {

public:
    
    // Função estática que realiza a multiplicação matricial (a * b)
    static std::vector<std::vector<double>> matmul(const std::vector<std::vector<double>>& a, const std::vector<std::vector<double>>& b);

    // Função estática que realiza a transposição de uma matriz
    static std::vector<std::vector<double>> transpose(const std::vector<std::vector<double>>& matrix);
};

#endif
