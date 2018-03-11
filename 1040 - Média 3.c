#include <stdio.h>
int main()
{
	float N1, N2, N3, N4, E, M;
	scanf("%f %f %f %f", &N1, &N2, &N3, &N4);
	M = ((N1 * 2)/10) + ((N2 * 3)/10) + ((N3 * 4)/10) + ((N4 * 1)/10);
	printf("Media: %.1f\n", M);
	if(M >= 7.0)
	{
		printf("Aluno aprovado.\n");
	}
	else if(M < 5.0)
	{
		printf("Aluno reprovado.\n");
	}
	else if(M >= 5.0 && M <= 6.9)
	{
		printf("Aluno em exame.\n");
		scanf("%f", &E);
		printf("Nota do exame: %.1f\n", E);
		M = (M + E) / 2;
		if(M >= 5.0)
		{
			printf("Aluno aprovado.\n");
			printf("Media final: %.1f\n", M);
		}
		else if(M <= 4.9)
		{
			printf("Aluno reprovado.\n");
			printf("Media final: %.1f\n", M);
		}
	}
	return 0;
}