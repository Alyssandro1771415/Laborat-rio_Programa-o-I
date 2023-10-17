#include <stdio.h>
 
int main() {
 
    float A[100];
    
    for(int i=0; i<=99; i++){
        scanf("%f", &A[i]);
    }

    for(int y=0; y<=99; y++){
        if(A[y] <= 10){
            printf("A[%i] = %.1f\n", y, A[y]);   
        }
    }

    return 0;
}