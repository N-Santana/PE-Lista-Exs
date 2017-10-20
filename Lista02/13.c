#include <stdio.h>

int v[2];

int mdc(int x, int y, int i) 
{
	if ((x%i)==0 && (y%i)==0) {
		return i;
	} else {
		i--;		
		mdc(x, y, i);
	}
}

int comparativo(int x, int y)
{
	int aux, i;
	v[0]=x;
	v[1]=y;
	if (v[0]>v[1]) {
		aux=v[0];
		v[0]=v[1];
		v[1]=aux;
	}
	i=v[0];
	mdc(x, y, i);
}

int main()
{
	int valor1, valor2;
	printf("Insira os dois valores: ");
	scanf("%d %d", &valor1, &valor2);
	printf("%d\n", comparativo(valor1, valor2));
}
