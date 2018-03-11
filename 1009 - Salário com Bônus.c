#include <stdio.h>
#include <stdlib.h>
#include <string.h>

main()
{
	char nome[20];
	double sf,mt,sb;
	
	gets(nome);
	fflush(stdin);
	
	scanf("%lf",&sf);
	scanf("%lf",&mt);
	
	sb = sf + (mt * 0.15);
	
	printf("TOTAL = R$ %.2lf\n",sb);
	system("pause");
}
