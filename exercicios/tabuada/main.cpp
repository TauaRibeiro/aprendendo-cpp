#include <iostream>

int main(){
    int numero;

    std::cout << "Digite o número que deseja calcular a tabuada: ";
    std::cin >> numero;

    for(int i = 1; i < 11; i++) {
        std::cout << numero << " X " << i << " = " << numero*i << std::endl;
    }

    return 0;
}