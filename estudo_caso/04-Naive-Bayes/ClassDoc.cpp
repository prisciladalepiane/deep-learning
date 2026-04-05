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

/* -------------------- PARTE 2 -------------------- */

// Métodos auxiliares
void print2DVector(vector < vector <double> > vect);
vector<vector<double> > priorProb(vector < double > vect);
vector<vector<double> > countclasse(vector<double> vect);
vector<vector<double> > likelihoodtipo_doc (vector<double> classe, vector<double> tipo_doc, vector<vector<double> > count_classe);
vector<vector<double> > likelihoodcertificado_valido (vector<double> classe, vector<double> certificado_valido, vector<vector<double> > count_classe);
vector<vector<double> > uso_diasMean (vector<double> classe, vector<double> uso_dias, vector<vector<double> > count_classe);
vector<vector<double> > uso_diasVar (vector<double> classe, vector<double> uso_dias, vector<vector<double> > count_classe);
vector<vector<double> > uso_dias_metrics (vector<vector<double> > uso_diasMean, vector<vector<double> > uso_diasVar);
double calc_uso_dias_lh (double v, double mean_v, double var_v);

// Método de implementação do Teorema de Bayes
vector<vector<double> > calc_raw_prob(double tipo_doc, double certificado_valido, double uso_dias, vector<vector<double> > apriori, vector<vector<double> > lh_tipo_doc, vector<vector<double> > lh_certificado_valido, vector<vector<double> > uso_dias_mean, vector<vector<double> > uso_dias_var);

//  Cálculo de métricas de avaliação do modelo
vector<vector<double> > confusionMatrix(vector<double> matA, vector<double> matB);
double accuracy(vector<double> matA, vector<double> matB);

// Número de previsões que serão mostradas
const int numOfIterations = 5;	
