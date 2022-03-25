#include <iostream>

using namespace std;

/*
struct LISTA{
    int num;
    LISTA* prox;
    LISTA* ant;
};

void menu();
int opcaoUsuario();
int main(){

    LISTA* inicio = NULL;
    LISTA* fim = NULL;
    LISTA* aux;

    int op, numero, achou;
    
    do{
        op = opcaoUsuario();

        if(op == 1){
            LISTA* novo = new LISTA();
            cout << "\nDigite um número para ser inserido no início da lista: ";
            cin >> novo->num;
            if(inicio == NULL){
                
                novo->prox = NULL;
                novo->ant = NULL;
                inicio = novo;
                fim = novo;
            }else{
                novo->ant = NULL;
                novo->prox = inicio;
                inicio->ant = novo;
                inicio = novo;
            }
            cout << "\nNúmero inserido no início da lista";

        }else if(op == 2){
            LISTA* novo = new LISTA();
            cout << "\nDigite um número para ser inserido no fim da lista: ";
            cin >> novo->num;
            if(inicio == NULL){
                
                novo->prox = NULL;
                novo->ant = NULL;
                inicio = novo;
                fim = novo;
            }else{
             novo->ant = fim;
             fim->prox = novo;
             novo->prox = NULL;
             fim = novo;

            }
            cout << "\nNúmero inserido no fim da lista";

        }else if(op == 3){
            if(inicio == NULL){

                cout << "\nLista vazia\n";
            }else{
                aux = inicio;
                while(aux != NULL){
                    cout << aux->num << " ";
                    aux = aux->prox;
                }
            }
        }else if(op == 4){
            if(inicio == NULL){
                cout << "\nLista vazia\n";
            }else{
                aux = fim;
                while(aux != NULL){
                    cout << aux->num << " ";
                    aux = aux->ant;
                }
            }
        }else if(op == 5){
            if(inicio == NULL){
                cout <<"\nA lista está vazia\n";
            }else{
                cout << "\nDigite um número para ser removido da lista: ";
                cin >> numero;

                aux = inicio;
                achou = 0;

                while(aux != NULL){

                    if(aux->num == numero){
                        
                        achou++;
                        
                        if(aux == inicio){
                            inicio = aux->prox;
                            if(inicio != NULL){
                            inicio->ant = NULL;
                            delete(aux);
                            aux = inicio;
                        }else if(aux == fim){
                            fim = fim->ant;
                            fim->prox = NULL;
                            delete(aux);
                            aux = NULL;
                        }else{
                            aux->ant->prox = aux->prox;
                            aux->prox->ant = aux->ant;
                            LISTA* aux2;
                            aux2 = aux->prox;
                            delete(aux);
                            aux = aux2;
                        }
                        
                    }else{
                        aux = aux->prox;
                    }
                    if(achou == 0){
                        cout << "\nNenhum número encontrado\n";
                    }else{
                        cout << "\nNúmero removido " << achou << " veze(s).\n";   
                    }
                }
            }}

        }else if(op == 6){
            if(inicio == NULL){
                cout << "\nLista Vazia.";
            }else{
                aux = inicio;
                while(aux != NULL){
                    inicio = inicio->prox;
                    delete(aux);
                    aux = inicio;
                }
                cout << "\n****Lista Esvaziada****\n";
            }
        }

    

    }while(op != 7);
    


    

    return 0;
}

void menu(){

    
    cout << "\nMENU DE OPÇÕES\n";
    cout << "\n1 - Inserir no início da Lista\n";
    cout << "2 - Inserir no fim da lista\n";
    cout << "3 - Consultar a lista do início ao fim\n";
    cout << "4 - Consultar a lista do fim ao inicio\n";
    cout << "5 - Remover da lista\n";
    cout << "6 - Esvaziar a lista\n";
    cout << "7 - Sair\n";

    cout << "\nDigite sua opção: ";

}

int opcaoUsuario(){
    menu();
    int num;
    cin >> num;
    if(num < 1 || num > 7){
        return opcaoUsuario();
    }
    return num;
}

*/ 


// CODIGO ERRADO NAO EXECUTAR!!!
