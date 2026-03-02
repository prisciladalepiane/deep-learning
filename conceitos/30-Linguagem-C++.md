
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

```c++
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

## Sintaxe 

### Statements e Funções

Um programa de computador é uma sequência de instruções que dizem ao computador o que fazer. 

Um statement é um tipo de instrução que faz com que o programa execute alguma ação.

Os statements são de longe o tipo mais comum de instrução em um programa C++. Isso ocorre porque eles são a menor unidade de computação independente na linguagem C++. Eles agem de forma muito semelhante à das sentenças em linguagem natural. 

Quando queremos transmitir uma ideia a outra pessoa, normalmente escrevemos ou falamos em frases (não em palavras ou sílabas aleatórias). 
Em C++, quando queremos que nosso programa faça algo, normalmente escrevemos statements.

A maioria (mas não todos) os statements em C++ termina em ponto-e-vírgula. Se você vir uma linha que termina em ponto-e-vírgula, provavelmente é statement.

Em uma linguagem de alto nível como C++, um único statement pode ser compilado em várias instruções de linguagem de máquina.

Existem muitos tipos diferentes de statements em C++:

- Statements de declaração
- Statements de jump
- Statements de expressão
- Statements compostas
- Statements condicionais
- Statements de iteração (loops)
- Statements de blocos try

Em C++, statements são normalmente agrupados em unidades chamadas funções. Uma função é uma coleção de instruções que são executadas 
sequencialmente.


```c++
#include <iostream>
using namespace std;

int main()
{
   cout << "Hello world!" << endl;
   return 0;
}
```

### Manipulando Variáveis

Um programa pode adquirir dados para trabalhar de várias maneiras: de um arquivo ou banco de dados, através de uma rede, 
do usuário fornecendo entrada em um teclado ou do programador colocando dados diretamente no código-fonte do próprio programa. 

No programa “Hello world”, o texto “Hello world!” foi inserido diretamente no código-fonte do programa, fornecendo dados para o programa usar. 

O programa então manipula esses dados enviando-os ao monitor para serem exibidos.

Os dados em um computador são normalmente armazenados em um formato que é eficiente para armazenamento ou processamento 
(e, portanto, não pode ser lido por humanos). Assim, quando o programa “Hello World” é compilado, o texto “Hello world!” é convertido 
em um formato mais eficiente para o programa usar.

Em C++ acessamos a memória indiretamente por meio de um objeto. 

Um objeto é uma região de armazenamento (geralmente memória) que tem um valor e outras propriedades associadas. Quando um objeto é definido, o compilador determina automaticamente onde o objeto será colocado na memória. Como resultado, em vez de dizer vá obter o valor armazenadomna caixa de correio número 320, podemos dizer, vá obter o valor armazenado por esse objeto e o compilador saberá onde procurar esse valor na memória. Isso significa que podemos nos concentrar no uso de objetos para armazenar e recuperar valores, e não precisamos nos 
preocupar onde na memória eles estão realmente sendo colocados.

Os objetos podem ser nomeados ou não nomeados (anônimos). 

Um objeto nomeado é chamado de variável e o nome do objeto é chamado de identificador. Em nossos programas, a maioria dos objetos que criamos serão variáveis.

A linha using namespace std; no código C++ é usada para evitar a necessidade de prefixar todos os nomes das entidades da 
biblioteca padrão C++ (por exemplo, cout, cin, endl, etc.) com std::.

Sem esta linha, você teria que escrever std::cout em vez de apenas cout, std::endl em vez de apenas endl, e assim por diante.  Isso pode tornar o código mais conciso e legível.

```c++
#include <iostream>
using namespace std;

int main()
{
    // Declaramos a variável
    int x;

    // Inicializamos a variável
    x = 10;

    cout << "Hello world!" << endl;
    
    // Imprimimos o valor de x
    cout << "Valor de x: " << x << endl;

    return 0;
}
```






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