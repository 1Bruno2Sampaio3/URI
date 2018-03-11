#include <stdio.h>


int main()
{
	int v[3], v2[3], i, j, aux;
	
	for(i = 0; i < 3; i++)
	{
		scanf("%i", &v[i]);
	}
	
	for(i = 0, j = 0; i < 3, j< 3; i++, j++)
	{
		v2[j] = v[i];
	}
	
	for(i = 0; i < 3; i++)
	{
		for(j = i+1; j < 3; j++)
		{
			if(v[i] > v[j])
			{
				aux = v[j];
				v[j] = v[i];
				v[i] = aux;
			}
		}
	}
	
	for(i = 0; i < 3; i++)
	{
		printf("%i\n", v[i]);
	}
	
	printf("\n");
	
	for(i = 0; i < 3; i++)
	{
		printf("%i\n", v2[i]);
	}
	
	return 0;
}