#include <stdio.h>

int main()
{
	int i, contador = 0;
	float v[6];
	
	for(i = 0; i < 6; i++)
	{
		scanf("%f", &v[i]);
	}
	
	for(i = 0 ; i < 6; i++)
	{
		if(v[i] > 0)
		{
			contador++;
		}
	}
	
	
	printf("%i valores positivos\n", contador);
	
	return 0;
}