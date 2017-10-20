#include <stdio.h> 

int conversao1(int valor, int binario, int potencia)
{
	if (valor<=0) return binario;
	binario += (valor%2)*potencia;
	conversao1((valor/2), binario, (potencia*10));
}

int conversao2(int valor, int decimal, int potencia)
{
	if (valor<=0) return decimal;
	decimal += (valor%10)*potencia;
	conversao2((valor/10), decimal, (potencia*2));
}

int main() {
	int opcao, valor;
	printf("Insira o valor a ser convertido e a opção: ");
	scanf("%d %d", &valor, &opcao);
	if (opcao==1) {
		printf("%d\n", conversao1(valor, 0, 1));

	} else if (opcao==2) {
		printf("%d\n", conversao2(valor, 0, 1));

	} else {
		printf("Por favor insira uma opção válida: ");
		scanf("%d", &opcao);
	}
}
