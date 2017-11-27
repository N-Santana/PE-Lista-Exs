#include <stdio.h>

typedef struct crono{
	int min, seg, dec;
} crono;

float converte(crono *t)
{
	float total;
	total=t->seg;
	total+=((t->dec)/100.0);        /* conversão décimos p/ segundos */
	total+=((t->min)*60.0);		/* conversão minutos p/ segundos */
	
	return total;
}

void diferenca(crono *t1, crono *t2)
{
	crono dif;			/* cronometro da diferença */
	float aux1, aux2; 
	int subt;

	aux1=converte(t1);
	aux2=converte(t2);
	subt=((aux2-aux1)*100);		/* subtração em segundos + elimina vírgula */

	dif.min=(subt/6000);		/* conversão segundos p/ minutos */
	subt=(subt%6000);		/* segundos+decimos */
	dif.seg=(subt/100);
	dif.dec=(subt%100);		/* decimos=resto dos minutos*/	
	
	if (subt<0) {
		printf("-%dm %ds %d\n", dif.min, dif.seg*(-1), dif.dec*(-1));
	} else {
		printf("%dm %ds %d\n", dif.min, dif.seg, dif.dec);
	}
}

int main()
{
	crono t1; 
	crono t2;

	scanf("%dm %ds %d", &t1.min, &t1.seg, &t1.dec);
	scanf("%dm %ds %d", &t2.min, &t2.seg, &t2.dec);
	diferenca(&t1, &t2);

	return 0;
}
