#include <stdio.h>
#include <stdlib.h>

void scan_vet(int *vet, int tam) 
{
	for (int i=0; i<tam; i++) {
		scanf("%d", &vet[i]);
	}
}

int repeticoes(int *v, int tam, int i)
{
	int prox, ant, cont1=0, cont2=1;
	if (i==tam) return 0;
	prox=i+1;
	ant=i-1;
	while (ant>=0) {              /* meio para evitar que numeros q se repetem mais q duas vezes imprimam mais de uma vez */
		if (v[i]==v[ant]) {
			cont1++;
		}
		ant--;
	}
	if (cont1 == 0) {            /* só entra no if e imprime se nenhum numero anterior tiver contabilizado quantas repetições subsequentes praquele numero */
		while (prox<tam) {
			if (v[i]==v[prox]) {
				cont2++;
			}
			prox++;
		}
		if (cont2 != 1) {
			printf("%d-%d\n", v[i], cont2);
		}
	}
	i++;                    /* se alguma repetição anterior já tiver imprimido quantas repetições totais tem, só segue */
	repeticoes(v, tam, i);
}

int main()
{
	int tam, *v;

	printf("Tamanho: ");
	scanf("%d", &tam);

	v=malloc(sizeof(int)*tam); 

	printf("Vetor: ");
	scan_vet(v, tam);
	repeticoes(v, tam, 0);
	
	return 0;
}
