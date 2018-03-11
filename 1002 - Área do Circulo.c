#include <stdio.h>

#define PI 3.14159

int main()
{
	double area, raio;
	
	scanf("%lf", &raio);
	
	area = (raio * raio) * PI;
	printf("A=%.4f\n", area);
	return 0;
}