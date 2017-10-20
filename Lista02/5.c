#include <stdio.h>

float fatorial(int a) 
{
	int fat=1;
	while (a>1) {
		fat *= a;
        	--a;
    	}
	return fat;
}

float binomial(int n, int k) 
{
	float bin;
	bin = fatorial(n);
	bin /= fatorial(k);
	bin *= 1/fatorial((n-k));
	return bin;
}

int main() {
	int n, k;
	printf("Insira os valores de n e k: ");
	scanf("%d %d", &n, &k);
	printf("%.2f\n", binomial(n, k));
}
