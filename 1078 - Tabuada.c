#include <stdio.h>
#include <stdlib.h>

main()
{
	int num,i,val = 0;
	
	scanf("%i",&num);
	
	for (i = 0; i < 10; i++)
	{
		val = (i+1) * num;
		
		printf("%i x %i = %i\n",i+1,num,val);
	}
	return 0;
}//main