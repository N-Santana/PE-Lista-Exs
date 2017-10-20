#include <stdio.h>

int palindromo(int n, int n2, int inverso)
{
	inverso*=10;
	inverso+=(n2%10);
	if (inverso==n) return 1;
	if (n2==0) return 0;
	if (n2!=0) {
		n2/=10;
		palindromo(n, n2, inverso);
	}
	
}

int main()
{
	int valor, aux;
	printf("Insira o valor: ");
	scanf("%d", &valor);
	aux=valor;
	if (palindromo(valor, aux, 0)) {
		printf("Sim\n");
	} else {
		printf("Não\n");
	}
}
