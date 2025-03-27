#include <iostream>

int main(){
    int decimal = 15;
    int octal = 017; // Quando é colocado um zero na frente do número o compilador entede que o número está na base 8 (ocatal)
    int hex = 0x0f;
    int binario = 0b00001111;

    std::cout << "Número na base 10: " << decimal << std::endl;
    std::cout << "Número na base 8: " << octal << std::endl;
    std::cout << "Número na base 16: " << hex << std::endl;
    std::cout << "Número na base 2: " << binario << std::endl;

    return 0;
}