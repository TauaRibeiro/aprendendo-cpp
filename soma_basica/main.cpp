#include <iostream>

int somar(int numero1, int numero2){
    return numero1 + numero2;
}

int main(){
    int numero1, numero2, soma;

    std::cout << "Digite o primeiro número:";
    std::cin >> numero1;
    std::cout << "Digite o segundo número: ";
    std::cin >> numero2;

    soma = numero1 + numero2;

    std::cout << "A soma de dois números é " << somar(7, 4) << std::endl;
    std::cout << "A soma de outros dois número é " << soma << std::endl;
    return 0;
}