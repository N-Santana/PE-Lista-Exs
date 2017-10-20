#include <stdio.h>

int potencia(int x, int y, int parcial)
{
	if (y==0) return parcial;
	potencia(x, (y-1), (parcial*x));
}

int main() {
	int x, y;
	printf("Insira os valores de x e y: ");
	scanf("%d %d", &x, &y);
	printf("%d\n", potencia(x, y, 1));
}
