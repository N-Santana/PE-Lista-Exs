#include <stdio.h>
#include <time.h>
#include <limits.h>
#include <math.h>

#define BIGNUM ULONG_MAX


typedef unsigned long int ulint;

int f1(int x)
{
	for (int i=0; i<BIGNUM; i++) {
		if (pow(2, i)==x) return 1;
		if (x<=i) return 0;	/* se x<=i e não o programa não encontrou potência de 2 que seja x, x não é potência  */
	}
}

int f2(int x)
{
	int controle;

	controle=(BIGNUM/x);
	for (int i=0; i<BIGNUM; i++) {
		if (controle==(BIGNUM>>i)) return 1;
		if (x<=i) return 0;	/* se x<=i e não o programa não encontrou potência de 2 cujo resultado da divisão seja igual a divisão por x, x não é potência  */
	}
}

int main(void) 
{
	clock_t tempo_init, tempo_fim;
	double tempo_gasto;
	int num;
	
	printf("Entre com um número: ");
	scanf("%d", &num);          /* checa um único número */

	tempo_init=clock();
	if (f1(num)) {
		printf("%d é potencia de 2.\n", num);
	} else {
		printf("%d não é potencia de 2.\n", num);
	}
	tempo_fim=clock();

	tempo_gasto=(double)(tempo_fim-tempo_init)/CLOCKS_PER_SEC;
	printf("Tempo gasto na versao normal: %lf\n", tempo_gasto);

	tempo_init=clock();
	if (f2(num)) {
		printf("%d é potencia de 2.\n", num);
	} else {
		printf("%d não é potencia de 2.\n", num);
	}
	tempo_fim=clock();

	tempo_gasto=(double)(tempo_fim-tempo_init)/CLOCKS_PER_SEC;
	printf("Tempo gasto na versao bitwise: %lf\n", tempo_gasto);
	
	return 0;
}
