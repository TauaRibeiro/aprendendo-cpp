#include <iostream>

int main(){
    /* Declaração e inicialização de um ponteiro, nesse caso ele está implicitamente sendo 
    inicializado como `nullpt`*/
    int *ptrNumero {};
    int numero {43};
    int numero2 {120};

    //Passando o endereço de número para ptrNumero  
    ptrNumero = &numero;

    std::cout << "Variável numero -> " << numero << std::endl;
    std::cout << "Ponteiro ptrNumero (endereço) -> " << ptrNumero << std::endl;

    ptrNumero = &numero2;

    std::cout << "Ponterio ptrNumero (outro endereço) -> " << ptrNumero << std::endl;
    std::cout << "Ponterio ptrNumero (valor) -> " << *ptrNumero << std::endl;

    std::cout << "========================================" << std::endl;

    // É possível inicializar ponteiros de caracters com strings literais: C-strings
    const char *ptrMenssagem {"Olá mundo!"};

    std::cout << "A mensagem é: " << ptrMenssagem << std::endl;

    std::cout << "O valor armazenado no ponterio é: " << *ptrMenssagem << std::endl;

    ptrMenssagem = "Outro texto qualquer";

    std::cout << "Segunda menssagem: " << ptrMenssagem << std::endl;
    return 0;
}