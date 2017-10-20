#include <stdio.h>

float descontos(int cargo, int faltas)
{
	float desconto, salario;
	switch (cargo) {
		case 1:
			salario=10000;
			break;
		case 2:
			salario=8000;
			break;
		case 3:
			salario=5000;
			break;
		case 4:
			salario=3000;
			break;
		case 5:
			salario=2000;
			break;
	}
	desconto = salario/20;
	desconto *= faltas;
	return desconto;
}

float acrescimos(int cargo, int horas) 
{
	float acrescimo, salario, salario_dia;
	switch (cargo) {
		case 1:
			salario=10000;
			break;
		case 2:
			salario=8000;
			break;
		case 3:
			salario=5000;
			break;
		case 4:
			salario=3000;
			break;
		case 5:
			salario=2000;
			break;
	}
	salario_dia = salario/20;
	salario_dia /= 8;
	acrescimo = (salario_dia+40)*horas;
	return acrescimo;
}

float total(int cargo, int faltas, int horas)
{
	float total, salario;
	switch (cargo) {
		case 1:
			salario=10000;
			break;
		case 2:
			salario=8000;
			break;
		case 3:
			salario=5000;
			break;
		case 4:
			salario=3000;
			break;
		case 5:
			salario=2000;
			break;
	}
	total = salario;
	total -= descontos(cargo, faltas);
	total += acrescimos(cargo, horas);
	return total;
}

int main() {
	int cargo, faltas, h_extras;
	printf("Insira o cargo, o número de faltas e o número de horas extras: ");
	scanf("%d %d %d", &cargo, &faltas, &h_extras);
	printf("%.2f\n", total(cargo, faltas, h_extras));
}
