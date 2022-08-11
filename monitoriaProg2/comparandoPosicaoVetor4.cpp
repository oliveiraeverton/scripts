#include<stdio.h>


int main(){

    int n = 8;
    int v[8] = {10,11,11,13,14,15,16,17};

    printf("\n");
    for (int i = 0; i < n; i++){
        printf("%d ", v[i]);
    }
    printf("\n");
    int i;
    for(i=1; i < n && v[i-1]<v[i]; i++){
        printf("\ncomparando v[%d] < v[%d] == %d", i-1, i, v[i-1] < v[i]);
    }    //0 < 8 && 11 >= 13 (V and F)
    if(i == n){
        printf("verdadeiro");
    }else{
        printf("falso");
    }

    return 0;
}
