#include <stdio.h>

typedef struct ficha{
	char nome[100];
	int rm;
	float p1, p2, p3, media;
} ficha;

int main()
{
	FILE *l, *e;
	ficha aluno;
	
	l=fopen("lista_alunos.txt", "r");
	e=fopen("media_alunos.txt", "w");

	for (int i=0; i<50; i++) {
		fscanf(l, "%s %d %f %f %f", &aluno.nome, &aluno.rm, &aluno.p1, &aluno.p2, &aluno.p3);
		aluno.media=((aluno.p1+aluno.p2+aluno.p3)/3);
		
		fprintf(e, "%s %04d %.1f %.1f %.1f %.1f\n", aluno.nome, aluno.rm, aluno.p1, aluno.p2, aluno.p3, aluno.media);
	}
	
	fclose(l);
	fclose(e);

	return 0;
}
