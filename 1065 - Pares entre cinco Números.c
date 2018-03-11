#include <stdio.h>

int main()
{
	
	int n[5], cont = 0, i;
	
	for(i = 0; i < 5; i++)
	{
		scanf("%i", &n[i]);
	}
	
	for(i = 0; i < 5; i++)
	{
		if((n[i] % 2) == 0)
		{
			cont++;
		}
	}#include <stdio.h>

int main()
{
	int DDD;
	
	scanf("%i", &DDD);
	
	if(DDD == 61)
	{
		printf("Brasilia\n");
	}
	else if(DDD == 71)
	{
		printf("Salvador\n");
	}
	else if(DDD == 11)
	{
		printf("Sao Paulo\n");
	}
	else if(DDD == 21)
	{
		printf("Rio de Janeiro\n");
	}
	else if(DDD == 32)
	{
		printf("Juiz de Fora\n");
	}
	else if(DDD == 19)
	{
		printf("Campinas\n");
	}
	else if(DDD == 27)
	{
		printf("Vitoria\n");
	}
	else if(DDD == 31)
	{
		printf("Belo Horizonte\n");
	}
	else
	{
		printf("DDD nao cadastrado\n");
	}
	return 0;
}
	printf("%i valores pares\n", cont);
	
	return 0;
	
}