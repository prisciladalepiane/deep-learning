
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

### Tipos de Dados em C++

Em C++, o tipo de uma variável deve ser conhecido em tempo de compilação (quando o programa é compilado) e esse tipo não 
pode ser alterado sem recompilar o programa. Isso significa que uma variável inteira pode conter apenas valores inteiros. 

Se você quiser armazenar algum outro tipo de valor, precisará usar uma variável diferente.

Inteiros são apenas um dos muitos tipos de dados que C++ oferece suporte pronto para uso. 

C++ também permite que você crie seus próprios tipos definidos pelo usuário. Isso é algo que faremos principalmente em Machine Learning e é parte do que torna C++ uma linguagem poderosa.


```c++
#include <iostream>
using namespace std;

int main()
{
    // Declaramos as variáveis
    int x;
    double y;
    int resultado_int;
    double resultado_double;

    // Inicializamos as variáveis
    x = 2;
    y = 3.1;

    // Operação
    resultado_int = x + y;
    resultado_double = x + y;

    // Imprime o resultado
    cout << "Resultado Int: " << resultado_int << endl;
    cout << "Resultado Double: " << resultado_double << endl;

}
```
### Loop While 

A instrução while (também chamada de loop while) é o mais simples dos três tipos de loops fornecidos por C++ e tem uma definição muito semelhante à de uma instrução if:

while (condição)\
    statement;


```c++
#include <iostream>
using namespace std;

int main()
{
    // Contador
    int contador;
    contador = 1;

    // Loop
    while (contador <= 10)
    {
        cout << contador << " ";
        ++contador;
    }
 
    cout << "\nConcluído!\n";
 
    return 0;
}
```
### Loop For

A instrução de loop mais utilizada em C++ é a instrução for. A instrução for (também chamada de loop for) é preferida quando 
temos uma variável de loop óbvia porque nos permite definir, inicializar, testar e alterar o valor das variáveis de loop de 
maneira fácil e concisa.

Sintaxe:

for (init-statement; condition; end-expression)
   statement

```c++

#include <iostream>
using namespace std;

// Imprimir os números de 1 a 10
int main()
{
    for (int count = 1; count <= 10; ++count)
        cout << count << ' ';
 
}
``` 

### Arrays
 
Um array é um tipo de dado agregado que nos permite acessar muitas variáveis do mesmo tipo por meio de um único identificador.

Para declarar um array, usamos colchetes ([]) para dizer ao compilador que esta é uma variável de array (em vez de uma variável normal), 
bem como quantas variáveis alocar (chamado de comprimento do array).

Cada uma das variáveis em um array é chamada de elemento. Os elementos não têm seus próprios nomes exclusivos. Em vez disso, para 
acessar elementos individuais de um array, usamos o nome do array, junto com o operador subscrito ([]) e um parâmetro chamado 
subscrito (ou índice) que informa ao compilador qual elemento queremos. Esse processo é chamado de subscrito ou indexação do array.

```c++
#include <iostream>
using namespace std;

int main()
{
    // Cria um array de números inteiros
    int lista[5]; 

    // Atribui valores a cada elemento do array
    lista[0] = 1; 
    lista[1] = 2;
    lista[2] = 3;
    lista[3] = 4;
    lista[4] = 5; 
 
    cout << "\nEste é o primeiro elemento do array: " << lista[0] << '\n';
    cout << "Aqui está a soma de todos os elementos do array: " << lista[0] + lista[1] + lista[2] + lista[3] + lista[4] << "\n\n";
 
}
```


```c++

#include <iostream>
using namespace std;

int main()
{
    // Observe que estamos inicializando somente os 3 primeiros elementos do array
    // Isso deve ser evitado
    int lista_num1[5] = { 100, 200, 300 }; 
 
    cout << "\n\nImprime Array 1:\n";
    for (int i = 0; i <= 4; ++i)
        cout << "Elemento do array no índice " << i << " é igual a " << lista_num1[i] << "\n";


    // Não definimos o tamanho do array de forma explícita, mas sim através de atribuição dos valores dos elementos.
    // É o que chamamos de alocação dinâmica
    int lista_num2[] = { 1, 2, 3, 4, 5, 6, 7 }; 

    cout << "\n\nImprime Array 2:\n";
    for (int a = 0; a <= 6; ++a)
        cout << "Elemento do array no índice " << a << " é igual a " << lista_num2[a] << "\n";

    
    // Arrays suportam qualquer tipo básico em C++
    string lista_num3[6] = { "Azul", "Verde", "Rosa", "Branco", "Amarelo", "Marrom" }; 

    cout << "\n\nImprime Array 3:\n";
    for (int z = 0; z <= 5; ++z)
        cout << "Elemento do array no índice " << z << " é igual a " << lista_num3[z] << "\n";

}
```

