#include <iostream>
#include <typeinfo>

int main() {
    // Esse tipo de dado diz para o compilador deduzir o tipo de dados que ele vai receber

    auto var1 {12};
    auto var2 {13.0};
    auto var3 {14.0f};
    auto var4 {15.01l};
    auto var5 {'e'};

    // Sufixos de modificadores de int
    auto var6 {123u}; //unsigned
    auto var7 {123ul}; //unsigned long
    auto var8 {123ll}; //long long
    auto var9 {33u};

    auto teste {true};

    var9 = -22; // O compilador não irá levantar um erro, porém o valor que var9 terá não será -22, será um outro número;

    std::cout << "var1 ocupa: " << sizeof(var1) << " bytes" << std::endl;
    std::cout << "var2 ocupa: " << sizeof(var2) << " bytes" << std::endl;
    std::cout << "var3 ocupa: " << sizeof(var3) << " bytes" << std::endl;
    std::cout << "var4 ocupa: " << sizeof(var4) << " bytes" << std::endl;
    std::cout << "var5 ocupa: " << sizeof(var5) << " bytes" << std::endl;
    std::cout << "var6 ocupa: " << sizeof(var6) << " bytes" << std::endl;
    std::cout << "var7 ocupa: " << sizeof(var7) << " bytes" << std::endl;
    std::cout << "var8 ocupa: " << sizeof(var8) << " bytes" << std::endl;
    std::cout << "Var 9 contem: " << var9 << std::endl;

    std::cout << std::boolalpha; // std::boolalpha faz com que seja imprimido o valor de texto do bool
    std::cout << teste << std::endl;

    return 0;
}