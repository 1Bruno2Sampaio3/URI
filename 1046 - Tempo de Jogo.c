#include <stdio.h>

int main()
{
	int hi, hf, dur;
	
	scanf("%i %i", &hi, &hf);
	
	if(hi > hf)
	{
		dur = 24 - hi;
		dur = dur + hf;
		if(dur >= 1 && dur <= 24){
		printf("O JOGO DUROU %i HORA(S)\n", dur);
		}
	}
	else if(hi == hf)
	{
		dur = 24;
		printf("O JOGO DUROU %i HORA(S)\n", dur);
	}
	else
	{
		dur = hf - hi;
		if(dur >= 1 && dur <= 24){
		
		printf("O JOGO DUROU %i HORA(S)\n", dur);
		}
	}
	
	return 0;
}