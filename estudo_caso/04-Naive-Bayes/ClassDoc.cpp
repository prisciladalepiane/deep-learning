// Machine Learning Para Classificação de Documentos em C++

// Compile assim: g++ -std=c++20 ClassDoc.cpp -o classdoc

/* -------------------- PARTE 1 -------------------- */

// Warning suppression
#pragma GCC diagnostic push												
#pragma GCC diagnostic ignored "-Wsign-compare"

// Libs
#include <iostream>
#include <chrono>
#include <fstream>				
#include <vector>
#include <string>
#include <numeric>
#include <algorithm>			
#include <cmath>				
#include <math.h>				

// Namespace
using namespace std;
using namespace std::chrono;

// Índice de início dos dados de teste
const int startTest = 900;	

// Mais variáveis de controle
double calcMean(vector<double> vect);
double calcVariance(vector<double> vect);

