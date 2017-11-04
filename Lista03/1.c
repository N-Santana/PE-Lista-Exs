#include <stdio.h>

int length(char v[])
{
	int tamanho=0;

	while (v[tamanho]) {
		tamanho++;
	}

	return tamanho;
}

int calcula_vogais(char v[])
{
	int contador=0, tamanho;

	tamanho=length(v);
	for (int i=0; i<tamanho; i++) {
		if (v[i]=='a' || v[i]=='e' || v[i]=='i' || v[i]=='o' || v[i]=='u') {
			contador++;
		}
	}

	return contador;
}

int main()
{
	char palavra[255];

	fgets(palavra, 255, stdin) ;
	printf("%d\n", calcula_vogais(palavra));

	return 0;
}