### Structs

Há muitas situações em programação em que precisamos de mais de uma variável para representar um objeto. 

Por exemplo, para representar um funcionário, você pode armazenar nome, aniversário, altura, peso ou qualquer outra característica.

Felizmente, C++ nos permite criar nossos próprios tipos de dados agregados definidos pelo usuário. 

Um tipo de dado agregado é um tipo de dado que agrupa diversas variáveis individuais. 

Um dos tipos de dados agregados mais simples é o struct. 

Um struct (abreviação de estrutura) nos permite agrupar variáveis de tipos de dados mistos em uma única unidade.


```c++

#include <iostream>
using namespace std;

// Declara um struct
struct Funcionario
{
    int id;
    int idade;
    double salario;
};
 
// Função
void imprimeFunc(Funcionario func)
{
    cout << "ID:   " << func.id << '\n';
    cout << "Idade:  " << func.idade << '\n';
    cout << "Salário: " << func.salario << '\n';
}
 
int main()
{
    // Inicializa a variável chamada bob do tipo Funcionario
    Funcionario bob = { 1001, 42, 3589.15 };

    // Inicializa a variável chamada maria do tipo Funcionario
    Funcionario maria = { 2003, 28, 4561.27 };
 
    // Imprime Bob
    cout << "\nDados do Bob:" << "\n";
    imprimeFunc(bob);
 
    // Imprime Maria
    cout << "\nDados da Maria:" << "\n";
    imprimeFunc(maria);
 }

```

### Structs Aninhadas


```c++

#include <cstdint>
#include <iostream>
using namespace std;

// Primeira struct
struct Funcionario
{
    int16_t id;
    int32_t idade;
    double salario;
};
 
// Segunda struct
struct Empresa
{
    Funcionario CEO; 
    int numFun;
};
 
// Função
void imprimeEmpresa(Empresa empresa)
{
    cout << "ID do CEO:   " << empresa.CEO.id << '\n';
    cout << "Idade do CEO:  " << empresa.CEO.idade << '\n';
    cout << "Salário do CEO: " << empresa.CEO.salario << '\n';
    cout << "Número de Funcionários: " << empresa.numFun << '\n';
}

// Função
void imprimeFunc(Funcionario func)
{
    cout << "ID:   " << func.id << '\n';
    cout << "Idade:  " << func.idade << '\n';
    cout << "Salário: " << func.salario << '\n';
}
 
int main()
{
    // Inicializa a variável chamada ABC do tipo Empresa
    Empresa ABC;

    // Atribui valores às variáveis
    ABC.CEO.id = 1;
    ABC.CEO.idade = 62;
    ABC.CEO.salario = 75000.00;
    ABC.numFun = 120;

    // Imprime ABC
    cout << "\nDados da Empresa ABC:" << "\n";
    imprimeEmpresa(ABC);

    // Inicializa a variável chamada ZXY do tipo Empresa
    Empresa ZXY = {{ 10, 58, 85000.0 }, 140 };

    // Imprime ZXY
    cout << "\nDados da Empresa ZXY:" << "\n";
    imprimeEmpresa(ZXY);

    // Inicializa a variável chamada bob do tipo Funcionario
    Funcionario bob = { 1001, 42, 3589.15 };

    // Imprime Bob
    cout << "\nDados do Bob:" << "\n";
    imprimeFunc(bob);
 
    
 
 }
 ```
## Enum

C++ contém alguns tipos de dados integrados. Mas esses tipos nem sempre são suficientes para os tipos de coisas que queremos fazer. 

Portanto, C++ contém recursos que permitem aos programadores criar seus próprios tipos de dados. Esses tipos de dados são chamados 
de tipos de dados definidos pelo usuário.

Talvez o tipo de dado mais simples definido pelo usuário seja o tipo enumerado (enum). Um tipo enumerado 
(também chamado de enumeração ou enum) é um tipo de dado em que cada valor possível é definido como uma constante simbólica 
(chamada de enumerador). Enumerações são definidas por meio da palavra-chave enum. 


```c++
#include <iostream>
#include <string>
using namespace std;

// Enum
enum Cor
{
    cor_azul,
    cor_marrom,
    cor_verde
};
 
string getCorName(Cor cor)
{
    if (cor == cor_azul)
        return "Azul";
    if (cor == cor_marrom)
        return "Marrom";
    if (cor == cor_verde)
        return "Verde";

    return "?";
}
 
int main()
{

    // Declara variável do tipo enum
    Cor cor_carro = { cor_azul };
 
    // Imprime na tela
    cout << "\nID  da Cor do seu carro: " << cor_carro << "\n\n";

    cout << "\nCor do seu carro: " << getCorName(cor_carro) << "\n\n";

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