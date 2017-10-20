#include <stdio.h>

float adicao(float a, float b)
{
    float soma;
    soma=a+b;
    return soma;
}

float subtracao(float a, float b)
{
    float sub;
    sub=a-b;
    return sub;
}

float multiplicacao(float a, float b)
{
    float vezes;
    vezes=a*b;
    return vezes;
}

float divisao(float a, float b)
{
    float div;
    div=a/b;
    return div;
}

float potencializacao(float a, float b)
{
    float potencia;
    potencia=a;
    for (int i = (b-1); i!=0; i--) {
	    potencia*=a;
    }
    return potencia;
}

float operacao(int operacao, float a, float b)
{
    if (operacao==1) {
	    return adicao(a,b);
    } else if (operacao==2) {
	    return subtracao(a,b);
    } else if (operacao==3) {
	    return multiplicacao(a,b);
    } else if (operacao==4) {
	    return divisao(a,b);
    } else {
   	    return potencializacao(a,b);
    }
}

int main() {
    int oper;
    float valor1, valor2;
    printf("Insira operação, valor 1 e valor 2: ");
    scanf("%d %f %f", &oper, &valor1, &valor2);
    printf("%.2f\n", operacao(oper, valor1, valor2));
}
