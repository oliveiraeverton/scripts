#include<stdio.h>


int main(){

    int n = 0;
    int v[100] = {0};

    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        scanf("%d", &v[i]);
    }
    
    for(int i = 1; i < n; i++){
    
        
        if(v[i-1]>=v[i]){
            printf("falso");
            linear = 1;
            break;
        }

        
    }
    if(linear == 0){
        printf("verdadeiro");
    }

    return 0;
}
