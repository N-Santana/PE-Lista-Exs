#include <stdio.h>

float fatorial(int a, int fat) 
{
	if ((a==1) || (a==0)) return fat;
	fat *= a;
        a--;
	fatorial(a, fat);
}

float binomial(int n, int k) 
{
	float bin;
	bin = fatorial(n, 1);
	bin /= fatorial(k, 1);
	bin *= 1/fatorial((n-k), 1);
	return bin;
}

int main() {
	int valor1, valor2;
	printf("Insira os valores de n e k: ");
	scanf("%d %d", &valor1, &valor2);
	printf("%.2f\n", binomial(valor1, valor2));
}
