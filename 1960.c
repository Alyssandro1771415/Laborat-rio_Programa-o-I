#include <stdio.h>

int main() {

    int numero;

    scanf("%d", &numero);
    if (numero >= 500) {
        if (numero >= 900) {
            printf("CM");
            numero -= 900;
        }
        else {
            printf("D");
            numero -= 500;
        }
    }
    if (numero < 500 && numero >= 100) {
        while (numero >= 100) {
            if (numero >= 400) {
                printf("CD");
                numero -= 400;
            }
            else {
                printf("C");
                numero -= 100;
            }
        }
    }
    if (numero < 100 && numero >= 50) {
        if (numero >= 90) {
            printf("XC");
            numero -= 90;
        }
        else {
            printf("L");
            numero -= 50;
        }
    }
    if (numero < 50 && numero >= 10) {
        while (numero >= 10) {
            if (numero >= 40) {
                printf("XL");
                numero -= 40;
            }
            else {
                printf("X");
                numero -= 10;
            }
        }
    }
    if (numero < 10 && numero >= 5) {
        while (numero >= 5) {
            if (numero >= 9) {
                printf("IX");
                numero -= 9;
            }
            else {
                printf("V");
                numero -= 5;
            }
        }
    }
    if (numero < 5 && numero >= 1) {
        while (numero >= 1) {
            if (numero >= 4) {
                printf("IV");
                numero -= 4;
            }
            else {
                printf("I");
                numero -= 1;
            }
        }
    }
    printf("\n");
    return 0;
}