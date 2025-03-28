#include <iostream>

bool ePar(int numero) {
    return numero%2 == 0;
}

int main(){
    int numero;
    
    std::cout << "Digite um número: ";
    std::cin >> numero;

    std::cout << "O número " << numero << " é " << ((ePar(numero) ? "par" : "ímpar")) << std::endl;
    
    return 0;
}