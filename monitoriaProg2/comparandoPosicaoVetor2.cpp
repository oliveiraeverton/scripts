#include<stdio.h>


int main(){

    int n = 8, linear=0;
    int v[8] = {11,14,16,20,17,31,52,90};

    printf("\n");
    for (int i = 0; i < n; i++){
        printf("%d ", v[i]);
    }
    printf("\n");
    
    for(int i = 1; i < n; i++){
    
        //printf("\ncomparando v[%d] < v[%d] == %d", i-1, i, v[i-1] < v[i]);
        
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
