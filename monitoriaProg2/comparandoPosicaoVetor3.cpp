#include<stdio.h>


int main(){

    int n = 0;
    int v[100] = {0};

    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        scanf("%d", &v[i]);
    }
    
    int i;
    for(i=1; i < n && v[i-1]<v[i]; i++)
        ;

    if(i == n){
        printf("verdadeiro");
    }else{
        printf("falso");
    }

    return 0;
}
