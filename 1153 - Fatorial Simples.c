#include <stdio.h>
#include <stdlib.h>

int fatorial (int num);

main()
{
	int num,fat;
	
	do
	{
	 scanf("%i",&num);
	 fflush(stdin);
    } while (num < 0 || num >= 13);
    
    fat = fatorial(num);
    
    printf("%i\n",fat);
}//main

int fatorial(int num)
{
    if(num == 0)
    return 1;
    else
    return (num*fatorial(num - 1));
}