#include <stdio.h>

int m_transposta(int m[][3])
{
	int i, j;
	for (i=0; i<3; i++) {
		for (j=0; j<3; j++) {
			printf("%d ", m[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}

int main()
{
	int m[3][3], i, j;
	for (j=0; j<3; j++) {
		for (i=0; i<3; i++) {
			scanf("%d", &m[i][j]);
		}
	}
	
	m_transposta(m);

	return 0;
}
