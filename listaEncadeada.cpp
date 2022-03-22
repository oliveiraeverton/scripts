#include <iostream>
#include <conio.h>
using namespace std;

void menu();
int opcaoDesejada();

struct LISTA{
    int num;
    LISTA *prox;
};
int main(){

    LISTA* inicio = NULL;
    LISTA* fim = NULL;

    LISTA* aux;
    LISTA* auxAnterior;

    

    int op, numero, achou;
    do{
        
    menu();
    op = opcaoDesejada();
    if(op == 1){
        cout << "\nDigite um número para ser inserido no início da lista: ";
        LISTA* novo = new LISTA();
        cin >> novo->num;
        if(inicio == NULL){
            inicio = novo;
            fim = novo;
            fim->prox = NULL;
        }else{
            novo->prox = inicio;
            inicio = novo;
        }
        cout << "\nNúmero inserido no início da lista\n";
    }else if(op==2){
        cout << "\nDigite um número para ser inserido no início da lista: ";
        LISTA* novo = new LISTA();
        cin >> novo->num;
        if(inicio == NULL){
            inicio = novo;
            fim = novo;
            fim->prox = NULL;
        }else{
            fim->prox = novo;
            novo->prox = NULL;
            fim = novo;
        }
    }else if(op==3){
        if(inicio == NULL){
            cout << "A lista está vazia\n";
        }else{
            cout << "Consultando toda a lista\n";
            aux = inicio;
            while(aux != NULL){
                cout << aux->num << " ";
                aux = aux->prox;
            }
            cout << endl;
            system("PAUSE");
        }
    }else if(op==4){
        if(inicio == NULL){
            cout << "A lista está vazia" << endl;
        }else{
            cout << "Digite o elemento a ser removido: ";
            cin >> numero;

            aux = inicio;
            auxAnterior = NULL;
            achou = 0;

            while(aux != NULL){
                if(aux->num == numero){
                    achou++;
                    if(aux == inicio){
                        inicio = aux->prox;
                        delete(aux);
                        aux = inicio;
                    }else if(aux == fim){
                        auxAnterior->prox = NULL;
                        fim = auxAnterior;
                        delete(aux);
                        aux = NULL;
                        
                    }else{
                        auxAnterior->prox = aux->prox;
                        delete(aux);
                        aux = auxAnterior->prox;
                    }
                }else{
                    auxAnterior = aux;
                    aux = aux->prox;
                }
            }
            if(achou == 0){
                cout <<"Número não encontrado\n";
            }else if(achou == 1){
                cout <<"Número removido 1 vez\n";
            }else{
                cout <<"Número removido " << achou << " vezes\n";
            }
            getch();
        }
    }else if(op ==5){
        if(inicio == NULL){
            cout << "A lista está vazia" << endl;
        }else{
            aux = inicio;
            while(aux != NULL){
                inicio = inicio->prox;
                delete(aux);
                aux = inicio;
            }
            cout << "Lista esvaziada\n";
            
        }
        getch();
    }
    
    

    }while(op!=6);



    return 0;
}

void menu(){
    system("cls");
    cout << "\nMENU DE OPÇÕES\n";
    cout << "\n1 - Inserir no início da fila";
    cout << "\n2 - Inserir no fim da fila";
    cout << "\n3 - Consultar toda a lista";
    cout << "\n4 - Remover da lista";
    cout << "\n5 - Esvaziar a lista";
    cout << "\n6 - Sair";
    cout << "\nDigite sua opção: ";
}

int opcaoDesejada(){
    int opcaoUsuario;
    cin >> opcaoUsuario;

    if(opcaoUsuario > 6 || opcaoUsuario < 1){
        menu();
        return opcaoDesejada();
    }
    return opcaoUsuario;

}
