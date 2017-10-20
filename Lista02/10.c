#include <stdio.h>

int fibMem[1000]={0};

int fib (int n)
{
	if (n==0) return 0;
	if (n<=2) return 1;
	/* Se o vetor já estiver preenchido até o valor n, só imprimo o valor normal */
	if ((fibMem[n-1]!=0) && (fibMem[n-2]!=0)) {
		fibMem[n]=fib(n-1)+fib(n-2);
		return fibMem[n];
	} else { 
	/* Se o vetor não estiver com os espaços anteriores preenchidos tenho que gravar o num de fibonacci */
		fibMem[n-2]=fibMem[n-3]+fibMem[n-4];
		fibMem[n-1]=fibMem[n-2]+fibMem[n-3];
		fibMem[n]=fib(n-1)+fib(n-2);
		return fibMem[n];
	}
}

int main()
{
	int valor;
	fibMem[1]=1;
	fibMem[2]=1;
	scanf("%d", &valor);
	printf ("%d\n", fib(valor));
	/* 
	Imprimir a sequência toda do vetor para verificar se tá certo: 

	for (int i=0; i<=valor; i++) {
		printf("%d ", fibMem[i]);
	}
	printf("\n");
	*/
	return 0; 

}	

