#include <iostream>

int main() {
    int *ptrNumero {nullptr};

    //Aloca dinâmicamente um espaço de memória para um inteiro no heap
    ptrNumero = new int;
    //A memória alocada pertence ao programa e o sistema não pode fazer nada com ela até que seja retornada
    //É também recomendável verificar se a memória alocada é válida


    *ptrNumero = 77;

    std::cout << "ptrNumero: " << *ptrNumero << std::endl;
    
    delete ptrNumero;// Retorna / libera a memória dinâmicamente alocada
    ptrNumero = nullptr; // Reseta para nullptr para evitar de acessar memória que não está mais alocada

    std::cout << "=================================================" << std::endl;

    int *ptrNum1 {new int}; //Inicializa com localização de memória com um valor indesejável
    int *ptrNum2 {new int (32)}; //Inicialização direta
    int *ptrNum3 {new int {23}};// inicialização uniforme

    std::cout << "Endereço ptrNum1 -> " << ptrNum1 << std::endl;
    std::cout << "Valor ptrNum1 -> " << *ptrNum1 << '\n' << std::endl;

    std::cout << "Endereço ptrNum2 -> " << ptrNum2 << std::endl;
    std::cout << "Valor ptrNum2 -> " << *ptrNum2 << '\n' << std::endl;

    std::cout << "Endereço ptrNum3 -> " << ptrNum3 << std::endl;
    std::cout << "Valor ptrNum3 -> " << *ptrNum3 << std::endl;

    //Sempre lembre de liberar e resetar os ponjteiros dinâmicamente alocados
    delete ptrNum1;
    ptrNum1 = nullptr;

    delete ptrNum2;
    ptrNum2 = nullptr;

    delete ptrNum3;
    ptrNum3 = nullptr;

    std::cout << "=================================================" << std::endl;
    
    //É possível reutilizar um ponteiro para fazer uma nova locação
    ptrNum1 = new int(81);

    std::cout << "Ponteiro reutilizado: " << *ptrNum1 << std::endl;

    delete ptrNum1;
    ptrNum1 = nullptr;

    return 0;    
}
