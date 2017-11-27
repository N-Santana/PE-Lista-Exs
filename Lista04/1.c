#include <stdio.h>
#include <math.h>

typedef struct ponto {
	float x, y, z;
} ponto;

float distancia(ponto *p1, ponto *p2)
{
	float dist;

	dist=pow((p1->x-p2->x), 2.0);
	dist+=pow((p1->y-p2->y), 2.0);
	dist+=pow((p1->z-p2->z), 2.0);
	dist=sqrt(dist);

	return dist;
}

int main()
{
	ponto p1;
	ponto p2;

	scanf("%f, %f, %f", &(p1.x), &(p1.y), &(p1.z));
	scanf("%f, %f, %f", &(p2.x), &(p2.y), &(p2.z));
	printf("%.2f\n", distancia(&p1, &p2));

	return 0;
}
