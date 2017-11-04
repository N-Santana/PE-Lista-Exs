#include <stdio.h>
#include <stdlib.h>

void scan_vet(int *vet, int tam) 
{
	for (int i=0; i<tam; i++) {
		scanf("%d", &vet[i]);
	}
}

int cmpfunc(const void *a, const void *b){
    return ( *(int*) a - *(int*) b);
}

int par_impar(int x)
{
    if ((x%2)==0) return 0;
    else return 1;
}


float media(int x, int y)
{
	float media;

	media= (x+y)/2.0;

	return media;
}

float mediana(int *v, int tam)
{
	float mediana;
	int aux1, aux2;

	aux1=(tam/2);
	aux2=(tam/2)-1;
	if (par_impar(tam)) {
		mediana=v[aux1];
	} else {
		mediana=media(v[aux1], v[aux2]);
	}

	return mediana;
}

int main()
{
	int n, *vet;

	scanf("%d", &n);
	vet=malloc(sizeof(int)*n);
	scan_vet(vet, n);
	qsort(vet, n, sizeof(int), cmpfunc);
	printf("%.2f\n", mediana(vet, n));

	return 0;
}
