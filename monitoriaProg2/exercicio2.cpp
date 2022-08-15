#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct Pessoas{

    char nome[30];
    char cpf[12];
    float altura;
    float peso;
    char sexo;


};

int menu();
int opcaoEscolhida(int op, Pessoas v[]);
void imprime(Pessoas v[]);
void consultaCPF(Pessoas v[]);
int main(){
    Pessoas pessoa[50] = {0};
    int h=1;
    while(h!=4){
        h = menu();
        h = opcaoEscolhida(h, pessoa);
        
    }
    
    
    return 0;
}
void imprime(Pessoas v[]){
    system("clear");
    int quantasPessoasJaCadastradas = 0;
    for (int i = 0; i < 50 && v[i].altura !=0; i++){
        quantasPessoasJaCadastradas = i;
    }
    quantasPessoasJaCadastradas++;
    for (int i =0; i < quantasPessoasJaCadastradas; i ++){
        printf("\n*******\n");
        printf("Nome: %s | Sexo: %c\n", v[i].nome, v[i].sexo);
        printf("Altura: %.2f| Peso: %.2f\n", v[i].altura, v[i].peso);
        printf("******\n\n");

    }

}
int opcaoEscolhida(int op, Pessoas v[]){
    int quantasPessoasJaCadastradas = 0;
    for (int i = 0; i < 50 && v[i].altura !=0; i++){
        quantasPessoasJaCadastradas = i;
    }
    if(quantasPessoasJaCadastradas != 0){
        quantasPessoasJaCadastradas++;
    }
    
    printf("\nPESSOAS CADASTRADAS ATÉ O MOMENTO: %d\n\n", quantasPessoasJaCadastradas);
    if(op == 1){
        int n;
        printf("Digite quantas pessoas deseja cadastrar: ");
        scanf("%d", &n);
        for(int i = quantasPessoasJaCadastradas; i < quantasPessoasJaCadastradas + n; i++){
            printf("\nDigite o nome da Pessoa: ");
            scanf(" %[^\n]s", &v[i].nome);
            printf("\nDigite o CPF do(a) %s: ", v[i].nome);
            scanf(" %[^\n]s", &v[i].cpf);
            printf("Digite a altura do(a) %s:", v[i].nome);
            scanf("%f", &v[i].altura);
            printf("Digite o peso do(a) %s:", v[i].nome);
            scanf("%f", &v[i].peso);
            printf("Digite o sexo do(a) %s:", v[i].nome);
            scanf(" %c", &v[i].sexo);
            printf("\n\n");
        }


    }else if(op == 4){
        imprime(v);
        return 4;
    }else if(op == 2){
        consultaCPF(v);
    }else if(op == 3){
        int quantasPessoasJaCadastradas = 0;
        for (int i = 0; i < 50 && v[i].altura !=0; i++){
            quantasPessoasJaCadastradas = i;
        }
        if(quantasPessoasJaCadastradas != 0){
            quantasPessoasJaCadastradas++;
        }
        printf("\nPESSOAS CADASTRADAS ATÉ O MOMENTO: %d\n\n", quantasPessoasJaCadastradas);
        for(int i = 0; i < quantasPessoasJaCadastradas; i++){
            if(v[i].sexo == 'M'){
                printf("Nome: %s | Sexo: %c\n", v[i].nome, v[i].sexo);
                printf("Altura: %.2f| Peso: %.2f\n", v[i].altura, v[i].peso);
                printf("IMC == %.2f\n", v[i].peso/(v[i].altura*v[i].altura));
            }
        }
    }
    return 0;
}
int menu(){
    int n;
    system("clear");
    printf("\n\n|.+***+.  MENU  .+***+.|\n");
    printf("|Digite 1 para cadastrar uma pessoa|\n");
    printf("|Digite 2 para consultar pelo CPF|\n");
    printf("|Digite 3 para listar todas as pessoas do sexo M|\n");
    printf("|Digite 4 para imprimir todas as pessoas e finalizar|\n");
    printf("Faça sua escolha: ");
    scanf("%d", &n);

    if(n > 4 || n < 1){
        return menu();
    }

    return n;

}
void consultaCPF(Pessoas v[]){
    int quantasPessoasJaCadastradas = 0;
    for (int i = 0; i < 50 && v[i].altura !=0; i++){
        quantasPessoasJaCadastradas = i;
    }
    if(quantasPessoasJaCadastradas != 0){
        quantasPessoasJaCadastradas++;
    }
    char procura[12];
    while(strcmp(procura, "0")!= 0){
        printf("Digite o CPF que deseja procurar: ");
        scanf(" %[^\n]s", &procura);
        for(int i = 0; i < quantasPessoasJaCadastradas; i++){
            if(strcmp(procura, v[i].cpf)==0){
                printf("Nome: %s | Sexo: %c\n", v[i].nome, v[i].sexo);
                printf("Altura: %.2f| Peso: %.2f\n", v[i].altura, v[i].peso);
                printf("IMC == %.2f\n", v[i].peso/(v[i].altura*v[i].altura));
            }
        }
    }
    
}
