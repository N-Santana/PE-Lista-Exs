#include <stdio.h>

void scan_vet(int *vet, int tam) 
{
	for (int i=0; i<tam; i++) {
		scanf("%d", &vet[i]);
	}
}

int soma_vet(int v1[], int v2[])
{
	int v3[5], i;

	for (i=0; i<5; i++) {
		v3[i]=v1[i]+v2[i];
	}
	for (i=0; i<5; i++) {
		printf("%d ", v3[i]);
	}
	printf("\n");
	
	return 0;
}

int main()
{
	int v1[5], v2[5], i;

	scan_vet(v1, 5);
	scan_vet(v2, 5);
	soma_vet(v1, v2);

	return 0;
}
