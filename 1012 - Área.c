#include <stdio.h>
int main()
{
	double A,B,C,ATR, AC, AT, AQ, AR;
	scanf("%lf %lf %lf", &A, &B, &C);
	ATR = (A*C)/2;
	AC = (C * C) * 3.14159;
	AT = ((A*C)/2) + ((B*C)/2);
	AQ = B*B;
	AR = A*B;
	printf("TRIANGULO: %.3f\n", ATR);
	printf("CIRCULO: %.3f\n", AC);
	printf("TRAPEZIO: %.3f\n", AT);
	printf("QUADRADO: %.3f\n", AQ);
	printf("RETANGULO: %.3f\n", AR);
	return 0;
}