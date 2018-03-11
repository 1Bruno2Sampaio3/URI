#include <stdio.h>
 
int main() {
 
   int N, h = 0,min = 0;
	double div, sec2 = 0, h2 = 0, min2 = 0;
	
	scanf("%i", &N);
	
	if(N < 60)
	{
		printf("%i:%i:%i\n", h, min, N);
	}
	else
	{
		div = N / 60.0;
		min = div;
		if(min < 60){
				sec2 = (div - min) * 60.0;
				printf("%i:%i:%.0f\n", h, min, sec2);
			}
			else
			{
				h2 = N / 3600.0;
				h = h2; 
				min2 = (h2 - h) * 60.0;
				min = min2;
				sec2 = (min2 - min) * 60.0;
				printf("%i:%i:%.0f\n", h, min, sec2);
			}
		
	}
 
    return 0;
}