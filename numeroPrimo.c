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
