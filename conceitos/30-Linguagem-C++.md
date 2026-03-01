
# Linguagem C++

## História e Evolução da Linguagem C++

A linguagem de programação C++ teve sua origem nos anos 1980, quando Bjarne Stroustrup, um cientista da computação dinamarquês, começou a desenvolver uma extensão para a linguagem C.

Stroustrup, que trabalhava no Bell Labs, buscava criar uma linguagem que combinasse a eficiência e o controle de baixo nível do C com as vantagens da programação orientada a objetos. Em 1983, ele introduziu o "C com Classes", que eventualmente evoluiu para o que conhecemos hoje como C++. A nova linguagem rapidamente se destacou pela sua capacidade de suportar tanto a programação procedural quanto a orientada a objetos, permitindo a criação de software mais modular e reutilizável.


Ao longo dos anos, C++ passou por várias revisões e atualizações que aprimoraram suas funcionalidades e mantiveram a linguagem relevante diante das novas demandas do mercado. A primeira padronização oficial do C++ ocorreu em 1998, conhecida como C++98, seguida pelo C++03, que fez pequenas correções e melhorias. Uma das atualizações mais significativas veio em 2011, com a publicação do padrão C++11. Essa versão trouxe muitas novas características, como a introdução de funções lambda, threading nativo, inicializadores uniformes e a adição da biblioteca padrão aprimorada, que facilitou ainda mais o desenvolvimento de software robusto e eficiente.


O padrão C++14, publicado em 2014, fez melhorias incrementais no C++11, simplificando ainda mais a linguagem e corrigindo inconsistências. Em 2017, o padrão C++17 introduziu novas funcionalidades, como a biblioteca paralela, que melhorou a capacidade de trabalhar com programas concorrentes, e novas estruturas de dados na biblioteca padrão. Mais recentemente, o C++20, publicado em 2020, trouxe recursos revolucionários como conceitos, módulos, ranges e corrotinas, que modernizaram a linguagem e facilitaram o desenvolvimento de software mais seguro, eficiente e escalável. A versão atual é a versão C++23.

C++ continua a evoluir com uma comunidade ativa de desenvolvedores e uma comissão de padrões dedicada a aprimorar a linguagem. Cada nova versão busca manter o equilíbrio entre inovação e compatibilidade com versões anteriores, assegurando que o C++ permaneça uma ferramenta poderosa e relevante para desenvolvedores em diversas áreas, desde sistemas operacionais e jogos até aplicações financeiras e científicas.

A longevidade e a constante evolução da linguagem C++ demonstram sua incrível capacidade de adaptação e sua importância contínua no mundo da programação.

## Estrutura Básica

`hello.cpp`

```cpp
// Comentário
/* COmentário longo */

#include <iostream>

using namespace std

int main() {
     
    cout << "Hello World";

    printf("\n");

    return 0;

}
```
## Compilação

Para compilar código C++ no Linux (Ubuntu) execute os comandos abaixos no terminal 

`sudo apt install build-essential`

`g++ -o hello.cpp`

`\hello`

ou 

`g++ Programa.cpp -o programa`

`./programa`



## Bibliografia complementar

C++ Coding style

https://firefox-source-docs.mozilla.org/code-quality/coding-style/coding_style_cpp.html

C++ Language Tutorial
https://cplusplus.com/doc/tutorial/C++ 

Standard Library (STL) overview
https://learn.microsoft.com/en-us/cpp/standard-library/cpp-standard-library-overview

Livros recomendados:

The C++, Bjarne: livro técnico

C++ How to program, Paul Deitel: Mais didático

C++ Primer, Stanley: Intermediário.