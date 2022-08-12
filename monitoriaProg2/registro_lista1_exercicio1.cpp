#include<stdio.h>

struct Alunos{
    char nomeAluno[30];
    int matricula;
    double nota1;
    double nota2;
};

int main(){

    Alunos vetorAlunos[50];
    int n;
    printf("Digite quantos alunos você quer cadastrar: ");
    scanf("%d", &n);

    for (int i = 0 ; i < n; i++){
        printf("Digite o nome do aluno: ");
        scanf(" %[^\n]s", vetorAlunos[i].nomeAluno);
        printf("Digite a matrícula do aluno: ");
        scanf("%d", &vetorAlunos[i].matricula);
        printf("Digite a nota 1 do aluno: ");
        scanf("%lf", &vetorAlunos[i].nota1);
        printf("Digite a nota 2 do aluno: ");
        scanf("%lf", &vetorAlunos[i].nota2);
    }
    


    printf("\n\n");
    printf("|**************************************************|\n");
    for(int i = 0; i < n ; i++){
        printf("|Nome: %44s|\n", vetorAlunos[i].nomeAluno);
        printf("|Matricula: %39.d|\n", vetorAlunos[i].matricula);
        printf("|Nota1: %43.2f|\n", vetorAlunos[i].nota1);
        printf("|Nota2: %43.2f|\n", vetorAlunos[i].nota2);
    }
    printf("|**************************************************|\n");








    return 0;
}
