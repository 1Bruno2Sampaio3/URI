#include <stdio.h>

int main()
{
	float f;
	
	scanf("%f", &f);
	
	if(f>=0.0 && f<=25.0)
	{
		printf("Intervalo [0,25]\n");
	}
	else if(f>25.0 && f<=50.0)
	{
		printf("Intervalo (25,50]\n");
	}
	else if(f>50.0 && f<=75.0)
	{
		printf("Intervalo (50,75]\n");
	}
	else if(f>75.0 && f<=100.0)
	{
		printf("Intervalo (75,100]\n");
	}
	else{
		printf("Fora de intervalo\n");
	}
	
	
	return 0;
}