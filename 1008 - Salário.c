#include <stdio.h>
#include <stdlib.h>

main()
{
	int i,j;
	float sal,salt;
	
	scanf("%i",&i);
	scanf("%i",&j);
	scanf("%f",&sal);
	
	salt = sal * j;
	
	printf("NUMBER = %i\n",i);
	printf("SALARY = U$ %.2f\n",salt);
	
	system("pause");
}