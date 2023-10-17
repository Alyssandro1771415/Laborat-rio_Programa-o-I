#include <stdio.h>
 
int main() {
 
    int X[10];
    
    for(int i=0; i<=9; i++){
        scanf("%d", &X[i]);
        if(X[i] <= 0){
            X[i] = 1;
        }
    }

    for(int y=0; y<=9; y++){
        printf("X[%i] = %d\n", y, X[y]);
    }

    return 0;
}