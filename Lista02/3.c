#include <stdio.h>
#include <math.h>

float pi(float a, float b, float t, float p)
{
	float a1, pi;
	for (int i=0; i<10; i++) {
		a1=(a+b)/2.0;
		b=sqrt(a*b);
		t=t-(p*(a-a1)*(a-a1));
		p=2.0*p;
		a=a1;
	}
	pi=(pow((a+b), 2))/(4.0*t);
	return pi;
}

int main() {
	float a=1.0, b=(1.0/sqrt(2.0)), t=(1.0/4.0), p=1.0;
	printf("%.20f\n", pi(a, b, t, p));
}	
