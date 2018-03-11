#include <stdio.h>
#include <stdlib.h>

main()
{
	int X,Y;
	
	do
	{
		scanf("%i %i",&X,&Y);
		
		if(X < Y)
		{
			printf("Crescente\n");
		}
		if(X > Y)
		{
			printf("Decrescente\n");
		}
	} while (X != Y);
	
	return 0;
}