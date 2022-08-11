#include<stdio.h>


int main(){

    int n = 8, linear=0;
    int v[8] = {11,14,16,20,17,31,52,90};

    printf("\n");
    for (int i = 0; i < n; i++){
        printf("%d ", v[i]);
    }
    printf("\n");
    int j = 1;
    for(int i = 0; i < n-1; i++){
        //printf("\ncomparando v[%d] < v[%d] == %d", i, j, v[i] > v[j]);
        if(v[i]>=v[j]){
            printf("falso");
            linear = 1;
            break;
        }
        j++;
    }
    if(linear == 0){
        printf("verdadeiro");
    }

    return 0;
}

/*
#include<stdio.h>


int main(){

    int n = 0, linear=0;
    int v[100] = {0};

    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        scanf("%d", &v[i]);
    }
    int j = 1;
    for(int i = 0; i < n-1; i++){
        //printf("\ncomparando v[%d] < v[%d] == %d", i, j, v[i] > v[j]);
        if(v[i]>=v[j]){
            printf("falso");
            linear = 1;
            break;
        }
        j++;
    }
    if(linear == 0){
        printf("verdadeiro");
    }

    return 0;
}

*/
