#include <iostream>

int main(){
    /*
        std::cout é a sáida padrão do sistema
        << "Olá mundo" significa que está colocando a string "Olá mundo" na saída padrão do sistema
        << std::endl coloca na saída padrão um caracter de nova linha '\n'
    */

    // Para compilar o código utilizo o seguinte comando g++-11 main.cpp std=c++20 -o ./output
    // Para rodar eu só escrevo ./output
    std::cout << "Olá mundo" << std::endl;
    std::cout << "Número 1";
    std::cout << "Número2" << std::endl;
    std::cout << "Tentando compilar pelo terminal";

    return 0; 
}
