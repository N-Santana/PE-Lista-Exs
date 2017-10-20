#include <stdio.h>

int par_impar(int x) 
{
    if ((x%2)==0) {
	return 0;
    } else {
	return 1;
    }
}

int main() {
    int valor;
    printf("Insira um valor inteiro: ");
    scanf("%d", &valor);
    printf("%d\n", par_impar(valor));
}
