#include <stdio.h>
 
int main() {

    double N[100];

    scanf("%lf", &N[0]);

    for(int i=0; i<=99; i++){
        N[i+1] = N[i]/2;
    }

    for(int y=0; y<=99; y++){
        printf("N[%i] = %.4lf\n", y, N[y]);
    }

    return 0;
}