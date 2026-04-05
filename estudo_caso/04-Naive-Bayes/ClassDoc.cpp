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


/* -------------------- PARTE 3 -------------------- */

// Função main
int main() {

    // Define o nome do arquivo como string
	string fileName = "dados/dataset.csv";

    // Objeto para receber o conteúdo do arquivo		
	ifstream inputFile;					
	
    // Abre o arquivo
	inputFile.open(fileName);	
	
	// Verifica se há algum erro
	if(!inputFile.is_open()) {
		cout << "Falha ao abrir o arquivo." << endl;
		return 0;
	}

    // Declaração das variáveis

    // Variáveis escalares do tipo double para tratar os valores de cada coluna
	double idVal;
	double tipo_docVal;
	double classeVal;
	double certificado_validoVal;
	double uso_diasVal;
    
    // Variáveis do tipo vetor para todos os elementos de cada coluna do dataset
	vector<double> id;
	vector<double> tipo_doc;			
	vector<double> classe;		
	vector<double> certificado_valido;		
	vector<double> uso_dias;		
	
    // Variável para armazenar o cabeçalho do arquivo
	string header;		

    // Variável para armazenar cada célula do arquivo csv		
	string cell; 	
	
	// Recupera o cabeçalho para desconsiderar a linha
	getline(inputFile, header);
	
    // Loop de carga e limpeza inicial dos dados
    while(inputFile.good()) {
				
        // Leitura da coluna de id
		getline(inputFile, cell, ','); 			

        // Remove aspas		
		cell.erase(remove(cell.begin(), cell.end(), '\"' ),cell.end());	
	
        // Agora seguimos fazendo a leitura somente das células com valores
		if(!cell.empty()) {								

            // Converte o id de string para double	
			idVal = stod(cell);	

            // Append do valor de x no vetor	
            // Referência: http://www.cplusplus.com/reference/vector/vector/push_back/		
			id.push_back(idVal);					
							
            // Leitura da coluna tipo_doc
			getline(inputFile, cell, ','); 	

            // Conversão de string para double				
			tipo_docVal = stod(cell);	

            // Append no vetor		
			tipo_doc.push_back(tipo_docVal);		
				
            // Leitura da coluna classe	
			getline(inputFile, cell, ',');	

            // Converte para double			
			classeVal = stod(cell);	

            // Append no vetor		
			classe.push_back(classeVal);	
			
            // Leitura da coluna certificado_valido 
			getline(inputFile, cell, ',');		

            // Converte para double		
			certificado_validoVal = stod(cell);	

            // Append no vetor				
			certificado_valido.push_back(certificado_validoVal);				
				
            // Leitura da coluna uso_dias
			getline(inputFile, cell);	

            // Conversão para double			
			uso_diasVal = stod(cell);		

            // Append no vetor				
			uso_dias.push_back(uso_diasVal);					
		}
		else {

            // Se linha vazia, finaliza o loop											
			break;
		}	
	}

	// Inicia a medição do tempo de execução
	auto start = high_resolution_clock::now();  

	cout << "Iniciando a Execução do Algoritmo" << endl << endl;
	
	// Fazemos a divisão dos dados criando os vetores de treinamento

	// Vetor com dados de treino para tipo_doc
	vector<double> tipo_doctrain_data;

	// Carrega o vetor
	for(int i = 0; i < startTest; i++) {
		tipo_doctrain_data.push_back(tipo_doc.at(i));
	}
	
	// Vetor com dados de treino para classe
	vector<double> classetrain_data;

	// Carrega o vetor
	for(int i = 0; i < startTest; i++) {
		classetrain_data.push_back(classe.at(i));
	}
	
	// Vetor com dados de treino para certificado_valido
	vector<double> certificado_validotrain_data;

	// Carrega o vetor
	for(int i = 0; i < startTest; i++) {
		certificado_validotrain_data.push_back(certificado_valido.at(i));
	}	
	
	// Vetor com dados de treino para uso_dias
	vector<double> uso_diastrain_data;
	
	// Carrega o vetor
	for(int i = 0; i < startTest; i++) {
		uso_diastrain_data.push_back(uso_dias.at(i));
	}

	// Fazemos a divisão dos dados criando os vetores de teste

	// Vetor com dados de teste para tipo_doc
	vector<double> tipo_doctest_data;
	
	// Carrega o vetor
	for(int i = startTest; i < id.size(); i++) {
		tipo_doctest_data.push_back(tipo_doc.at(i));
	}
	
	// Vetor com dados de teste para classe
	vector<double> classetest_data;
	
	// Carrega o vetor
	for(int i = startTest; i < id.size(); i++) {
		classetest_data.push_back(classe.at(i));
	}
	
	// Vetor com dados de teste para certificado_valido
	vector<double> certificado_validotest_data;
	
	// Carrega o vetor
	for(int i = startTest; i < id.size(); i++) {
		certificado_validotest_data.push_back(certificado_valido.at(i));
	}	
	
	// Vetor com dados de teste para uso_dias
	vector<double> uso_diastest_data;
	
	// Carrega o vetor
	for(int i = startTest; i < id.size(); i++) {
		uso_diastest_data.push_back(uso_dias.at(i));
	}

	// Começo do Algoritmo Naive Bayes

	cout << "Probabilidade Apriori:" << endl;

	// Probabilidades apriori
	// Matriz 1x2 
	vector<vector<double> > apriori = priorProb(classetrain_data);					
	cout << "Probabilidades Apriori: " << endl;
	print2DVector(apriori);
	cout << endl;
	
	// Vetor com a contagem da variável classe
	// Matriz 1x2 
	vector<vector<double> > count_classe = countclasse(classetrain_data);		
	
	cout << "Probabilidade Condicional:" << endl;
	
	// Likelihood (Probabilidade) para variável tipo_doc
	// Matriz 2x3
	vector<vector<double> > lh_tipo_doc = likelihoodtipo_doc(classetrain_data, tipo_doctrain_data, count_classe); 
	cout << "\ttipo_doc " << endl;
	print2DVector(lh_tipo_doc);
	cout << endl;
	
	// Likelihood (Probabilidade) para variável certificado_valido
	// Matriz 2x2
	vector<vector<double> > lh_certificado_valido = likelihoodcertificado_valido(classetrain_data, certificado_validotrain_data, count_classe); 
	cout << "\tcertificado_valido: " << endl;
	print2DVector(lh_certificado_valido);
	cout << endl;
	
	// Média e variância da variável uso_dias 
	// Matriz 1x2
	vector<vector<double> > uso_dias_mean = uso_diasMean(classetrain_data, uso_diastrain_data, count_classe);	
	vector<vector<double> > uso_dias_var = uso_diasVar(classetrain_data, uso_diastrain_data, count_classe);     

	// Métricas da variável uso_dias 
	cout << "\tuso_dias: " << endl;
	vector<vector<double> > uso_diasMetrics = uso_dias_metrics(uso_dias_mean, uso_dias_var);
	print2DVector(uso_diasMetrics);
	cout << endl << endl;

	// Média da variável uso_dias
	cout << "uso_dias Mean: " << endl;
	print2DVector(uso_dias_mean);
	cout << endl;
	
	// Variância da variável uso_dias
	cout << "uso_dias Variance: " << endl;
	print2DVector(uso_dias_var);
	cout << endl << endl;
	
	// Final do Algoritmo Naive Bayes
	
	auto stop = high_resolution_clock::now();	

	// Vetor para as probabilidades após o treinamento
	// Matriz 1x2
	vector<vector<double> > raw(1, vector<double> (2, 0)); 
		
	cout << "Prevendo as Probabilidades em Dados de Teste:" << endl;
	
	// Vamos imprimir as 5 primeiras previsões
	for(int i = startTest; i < (startTest + numOfIterations); i++) {	

		// Matriz 1x2 	
		raw = calc_raw_prob(tipo_doc.at(i), certificado_valido.at(i), uso_dias.at(i), apriori, lh_tipo_doc, lh_certificado_valido, uso_dias_mean, uso_dias_var);   
		print2DVector(raw);
	}
	cout << endl << endl;
	
	// Registra a conclusão do algoritmo
	std::chrono::duration<double> elapsed_sec = stop-start;		
	cout << "Tempo de Execução: " << elapsed_sec.count() << endl << endl;	

	// Normaliza as probabilidades
	vector<double> p1(146); 
	for(int i = 0; i < tipo_doctest_data.size(); i++) {

		// Matriz 1x2
		raw = calc_raw_prob(tipo_doctest_data.at(i), certificado_validotest_data.at(i), uso_diastest_data.at(i), apriori, lh_tipo_doc, lh_certificado_valido, uso_dias_mean, uso_dias_var);   
		if((raw.at(0).at(0)) > 0.5 ) {
			p1.at(i) = 0;
		}
		else if((raw.at(0).at(1)) > 0.5) {
			p1.at(i) = 1;
		}
		else {}
	}

	// Matriz de Confusão
	cout << "Confusion Matrix: " << endl;
	vector<vector<double> > table = confusionMatrix(p1, classetest_data);
	print2DVector(table); 
	cout << endl;
	
	double acc = accuracy(p1, classetest_data);
	cout << "Accuracy: " << acc << endl;
	
	// Sensitivity = TP / (TP + FN)
	double sensitivity = (table.at(0).at(0) / ( table.at(0).at(0) + table.at(1).at(0)));
	cout << "Sensitivity: " << sensitivity << endl;
	
	// Specificity = TN / (TN + FP)
	double specificity = (table.at(1).at(1) / ( table.at(1).at(1) + table.at(0).at(1)));
	cout << "Specificity: " << specificity << endl << endl;
	
	return 0;


} // Final da Função Main

/* -------------------- PARTE 4 -------------------- */

// Método para imprimir o vetor
void print2DVector(vector<vector<double> > vect) {
	for(int i = 0; i < vect.size(); i++) {
		for(int j = 0; j < vect[i].size(); j++) {
			cout << vect[i][j] << " ";
		}
		cout << endl;
	}
}

/* -------------------- PARTE 5 -------------------- */

// Calcula as probabilidade apriori nos dados de treino
vector<vector<double> > priorProb(vector<double> vect) {

	// Matriz 1x2
	vector<vector<double> > prior(1, vector<double> (2, 0)); 
	
	for(int i = 0; i < vect.size(); i++) {
		if(vect.at(i) == 0) {
			prior.at(0).at(0)++;
		}
		else {
			prior.at(0).at(1)++;
		}
	}

	prior.at(0).at(0) = prior.at(0).at(0) / vect.size();
	prior.at(0).at(1) = prior.at(0).at(1) / vect.size();
		
	return prior;
}
