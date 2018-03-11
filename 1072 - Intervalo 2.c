#include <stdio.h>
#include <stdlib.h>

main()
{
	int num = 0,qtdf,i,qtd = 0;
	
	scanf("%i",&num);
	int v[num];
	for(i = 0; i < num; i++)
	{
		scanf("%i",&v[i]);
	}
	
	for(i = 0; i < num; i++)
	{
		if(v[i] >= 10 && v[i] <= 20)
		{
			qtd++;
		}
	}
	qtdf = num;
	qtdf = qtdf - qtd;
	 
	 printf("%i in\n",qtd);
	 printf("%i out\n",qtdf);
	 
	 system("pause");	
}