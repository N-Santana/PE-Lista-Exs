#include <stdio.h>
#include <math.h>

double delta(double a, double b, double c)
{
	double delta;
	delta=pow(b, 2.0)-(4.0*a*c);
	return delta;
}

double bhaskara1(double a, double b, double c)
{
	double x1;
	x1=((-b)+sqrt(delta(a, b, c)))/(2*a);
	return x1;
	
}

double bhaskara2(double a, double b, double c)
{
	double x2;
	x2=((-b)-sqrt(delta(a, b, c)))/(2*a);
	return x2;
	
}

int main() {
	double a, b, c;
	printf("Insira os coeficientes a, b e c: ");
	scanf("%lf %lf %lf", &a, &b, &c);
	printf("%.3lf %.3lf\n", bhaskara2(a, b, c), bhaskara1(a, b, c));
}
