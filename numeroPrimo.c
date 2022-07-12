#include <stdio.h>

int main(){

    int n,i;
    
    scanf("%d", &n);

    if(n==2){
        printf("é primo");
        return 0;
    }
    for(i = 2; i < n && n%i!=0; i++)
        ;
        
    if(i==n)
        printf("é primo");
    else
        printf("não é primo");

    return 0;
}
/*
Os números primos possuem 2 divisores, 1 e eles próprios. 
No entanto todos os números são divisiveis por 1.
Se sabemos que todos números são divisíveis por 1, podemos desconsiderar que
números primos possuem 2 divisores e somente 1, eles mesmos.
Então se em algum momento n%i == 0, o número n é um número primo, pois
estou testando dentro do for se n é divisivel do intervalo [2,n-1], ou seja,
excluímos a opção da conta n%n==0, pois também sabemos que n%n é divisor dele
mesmo.
*/
