#include <iostream>

int main() {
    int *ptrNumero {}; //declara e inicializa o ponteiro com nullptr

    //Verifica se o ponteiro contém nullptr
    //Caso contenha um nullptr o resultado do if será false, caso contenha um endereço de memória será true
    //Não é necessário fazer essa operação de verificar o ponteiro se for apenas usar o delete
    if(ptrNumero){
        std::cout << "Ponteiro válido!" << std::endl;
    }else{
        std::cout << "Ponteiro inválido!" << std::endl;
    }

    //Aloca dinâmicamente um espaço de memória para um inteiro no heap
    ptrNumero = new int;

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
    
    std::cout << "=================================================" << std::endl;

    int *ponteiroVazado {new int{67}};
    int numero{55};
    int *temp {ponteiroVazado};

    //Ao fazer isso o ponteiro passa a pontar para outro endereço de memória
    //Se não fosse pelo temp, não daria para devolver a memória para o sistema
    //Quando isso ocorre é chamado de memory leak (vazamento de memória), pois é perdido o acesso de uma memória dinâmicamente alocada
    ponteiroVazado = &numero;

    delete temp;
    temp = nullptr;
    std::cout << "=================================================" << std::endl;

    const size_t tamanho {10};

    double *arrayNumeros {new(std::nothrow) double[tamanho] {1,2,3,4,5,6}}; // Alocando um array de doubles de tamnho 10 com alguns valores já inicializado

    if(arrayNumeros){
        for(size_t i {}; i < tamanho; i++){
            std::cout << "Endereço de " << arrayNumeros[i] <<  ": "<< arrayNumeros+i << std::endl;
        }
    }

    //Devolvendo o array alocado dinâmicamente para o sistema
    delete[] arrayNumeros;
    arrayNumeros = nullptr;

    /*
        AVISO!
        Ponteiros de arrays dinâmicamente alocados são diferentes dos arrays comuns
        std::size não funciona neles e eles não possuem as propriedades necessárias para fazer o for loop

        ex:
        for(double valor : arrayNumeros){
            ...
        }
    */

    std::cout << "=================================================" << std::endl;
    //É possível, apesar de que seja raro, que new falhe e não aloque dinâmicamente.
    //Sendo assim é sempre bom verificar se a memória foi alocada corretamente antes de usar

    //Tentando alocar um array com um número enorme para forçar o new a falhar em alocar memória
    //Usando try para poder capturar o erro causado 
    try{
        int *muitosNumeros { new int[1000000000000000000] };

        delete muitosNumeros;
        muitosNumeros = nullptr;
    }catch(std::exception& erro){
        std::cout << "Ocorreu um erro: " << erro.what() << std::endl;
    }

    


    int *muitosNumeros2 { new(std::nothrow) int[1000000000000000] };
    for(size_t i{}; i < 100 ; i++){
        //Usando std::nothrow para evitar que seja levantado uma execessão em caso de falha
        //Caso new falhe em a memória o ponteiro será definido como nullptr

        if(muitosNumeros2 == nullptr) {
            std::cout << "A memória falhou em ser alocada" << std::endl;
        }else{
            std::cout << "Memória alocada com sucesso!" << std::endl;
        }
    }

    
    std::cout << "Programa finalizado com sucesso!" << std::endl;

    return 0;    
}
