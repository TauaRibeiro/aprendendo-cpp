#include <iostream>

int main() {
    // Declaração normal
    int num_elefantes;

    // Inicialização com {}

    int num_leoes {}; //Inicializa com zero

    int num_caes {10}; //Incializa com 10

    int num_gatos {15}; //Inicializa com 15

    // É também possível fazer uma inicialização apartir de uma expressão
    int animais_domesticados { num_caes + num_gatos};

    /*  
        Essa forma irá levantar um erro ou um warning ao tentar inicializar com um número real
        int erro_conversao {2.9};
    */

    //Inicialização com () / inicialização funcional

    int qtd_macaes (5);

    int qtd_laranjas (10);

    int qtd_frutas (qtd_macaes + qtd_laranjas);

    // O valor após o `.` será perdido, sobrando apenas o número antes da virgula (2 no caso do exemplo abaixo)
    int conversao_aproximada (2.9);


    //Inicialização normal;

    int qtd_bikes = 2;
    int qtd_caminhoes = 7;
    int qtd_veiculo = qtd_bikes + qtd_caminhoes;

    int conversao_aproximada_normal = 2.9;
    
    std::cout << "Tamanho de bytes de int: " << sizeof(int) << std::endl;
    std::cout << "Tamnaho de bytes de 'qtd_caminhoes': " << sizeof(qtd_caminhoes) << std::endl;

    // O signed é um modificador que diz explicitamente que o valor pode ser tanto positivo quanto negativo (+/-)
    signed int numero1 {10};
    signed int numero2 {-300};

    /* Já o unsigned indica que será somente positivo, se tentar colocar um número negativo nele irá levantar um erro
    unsigned int numero3 {-10}; */

    return 0;
}