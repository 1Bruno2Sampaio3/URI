#include <stdio.h>
#include <math.h>

int main()
{
	double r1, r2, A, B, C;
	double  delta, rd;
	scanf("%lf %lf %lf", &A, &B, &C);
	
	delta = (B*B) - (4*A*C);
	rd = sqrt(delta);
	
	if(A == 0 || delta < 0)
	{
		printf("Impossivel calcular\n");
	}
	
	
	else{
	r1 = (((-1 * B) + rd)  / (2 * A));
	
	r2 = (((-1 * B) - rd)  / (2 * A));
	
	printf("R1 = %.5f\n", r1);
	printf("R2 = %.5f\n", r2);
	}
	return 0;
}