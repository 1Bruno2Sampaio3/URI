#include <stdio.h>
#include <stdlib.h>

main()
{
	int x,y;
	
	do
	{
		scanf("%i %i",&x,&y);
		
		if(x > 0 && y > 0)
		{
			printf("primeiro\n");
		}
		if(x < 0 && y > 0)
		{
			printf("segundo\n");
		}
		if(x < 0 && y < 0)
		{
			printf("terceiro\n");
		}
		if(x > 0 && y < 0)
		{
			printf("quarto\n");
		}
	}while (x != 0 || y != 0);
	
	return 0;
}