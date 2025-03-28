#include <iostream>

int main(){
    char letra1 {'c'};
    char letra2 {'a'};
    char letra3 {'r'};
    char letra4 {'r'};
    char letra5 {'o'};

    std::cout << letra1 << std::endl;
    std::cout << letra2 << std::endl;
    std::cout << letra3 << std::endl;
    std::cout << letra4 << std::endl;
    std::cout << letra5 << std::endl;  

    std::cout << "--------------------------------" << std::endl;

    char letra6 = 65; // Códico ASCII para a letra 'A'
    
    std::cout << "letra6: " << letra6 << std::endl;
    std::cout << "letra6(int): " << static_cast<int>(letra6) << std::endl;

    return 0;
}