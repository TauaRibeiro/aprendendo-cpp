#include <iostream>

int main() {
    int pontos[10] {5, 6, 10, 8, 0, 2, 5, 6, 7, 1}; // Declaração e inicialização de um array
    /*É possível declarar um array sem precisar explicitar quantos elementos um array terá, porém é necessário
	 inicializa-lo com valores*/
    //const em um array siginifica que não é possível alterar os elementos de um array 
    const double salarios[] {2500.0, 2400.50, 3}; 

    // salarios[0] = 10;
    for(size_t i = 0; i < 10; i++){
        std::cout << "pontos [ " << i << " ] = " << pontos[i] << std::endl;
    }
    
   
    pontos[0] = 30;

    std::cout << "pontos[0]: " << pontos[0] << std::endl;
   
    std::cout << "===============================================================" << std::endl;
    
    //For each loop    
    for(auto valor : salarios){
	    std::cout << "valor: " << valor << std::endl;
    } 
    
    std::cout << "===============================================================" << std::endl;

    // std::size(<array>) -> Permite pegar o número de elementos de um array
    for(size_t i {}; i < std::size(salarios); i++){
        std::cout << "pontos [ " << i << " ] = " << pontos[i] << std::endl;
    }
    
    std::cout << "===============================================================" << std::endl;

    // O caracter '\0' é um caracter especial que delimita o fim de uma strig
    // É muito importante colocar esse caracter no final para evitar que seja impresso um valor aleatório junto de sua string
    char menssagem [4] {'O', 'l', 'a', '\0'};
    // É possível fazer com que o compilador coloque o carater '\0' automaticamente, basta fazer da seguinte forma
    // char menssagem [4] {'O', 'l', 'a'};

    // é possível imprimir no terminal todo o conteúdo de um array de caracteres apenas colocando o nome do array
    std::cout << "Mensagem: " << menssagem << std::endl;
    // Se tentar fazer a mesma coisa com qualquer outro tipo, será impreso o endereço de memória do array em si
    std::cout << "Pontos: " << pontos << std::endl;

    std::cout << "===============================================================" << std::endl;
    
    char menssagem2 [] {'O', 'l', 'a'}; // Está não é um string C, visto que não há o caracter '\0'

    std::cout << "Menssagem 2: " << menssagem2 << std::endl; // Será impresso valores indesejáveis depois do Ola
    std::cout << "Tamanho: " << std::size(menssagem2) << std::endl;

    std::cout << "===============================================================" << std::endl;
    
    // Essa é outra forma válida de representar um string C, visto que dessa forma é implicitamente colocado no final o caracter \0
    char menssagem3 [] {"Olá Mundo"};

    std::cout << "Mensagem 3: " << menssagem3 << std::endl;
    std::cout << "Tamanho: " << std::size(menssagem3) << std::endl;

    return 0;
}
