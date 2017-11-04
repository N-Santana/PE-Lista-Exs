#include <stdio.h>
#include <stdlib.h>

int length(char v[])
{
	int tamanho=0;

	while (v[tamanho]) {
		tamanho++;
	}

	return tamanho;
}

void inverte(char palavra[])
{
	int tam, aux;
	char *invertido;

	tam=length(palavra);
	aux=(tam-1);
	invertido=malloc(sizeof(char)*tam);

	for (int i=0; i<tam; i++) {
		invertido[aux]=palavra[i];
		aux--;
	}
	printf("%s\n", invertido);
}

int main()
{
	char palavra[255];

	fgets(palavra, 255, stdin);
	inverte(palavra);

	return 0;
}
