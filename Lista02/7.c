#include <stdio.h>

int decimal(int uni_said, int valor)
{
	if (uni_said==1) return valor;	
	int binario=0, potencia=1;
	while (valor>0) {
		binario += (valor%2)*potencia;
		valor /= 2;
		potencia *= 10;
	}
	return binario;
}

int binario(int uni_said, int valor) 
{
	if (uni_said==2) return valor;
	int decimal=0, potencia=1;
	while (valor>0) {
		decimal += (valor%10)*potencia;
		valor /= 10;
		potencia *= 2;
	}
	return decimal;
}

float celcius(int uni_said, float valor)
{
	float fahr, kelv;	
	switch (uni_said) {
		case 1:
			printf("%.2fºC\n", valor);			
			return 0;
			break;
		case 2:
			fahr= ((1.8*valor)+32);
			printf("%.2f F\n", fahr);
			return 0;
			break;
		case 3:
        		kelv= (valor+273.15);
			printf("%.2f K\n", kelv);
			return 0;
			break;
	}
}

float fahrenheit(int uni_said, float valor)
{
	float celcius, kelv;
	switch (uni_said) {
		case 1:
			celcius= ((valor-32)/1.8);
			printf("%.2fºC\n", celcius);
			return 0;
			break;
		case 2:
			printf("%.2f F\n", valor);
			return 0;
			break;
		case 3:
			kelv=((((valor-32)/9)*5)+273.15);
			printf("%.2f K\n", kelv);
			return 0;
			break;
	}
}

float kelvin(int uni_said, float valor)
{
	float celcius, fahr;
	switch (uni_said) {
		case 1:
        		celcius= (valor-273.15);
			printf("%.2fºC\n", celcius);
			return 0;
			break;
		case 2:
			fahr=((((valor-273.15)/5)*9)+32);
			printf("%.2f F\n", fahr);
			return 0;
			break;
		case 3:
			printf("%.2f K\n", valor);
			return 0;
			break;
	}
}

int main()
{
	float valor;
	int tipo_conver, uni_ent, uni_said;
	printf("Insira os dados: ");
	scanf("%d %d %d %f", &tipo_conver, &uni_ent, &uni_said, &valor);
	switch (tipo_conver) {
		case 1:
			switch (uni_ent) {
				case 1:
					celcius(uni_said, valor);
					break;

				case 2:
					fahrenheit(uni_said, valor);
					break;

				case 3:
					kelvin(uni_said, valor);
					break;
			}
			break;
		case 2:
			switch (uni_ent) {
				case 1:
					printf("%d\n", decimal(uni_said, valor));
					break;

				case 2:
					printf("%d\n", binario(uni_said, valor));
					break;
			}
			break;
	}
}
