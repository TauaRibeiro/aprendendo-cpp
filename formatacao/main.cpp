#include <iostream>
#include <ios>
#include <iomanip>

int main(){
    /*
        std::setw(<numero>)
        - Seta um comprimento que uma string a ser impressa no terminal terá
     */
    std::cout << "Tabela Formatada" << std::endl;

    std::cout << std::setw(20) << "Último nome" << std::setw(20) << "Primeiro nome" << std::setw(10) << "Idade" << std::endl;
    std::cout << std::setw(20) << "Daniel" << std::setw(20) << "Gray" << std::setw(10) << "25" << std::endl;
    std::cout << std::setw(20) << "Stanley" << std::setw(20) << "Woods" << std::setw(10) << "33" << std::endl;
    std::cout << std::setw(20) << "Jordan" << std::setw(20) << "Parker" << std::setw(10) << "45" << std::endl;

    std::cout << "------------------------------------------------------------------------------" << std::endl;
    /*
        std::right
        - Seta a justificação de um texto
        - podendo ser right ou left
    */

    std::cout << std::left;
    std::cout << std::setw(20) << "Último nome" << std::setw(20) << "Primeiro nome" << std::setw(10) << "Idade" << std::endl;
    std::cout << std::setw(20) << "Daniel" << std::setw(20) << "Gray" << std::setw(10) << "25" << std::endl;
    std::cout << std::setw(20) << "Stanley" << std::setw(20) << "Woods" << std::setw(10) << "33" << std::endl;
    std::cout << std::setw(20) << "Jordan" << std::setw(20) << "Parker" << std::setw(10) << "45" << std::endl;

    std::cout << "------------------------------------------------------------------------------" << std::endl;

    /*
        std::internal
        - Faz com que apenas os dados seja afetados pela justificação
     */

    std::cout << std::right;
    std::cout << std::setw(10) << -123.45 << std::endl;
    std::cout << std::internal;
    std::cout << std::setw(10) << -123.45 << std::endl;

    std::cout << "------------------------------------------------------------------------------" << std::endl;
    
    /*
        std::setfill(<carcter>)
        - Define o caracter de prenchemeneto dos espaços
     */

    std::cout << std::left;
    std::cout << std::setfill('-');
    std::cout << std::setw(20) << "Último nome" << std::setw(20) << "Primeiro nome" << std::setw(10) << "Idade" << std::endl;
    std::cout << std::setw(20) << "Daniel" << std::setw(20) << "Gray" << std::setw(10) << "25" << std::endl;
    std::cout << std::setw(20) << "Stanley" << std::setw(20) << "Woods" << std::setw(10) << "33" << std::endl;
    std::cout << std::setw(20) << "Jordan" << std::setw(20) << "Parker" << std::setw(10) << "45" << std::endl;

    std::cout << "------------------------------------------------------------------------------" << std::endl;

    /*
        std::boolalpha
        std::noboolalpha
        - Formata os valores booleanos
        0 <=> false
        1 <=> true
    */

    bool condicao {true};
    bool outra_condicao {false};

    std::cout << std::boolalpha;
    std::cout << "Condição: " << condicao << std::endl;
    std::cout << "Outra condição: " << outra_condicao << "\n" << std::endl;

    std::cout << std::noboolalpha;
    std::cout << "Condição: " << condicao << std::endl;
    std::cout << "Outra condição: " << outra_condicao << std::endl;
    
    std::cout << "------------------------------------------------------------------------------" << std::endl;

    /*
        std::showpos
        std::noshowpos

        - Mostra ou esconde o + de valores positivos
    */

    int neg_num {-34};
    int pos_num {50};

    std::cout << std::showpos;
    std::cout << "neg_num: " << neg_num << std::endl;
    std::cout << "pos_num: " << pos_num  << '\n' << std::endl;

    std::cout << std::noshowpos;
    std::cout << "neg_num: " << neg_num << std::endl;
    std::cout << "pos_num: " << pos_num << std::endl;

    std::cout << "------------------------------------------------------------------------------" << std::endl;

    /*
        std::dec
        std::hex
        std::oct

        - Formatam para respectivamente as bases decimal, hexadecimal e octal (não funciona com doubles ou floats) 
    */

    std::cout << "pos_int (dec): " << std::dec << pos_num << std::endl;
    std::cout << "pos_int (hex): " << std::hex << pos_num << std::endl;
    std::cout << "pos_int (oct): " << std::oct << pos_num << '\n' << std::endl;

    std::cout << "neg_int (dec): " << std::dec << neg_num << std::endl;
    std::cout << "neg_int (hex): " << std::hex << neg_num << std::endl;
    std::cout << "neg_int (oct): " << std::oct << neg_num << '\n' << std::endl;

    std::cout << "double (dec): " << std::dec << 234.67 << std::endl;
    std::cout << "double (hex): " << std::hex << 234.67 << std::endl;
    std::cout << "double (oct): " << std::oct << 234.67 << std::endl;

    std::cout << "------------------------------------------------------------------------------" << std::endl;

    /*
        std::showbase
        std::noshowbase

        - Mostra ou esconde a base de um determinado número
    */

    std::cout << std::showbase;
    std::cout << "pos_int (dec): " << std::dec << pos_num << std::endl;
    std::cout << "pos_int (hex): " << std::hex << pos_num << std::endl;
    std::cout << "pos_int (oct): " << std::oct << pos_num << '\n' << std::endl;

    std::cout << std::noshowbase;
    std::cout << "pos_int (dec): " << std::dec << pos_num << std::endl;
    std::cout << "pos_int (hex): " << std::hex << pos_num << std::endl;
    std::cout << "pos_int (oct): " << std::oct << pos_num << std::endl;

    std::cout << "------------------------------------------------------------------------------" << std::endl;

    /*
        std::uppercase
        std::nouppercase

        - Formata ou não para uppercase
    */

    std::cout << std::uppercase;
    std::cout << "neg_int (dec): " << std::dec << neg_num << std::endl;
    std::cout << "neg_int (hex): " << std::hex << neg_num << std::endl;
    std::cout << "neg_int (oct): " << std::oct << neg_num << '\n' << std::endl;

    std::cout << std::nouppercase;
    std::cout << "neg_int (dec): " << std::dec << neg_num << std::endl;
    std::cout << "neg_int (hex): " << std::hex << neg_num << std::endl;
    std::cout << "neg_int (oct): " << std::oct << neg_num << '\n' << std::endl;

    std::cout << "------------------------------------------------------------------------------" << std::endl;
    /*
        std::scientific
        std::fixed

        - Formata um número para um valor fixo ou para um valor em notação científica
        - Por padrão C++ representa em valor fixo mas altera para notação científica quando necessário (std::defaultfloat)
    */

    double a {3.141592653141592653141592653141592653};
    double b {2006.0};
    double c {1.34e-10};


    std::cout << std::fixed;
    std::cout << "a: " << a << std::endl;
    std::cout << "b: " << b << std::endl;
    std::cout << "b: " << c <<  '\n' << std::endl;

    std::cout << std::scientific;
    std::cout << "a: " << a << std::endl;
    std::cout << "b: " << b << std::endl;
    std::cout << "b: " << c <<  '\n' << std::endl;
    
    std::cout << std::defaultfloat;
    std::cout << "a: " << a << std::endl;
    std::cout << "b: " << b << std::endl;
    std::cout << "b: " << c << std::endl;

    std::cout << "------------------------------------------------------------------------------" << std::endl;
    /*
        std::setprecision(<numero_digitos>)

        - Formata quantos núemros serão exibidos no terminal para números reais. Padrão é 6
    */
    
    std::cout << "a (precisão: 6): " << a << std::endl;

    std::cout << std::setprecision(10);
    std::cout << "a (precisão: 10): " << a << std::endl;

    std::cout << std::setprecision(20);
    std::cout << "a (precisão: 20): " << a << std::endl;

    std::cout << std::setprecision(50);
    std::cout << "a (precisão: 50): " << a << std::endl;

    std::cout << std::setprecision(6);

    std::cout << "------------------------------------------------------------------------------" << std::endl;
    /*
        std::showpoint
        std::noshowpoint

        - Mostra os zeros restantes caso seja necessário
    */

    double d {34.1};
    double e {101.99};
    double f {12.0};
    int g {45};

    std::cout << std::showpoint;
    std::cout << "d: " << d << std::endl;
    std::cout << "e: " << e << std::endl;
    std::cout << "f: " << f << std::endl;
    std::cout << "g: " << g << '\n' << std::endl;

    std::cout << std::noshowpoint;
    std::cout << "d: " << d << std::endl;
    std::cout << "e: " << e << std::endl;
    std::cout << "f: " << f << std::endl;
    std::cout << "g: " << g << std::endl;
    std::cout << "------------------------------------------------------------------------------" << std::endl;
    return 0;
}