//Bibliotecas
#include <iostream> // Para operações de entrada/saída
#include <fstream> // Para operações de arquivo
#include <cstring> // Para funções de manipulação de strings
#include <sstream> // Para manipulação de strings de maneira semelhante a fluxos de entrada/saída

using namespace std;// Declaração de uso do namespace std 


int main() {

    int var = 15;
    int *endereco = &var;

    cout << "var: " << var << endl;
    cout << "*endereco: " << *endereco << endl;
    printf("&var: %p\n",     &var);
    printf("endereco: %p\n", endereco);
    printf("&endereco: %p\n", &endereco);

    *endereco = 20;

    cout << "var (após modificação): " << var << endl;

    // Referência
    int &ref = var;

    printf("&ref: %p\n", &ref);
    printf("ref: %p\n", ref);

    ref = 30;
    cout << "var (após modificação via referência): " << var << endl;

    return 0;
}