#include <iostream>
#include <string>

int main(){
    std::cout << "Olá C++20" << std::endl;

    int idadeUser;
    std::string nomeUser;


    std::cout << "Digite o seu nome e idade: " << std::endl;
    
    // O métdo abaixo funciona para pegar uma palavra, porém não funciona para pegar palavras com espaços
    // std::cin >> nomeUser >> idadeUser;

    std::getline(std::cin, nomeUser);
    std::cin >> idadeUser;

    /*
    int idade{19};
    
    std::cout << "Idade: " << idade << std::endl;
    
    std::cerr << "Mensagem de erro: Algo deu errado" << std::endl;

    std::clog << "Mensagem de log: Algo ocorreu" << std::endl;
    */

    std::cout << "Olá " << nomeUser << " você tem " << idadeUser << " anos de idade." << std::endl;

    return 0;
}