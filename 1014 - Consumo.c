#include <stdio.h>
#include <stdlib.h>

main()
{
	int x;
	float y,qtd;
	
	scanf("%i %f",&x,&y);
	
	qtd = x / y;
	
	printf("%.3f km/l\n",qtd);
	
	system("pause");
	
}