#include <iostream>

int main() {
    double temperatura, resultado;

    std::cout << "Digite a temperatura em C° que deseja converter: ";
    std::cin >> temperatura;

    resultado = temperatura*9/5+32;

    std::cout << "A temperatura " << temperatura << " C° em farenheit será " << resultado << " °F." << std::endl;

    return 0;
}