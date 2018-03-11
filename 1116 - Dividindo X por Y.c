#include <stdio.h>

int main()
{
	int N, X, Y, cont = 0;
	float div = 0.0;
	
	scanf("%i",&N);
	
	do
	{
		scanf("%i %i", &X, &Y);
		
		if(Y == 0)
		{
			printf("divisao impossivel\n");
		}
		else
		{
			div =X/((float)Y);
			printf("%.1f\n", (float)div);	
		}		
		cont++;
	}while(cont < N);
	
	return 0;
}