#include <stdio.h>
#include <stdlib.h>

main()
{
	int N[10],i;
	
	do
	{
		scanf("%i",&N[0]);
		fflush(stdin);
	} while (N[0] > 50);
	
	for(i = 0; i < 10; i++)
	{
		N[i+1] = N[i] * 2;
		printf("N[%i] = %i\n",i,N[i]);
	}
	
	return 0;
}//main