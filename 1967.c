#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define true 1
#define false 0

int dig[2010];

int main(int argc, char **argv)
{

    int i, j, k;
    int a, b, c, d;

    scanf("%d %d %d %d", &a, &b, &c, &d);

    int matrizA[a][b];
    int matrizB[b][c];
    int matrizC[c][d];

    for (i = 0; i < a; ++i)
        for (j = 0; j < b; ++j)
            scanf("%d", &matrizA[i][j]);
    
    for (i = 0; i < b; ++i)
        for (j = 0; j < c; ++j)
            scanf("%d", &matrizB[i][j]);

    int matrizResp[a][c];
    memset(matrizResp, 0, sizeof(matrizResp));

    for (i = 0; i < a; ++i)
        for (j = 0; j < c; ++j)
            for (k = 0; k < b; ++k)
                matrizResp[i][j] += matrizA[i][k] * matrizB[k][j];

    for (i = 0; i < c; ++i)
        for (j = 0; j < d; ++j)
            scanf("%d", &matrizC[i][j]);

    int resp[a][d];
    memset(resp, 0, sizeof(resp));

    for (i = 0; i < a; ++i)
        for (j = 0; j < d; ++j)
        {

            for (k = 0; k < c; ++k)
                resp[i][j] += matrizResp[i][k] * matrizC[k][j];

            if (resp[i][j] > dig[j])
                dig[j] = resp[i][j];

        }
    
    for (i = 0; i < a; ++i)
        for (j = 0; j < d; ++j)
            printf("%*d%c", (int)log10(dig[j] == 0 ? 1 : dig[j]) + 1, resp[i][j], j < d - 1 ? ' ' : '\n');
    
    return 0;

}