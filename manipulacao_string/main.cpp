#include <iostream>
#include <cctype>
#include <cstring>
#include <string>

int main(){
    std::cout << "C é alfanumérico: " << std::isalnum('C') << std::endl;
    std::cout << "1 é alfanumérico: " << std::isalnum('1') << std::endl;
    std::cout << "^ é alfanumérico: " << std::isalnum('^') << std::endl;
    
    char caracter {'*'};

    if(std::isalnum(caracter)){
        std::cout << "É alfanumérico" << std::endl;
    }else{
        std::cout << "Não é alfanumérico" << std::endl; 
    }

    char menssagem[] {"Olá. Como é que vai. O sol está raiando."};
    std::cout << "menssagem: " << menssagem << std::endl;

    int cont_vazio {};

    for(size_t i {}; i < std::size(menssagem); i++){
        if(std::isblank(menssagem[i])){
            std::cout << "Foi encontrado um caracter vazio no indice " << i << "." << std::endl;
            cont_vazio++;
        }
    }

    std::cout << "Ao todo existe " << cont_vazio << " espaços vazios." << std::endl;

    // Para ver os outros tipos de verificaçõea basta acessar o seguinte site https://en.cppreference.com/w/cpp/header/cctype

    std::cout << "=======================================================" << std::endl;
    // Operações com c strings 
    const char mensagem1[] {"O céu é azul."};

    const char* mensagem2 {"O céu é azul"};// Array decaí para um ponteiro constante

    std::cout << "Mensagem1: " << mensagem1 << std::endl;
    std::cout << "strlen(mensagem1): " << std::strlen(mensagem1) << std::endl; // Ignora o caracter null '\0'
    std::cout << "sizeof(mensagem1): " << sizeof(mensagem1) << std::endl; //Conta o caracter null
    std::cout << "strlen(mensagme2): " << std::strlen(mensagem2) << std::endl; //strlen() funciona em arrays decaídos
    std::cout << "sizeof(mensagem2): " << sizeof(mensagem2) << std::endl;// Irá retornar o tamanho do ponteiro e não do array
    std::cout << "std::strcmp(mensagem1, \"O céu é azul.\"): " << std::strcmp(mensagem1, "O céu é azul.") << std::endl; // Compara strings
    std::cout << "std::strcmp(mensagem1, \"O céu é azu.\"): " << std::strcmp(mensagem1, "O céu é azu.") << std::endl;
    std::cout << "std::strcmp(mensagem1, \"o céu é azul.\"): " << std::strcmp(mensagem1, "o céu é azul.") << std::endl;
    std::cout << "std::strncmp(mensagem1, \"O céu é vermelho\", 5): " << std::strncmp(mensagem1, "O céu é azul.", 5) << std::endl; //Compara os 5 primeiros caracteres
    
    std::cout << "---------------------------------------------------------------------------" << std::endl;
    
    const char *string {"Não tente. Faça, ou não faça. Não há tentar"};
    char alvo = 't';
    const char *resultado {string};
    int interacoes {};

    //strchr() irá retornar um ponteiro para a primeira instância do alvo, caso não entre retorna nullptr
    while((resultado = std::strchr(resultado, alvo)) != nullptr){
        std::cout << "Encontrei " << alvo << " apartir de \' " << resultado << " \'" << std::endl;

        interacoes++;
        resultado++;// Incrementa resultado, caso contrário irá sempre retornar a mesma primeira interação 
    }

    std::cout << "Interações: " << interacoes << std::endl;
    
    char input[] {"/home/user/ola.cpp"};
    char *output {std::strrchr(input, '/')};//strrchr() retorna a última aparição de '/';

    if(output) {
        std::cout << output+1 << std::endl; //O output+1 é para imprimir toda a string depois do '/'
    }

    std::cout << "---------------------------------------------------------------------------" << std::endl;

    const char *fonte {"C++ é uma linguagem de programação de propósito multiplo"};
    char *dest {new char[std::strlen(fonte)+1]}; //Aloca espaço para um array de caracteres com o tamnho a string de fonte + 1(para o carcter null)
    char letras[] {'a', 'b', 'c', 'd', '\0'};

    std::strcpy(dest, fonte);

    std::cout << "sizeof(dest): " << sizeof(dest) << std::endl; 
    std::cout << "std::strlen(dest): " << std::strlen(dest) << std::endl;
    std::cout << "dest: " << dest << std::endl;
    
    // Copia 3 elementos de letras e coloca no array de destino
    std::strncpy(dest, letras, 3);

    std::cout << "dest: " << dest << std::endl;

    // Para mais dessas funções consultar https://en.cppreference.com/w/cpp/header/cstring
    std::cout << "=======================================================" << std::endl;
    std::string nome_completo;
    std::string planeta {"Terra. Onde o céu é azul"};
    std::string planeta_preferido {planeta};
    std::string menssagem3 {"Olá pessoal", 3}; // Inicializa o mensagem com 3 caracteres da mensagem original

    std::string menssagem_estranha(4, 'e');//Inicializa com 4 e's
    std::string saudacao{"Olá mundo"};
    std::string dizendo_ola{saudacao,4,5};//Inicializa com 5 caracters da string saudacao apartir do indice 3

    std::cout << "Nome completo: " << nome_completo << std::endl;
    std::cout << "planeta: " << planeta << std::endl;
    std::cout << "planeta_preferido: " << planeta_preferido << std::endl;
    std::cout << "menssagem3: " <<menssagem3 << std::endl;
    std::cout << "menssagem_estranha: " << menssagem_estranha << std::endl;
    std::cout << "saudasaudacao: " <<saudacao << std::endl;
    std::cout << "dizendo_ola: " << dizendo_ola << std::endl;
    return 0;
}