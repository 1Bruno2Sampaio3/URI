#include <stdio.h>
#include <stdlib.h>

main()
{
	int i,par;
	
	for(i = 1; i <= 50; i++)
	{
		par = i * 2;
		printf("%i\n",par);
	}
	
	system("pause");
}