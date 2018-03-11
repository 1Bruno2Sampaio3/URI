#include <stdio.h>
#define PI 3.14159
int main()
{
	double volume, raio;
	
	scanf("%lf", &raio);
	
	volume =(4/3.0) * (raio * raio * raio) * PI;
	printf("VOLUME = %.3f\n", volume);
	return 0;
}