#include <stdio.h>
#include <stdlib.h>

main()
{
	int i = 2002,num;
	
	do
	{
		scanf("%i",&num);
		if(i != num)
		{
			printf("Senha Invalida\n");
		}
	} while (num != i);
	
	printf("Acesso Permitido\n");
	
	return 0;
}