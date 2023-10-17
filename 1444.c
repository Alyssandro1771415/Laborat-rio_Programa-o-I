#include <stdio.h>

int main() {
    int n;
    
    while (1) {
        scanf("%d", &n);
        
        if (n == 0) {
            break; 
        }
        
        int corridas = 0;
        
        while (n > 1) {
            if (n % 3 == 0) {
                corridas += (n / 3);
                n /= 3;
            } else {
                corridas += (n / 3) + 1;
                n = (n / 3) + 1;
            }
        }
        
        printf("%d\n", corridas);
    }
    
    return 0;
}