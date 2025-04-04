#include <iostream>

int main(){
    int valor_inteiro {45};
    double valor_double {33.65};
    // Referências são aliases para as variáveis, permitindo utiliza-las como se fosse a variável original

    //Declarando e inicializando uma referência em C++
    int& referencia_int1 {valor_inteiro}; //Declarando uma referência de um inteiro chamado referencia_int no qual referencia valor_inteiro
    int& referencia_int2 = valor_inteiro;
    double& referencia_double {valor_double};

    //É necessário inicializala de imediato na declaração

    std::cout << "valor_inteiro: " << valor_inteiro << std::endl;
    std::cout << "valor_double: " << valor_double << std::endl;
    std::cout << "referencia_int1: " << referencia_int1 << std::endl;
    std::cout << "referencia_int2: " << referencia_int2 << std::endl;
    std::cout << "referencia_double: " << referencia_double << std::endl;
    std::cout << "&valor_inteiro: " << &valor_inteiro << std::endl;
    std::cout << "&valor_double: " << &valor_double << std::endl;
    std::cout << "&referencia_int1: " << &referencia_int1 << std::endl;
    std::cout << "&referencia_int2: " << &referencia_int2 << std::endl;
    std::cout << "&referencia_double: " << &referencia_double << std::endl;
    std::cout << "sizeof(int): " << sizeof(int) << std::endl;
    std::cout << "sizeof(int&): " << sizeof(int&) << std::endl;
    std::cout << "sizeof(referencia_int1): " << sizeof(referencia_int1) << std::endl;

    referencia_double = 90.08;
    
    std::cout << "--------------Alterando o valor double pela referência--------------" << std::endl;
    std::cout << "referencia_double: " << referencia_double << std::endl;
    std::cout << "valor_double: " << valor_double << std::endl;
    std::cout << "&referencia_double: " << &referencia_double << std::endl;
    std::cout << "&valor_double: " << &valor_double << std::endl;

    valor_double = 20.99;

    std::cout << "--------------Alterando o valor double diretamente--------------" << std::endl;
    std::cout << "referencia_double: " << referencia_double << std::endl;
    std::cout << "valor_double: " << valor_double << std::endl;
    std::cout << "&referencia_double: " << &referencia_double << std::endl;
    std::cout << "&valor_double: " << &valor_double << std::endl;
    
    std::cout << "==================================================================" << std::endl;
    /* Diferenças entre ponteiros e referências
    
    ponteiros
    - Precisam ser desreferênciados para que possa fazer escrita/leitura no valor apontado
    - Podem ser mudados para apontar para outro valor
    - Podem ser declarados sem inicializar 
    
    referêcias
    - Não precisam ser desreferênciados para fazer escrita/leitura no valor referênciado
    - Não podem ser mudados para referênciar outro valor
    - Precisam ser inicializados em suas declarações*/

    int idade {19};
    const int& ref_idade {idade};
    // Quando uma referência é constante, significa que o valor original não poder ser alterado através da referência
    // Porém ainda é possível alterar o valor através da variável original

    std::cout << "idade: " << idade << std::endl;
    std::cout << "referencia idade: " << ref_idade << std::endl;

    idade = 30;

    std::cout << "Alterando pelo valor original" << std::endl;
    std::cout << "idade: " << idade << std::endl;
    std::cout << "referencia idade: " << ref_idade << std::endl;


    return 0;
}