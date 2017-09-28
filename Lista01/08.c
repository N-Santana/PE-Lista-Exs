#include <stdio.h>

int Fib(int n) 
{
	int i=1, j=0, t;
	for (int k=1; k<=n; k++) {
	t= (i+j);
	i=j;
	j=t;
	}
	return j;
}

int main(){
	int valor;
	printf("Insira um valor inteiro: ");
	scanf("%d", &valor);
	printf("A sequência de FIbonacci é: 0  ");
	int j=1;
	for (int i=valor; i>0; i--) {
		printf("%d  ", Fib(j));
		j++;	
	}
}
