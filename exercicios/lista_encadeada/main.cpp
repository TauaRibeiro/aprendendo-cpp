#include <iostream>
#include <ios>
#include <iomanip>
#include <limits>

struct No{
    int numero;
    No *proximo;
    No *anterior;
};

struct Lista {
    No *inicio;
    No *fim;
};

Lista *criarLista(){
    try{
        Lista *nova_lista {new Lista};
        nova_lista->inicio = nullptr;
        nova_lista->fim = nullptr;

        return nova_lista;
    }catch(std::exception& erro){
        std::cout << "Erro ao criar a lista" << std::endl;

        exit(1);
    }
}

void exibirNumeros(Lista *lista){
    if(!lista->inicio){
        std::cout << "Não há números a serem mostrados..." << std::endl;
        return;
    }

    No *atual {lista->inicio};

    while(atual){
        std::cout << atual->numero;
        atual = atual->proximo;

        if(atual){
            std::cout << ", ";
        }
    }

    std::cout << ";" << std::endl;
}

void inserirNumero(Lista *lista, int numero){
    No *novo_no {new(std::nothrow) No};

    if(!novo_no){
        std::cout << "Erro ao alocar memória para o novo elemento da lista" << std::endl;
        return;
    }

    novo_no->anterior = lista->fim;
    novo_no->proximo = nullptr;
    novo_no->numero = numero;

    
    if(!lista->inicio){
        lista->inicio = novo_no;
        lista->fim = novo_no;
        return;
    }

    lista->fim->proximo = novo_no;
    lista->fim = novo_no;
}

void removerNumero(Lista *lista, int numero){
    No *atual {lista->inicio};
    bool achou {false};

    while(atual){
        if(atual->numero == numero){
            if(atual == lista->inicio){
                lista->inicio = atual->proximo;
            }

            if(atual == lista->fim){
                lista->fim = atual->anterior;
            }

            if(atual->anterior){
                atual->anterior->proximo = atual->proximo;
            }

            if(atual->proximo){
                atual->proximo->anterior = atual->anterior;
            }

            std::cout << "Número encontrado!!" << std::endl;

            delete atual;
            atual = nullptr;

            return;
        }

        atual = atual->proximo;
    }

    std::cout << "Número não encontrado..." << std::endl;

}

void esvaziarLista(Lista *lista){
    if(!lista->inicio){
        return;
    }

    No *atual {lista->inicio};

    while(atual){
        No *proximo {atual->proximo};
        delete atual;
        atual = proximo;
    }

}

int main(){
    Lista *lista {criarLista()};
    int decisao, numero;

    do{
        std::cout << std::left;

        std::cout << std::setfill('=');
        std::cout << std::setw(20) << "" << "< MENU >" << std::setw(20) << "" << std::endl;

        std::cout << std::setfill(' ');
        std::cout << std::setw(5) << "1." << "Inserir número" << std::endl;
        std::cout << std::setw(5) << "2." << "Exibir números" << std::endl;
        std::cout << std::setw(5) << "3." << "Remover número" << std::endl;
        std::cout << std::setw(5) << "4." << "Sair" << std::endl;

        std::cout << "------------------------------------------------------------" << std::endl;
        std::cout << "Digite o númeor da opção desejada: ";

        if (!(std::cin >> decisao)) {
            std::cin.clear(); // Reseta as flags de erro
            //remove os elementos do buffer de entrada até atingir valor máximo do buffer de stream (responsável pelo input e output), parando quando encontrar '\n'
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

            std::cout << "Entrada inválida!\n";
            continue;
        }

        switch(decisao){
            case 1:
                do{
                    try{
                        std::cout << "Digite o número a ser inserido: ";
                        std::cin >> numero;
                    }catch(std::exception& erro){
                        std::cout << "Por favor digite um número válido!\n" << std::endl;
                        continue;
                    }

                    inserirNumero(lista, numero);
                }while(false);
            break;
            case 2:
                exibirNumeros(lista);
            break;
            case 3:
                if(!lista->inicio){
                    std::cout << "Não há números a serem deletados..." << std::endl;
                    break;
                }

                do{
                    try{
                        std::cout << "Digite o número a ser removido: ";
                        std::cin >> numero;
                    }catch(std::exception& erro){
                        std::cout << "Por favor digite um número válido!\n" << std::endl;
                        continue;
                    }

                    removerNumero(lista, numero);
                }while(false);
            break;
            case 4:
            break;
            default:
                std::cout << "Opção inválida! Por favor tente novamente..." << std::endl;
            break;
        }
    
    }while(decisao != 4);
    
    esvaziarLista(lista);
    delete lista;
    lista = nullptr;
}