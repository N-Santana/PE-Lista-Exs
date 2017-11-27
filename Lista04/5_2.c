#include <stdio.h>
#include <time.h>
#include <limits.h>

#define BIGNUM ULONG_MAX

typedef unsigned long int ulint;

int f1(ulint x, int soma)
{
	soma+=(x%2);
	if (x==0) return soma;
	f1((x/2), soma);
}

int f2(ulint x, int soma)
{
	soma+=(x&1);
	if (x==0) return soma;
	f2((x>>1), soma);
}

int main()
{
	clock_t tempo_init, tempo_fim;
	double tempo_gasto;
	
	tempo_init=clock();
	for (int i=0; i<BIGNUM; i++) { 	/* checa pra todos os números */
		f1(i, 0);
	}
	tempo_fim=clock();
	tempo_gasto=(double)(tempo_fim-tempo_init)/CLOCKS_PER_SEC;
	printf("Tempo gasto na versão normal: %lf\n", tempo_gasto);

	tempo_init=clock();
	tempo_init=clock();
	for (int i=0; i<BIGNUM; i++) {
		f2(i, 0);
	}
	tempo_fim=clock();
	tempo_gasto=(double)(tempo_fim-tempo_init)/CLOCKS_PER_SEC;
	printf("Tempo gasto na versão bitwise: %lf\n", tempo_gasto);

	return 0;
}
