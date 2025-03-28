#include <iostream>
#include <iomanip>

int main(){
    // Declarações e inicializações
    float numero1 {1.12345678901234567890f};
    double numero2 {1.12345678901234567890};
    long double numero3 {1.2345678901234567890L};

    std::cout << "sizeof float: " << sizeof(numero1) << std::endl;
    std::cout << "sizeof double: " << sizeof(numero2) << std::endl;
    std::cout << "sizof long double: " << sizeof(numero3) << std::endl;
    
    std::cout << "---------------------------------------------------" << std::endl;

    std::cout << std::setprecision(20);
    std::cout << numero1 << std::endl;
    std::cout << numero2 << std::endl;
    std::cout << numero3 << std::endl;

    std::cout << "---------------------------------------------------" << std::endl;

    // Essa declaração abaixo irá resultar em um erro
    // float numero4 {192400023};
    float numero4 (192400023);
    
    numero4 += 1;

    std::cout << "Numero4 é: " << numero4 << std::endl;

    std::cout << "---------------------------------------------------" << std::endl;


    double numero5 {1.924e8}; // Também é possível inicializa com uma notação científica (1.924e8 é o mesmo que 1,924 x 10^8)
    double numero6 {3.49e-11}; // 3,49 x 10^-11

    double numero7 {5.6};
    double numero8 {};
    double numero9 {};
    
    // O resultado será infinito (inf);
    double resultado {numero7 / numero8};

    std::cout << numero7 << " / " << numero8 << " = " << resultado << std::endl;
    std::cout << resultado << " + " << numero7 << " = " << resultado + numero7 << std::endl;

    // O resultado será NaN (Not a Number)
    resultado = numero8 / numero9;

    std::cout << numero8 << " / " << numero9 << " = " << resultado << std::endl;

    return 0;
}
