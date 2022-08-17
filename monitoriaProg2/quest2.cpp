#include <string.h>
#include <stdio.h>
#define MAX 50
struct Pessoas{
	char nome[50];
	float altura;
	float peso;
	char sexo;

}

void menu()
{	
	//NAO ALTERAR
	printf("\n[1] - Cadastrar uma pessoa");
	printf("\n[2] - Consulta dados por CPF");
	printf("\n[3] - Consulta pessoas por sexo");
	printf("\n[4] - Listagem geral");
	printf("\n[5] - Sair");
	printf("\nDigite opcao: ");
}
void imprime(Pessoas v[], int n){

	//TODO TERMINE DE IMPLEMENTAR
    for (int i =0; i < n; i ++){
        printf("*******\n");
        printf("Nome: %s | Sexo: %c\n", );
        printf("Altura: %.2f| Peso: %.2f\n", );
        printf("******\n");

    }

}
void cadastro(Pessoas v[], int &n){
	scanf(" %[^\n]", v[n].nome);
	scanf("%f", &v[n].altura);
	scanf("%f", &v[n].peso);
	scanf(" %c", &v[n].sexo);
	n++;
}
void pesquisaCPF(Pessoas v, int n){

	for (int i =0; i < n; i++){
		if()
	}
}
int main(){
	
	Pessoas v[MAX];
	do{
		int op, n=0;
		menu();
		scanf("%d", &op);
		if(op == 1){
			cadastro(v, n);
		}else if(op == 2){
		
		}else if(op == 3){
		
		}else if(op == 4){
		
		}else if(op == 5){
			imprime(v, n);
		}
	
	}while(op!=5);
	return 0;
}
