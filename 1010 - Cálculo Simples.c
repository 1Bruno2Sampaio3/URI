#include <stdio.h>
#include <stdlib.h>

main()
{
    int A,B,A2,B2;
    float C,C2,Valor;
    
    scanf("%i %i %f",&A,&B,&C);
    scanf("%i %i %f",&A2,&B2,&C2);
    
    Valor = (B*C) + (B2*C2);
    
    printf("VALOR A PAGAR: R$ %.2f\n",Valor);
    system("pause");
}
