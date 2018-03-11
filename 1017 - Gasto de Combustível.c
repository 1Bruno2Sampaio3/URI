#include <stdio.h>
#include <stdlib.h>

main()
{
	int i,j;
	double t;
	
	scanf("%i %i",&i,&j);
	
	t = (i * j)/ 12;
	
	printf("%.3lf\n",t);
	
	system("pause");
}