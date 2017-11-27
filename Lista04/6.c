#include <stdio.h>
#include <time.h>
#include <limits.h>
#include <math.h>

#define BIGNUM ULONG_MAX


typedef unsigned long int ulint;

int num_bits(int aux)
{
	int i=0;

	while (aux) {
		aux=aux>>1;
		i++;
	}

	return i;
}

void f1(ulint x, ulint y)
{
	if (x>y) {
		printf("%lu é maior que %lu\n", x, y);
	} else {
		printf("%lu é maior que %lu\n", y, x);
	}
}

ulint f2(ulint x, ulint y)
{
	int aux=x^y;
	
	if ((x>>(num_bits(aux)-1))&1) {
		printf("%lu é maior que %lu\n", x, y);
	} else {
		printf("%lu é maior que %lu\n", y, x);
	}
}

int main(void) 
{
	clock_t tempo_init, tempo_fim;
	double tempo_gasto;
	ulint x, y;
	
	printf("Entre com dois números: ");
	scanf("%lu %lu", &x, &y);    

	tempo_init=clock();
	f1(x, y);
	tempo_fim=clock();

	tempo_gasto=(double)(tempo_fim-tempo_init)/CLOCKS_PER_SEC;
	printf("Tempo gasto na versao normal: %lf\n", tempo_gasto);

	tempo_init=clock();
	f2(x, y);
	tempo_fim=clock();

	tempo_gasto=(double)(tempo_fim-tempo_init)/CLOCKS_PER_SEC;
	printf("Tempo gasto na versao bitwise: %lf\n", tempo_gasto);

	return 0;
}
