//Bibliotecas
#include <iostream> // Para operações de entrada/saída
#include <fstream> // Para operações de arquivo
#include <cstring> // Para funções de manipulação de strings
#include <sstream> // Para manipulação de strings de maneira semelhante a fluxos de entrada/saída

using namespace std;// Declaração de uso do namespace std 

int main() {

    // Variável de controle para loop principal
    bool running = true; 

    // Buffer para entrada do usuário
    char input[999]; 

    // Loop principal do programa
    while (running) {
        
        cout << "\nEscolha Uma Opção do Menu (Digite a letra em Maiúsculo):" << endl;
        cout << "(C)arregar, (I)mprimir, (D)eletar, (B)uscar, (E)ncerrar" << endl;
        cin >> input;

        switch (input[0]) {
            case 'C': {
                cout << "(T)erminal, (A)rquivo" << endl;
                cin >> input;
                if (input[0] == 'T') {
                    cout << "Digite números separados com espaço, por exemplo: 1 2 3 4 5" << endl;
                } else if (input[0] == 'A') {
                    cout << "Digite o nome do arquivo:" << endl;
                break;
            }
            case 'I':
                break;
            case 'D': {
                cout << "Digite o valor que você deseja deletar:" << endl;
            }
            case 'B': {
                cout << "Digite o valor que você deseja buscar:" << endl;
            }
            case 'E':
                running = false; 
                break;
        }
        }
    }
    return 0; 
}