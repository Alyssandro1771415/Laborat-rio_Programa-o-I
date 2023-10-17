#include <stdio.h>

#define true 1
#define false 0

int main(){

	int ppp = 0;
	int c, qtsZeros;
	int linha, coluna;
	_Bool bo, ok = true;
	int qtLinhas, qtColunas;

	scanf("%d %d", &qtLinhas, &qtColunas);

	for (linha = 0; linha < qtLinhas; ++linha){

		qtsZeros = 0;
		bo = true;

		for (coluna = 0; coluna < qtColunas; ++coluna){

			scanf("%d", &c);
			if (c == 0 && bo)
				qtsZeros++;
			else
				bo = false;

		}

		if (linha != 0){

			if ((qtsZeros > ppp || (qtsZeros == ppp && qtsZeros == qtColunas)) && ok)
				ppp = qtsZeros;
			else
				ppp = 0, ok = false;

		} else
			ppp = qtsZeros;

	}

	if (ppp){
		printf("S\n");
    }
	else{
		printf("N\n");
    }
}