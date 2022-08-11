#include<stdio.h>


int main(){

    int n = 0;
    int v[100] = {0};

    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        scanf("%d", &v[i]);
    }
    int j = 1;
    for(int i = 0; i < n-1; i++){
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
