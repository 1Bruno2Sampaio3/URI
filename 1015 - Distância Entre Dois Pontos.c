#include <stdio.h>
#include <stdlib.h>
#include <math.h>

main()
{
    int x1,x2,y1,y2;
    float Distancia;
    
    scanf("%i %i",&x1,&y1);
    scanf("%i %i",&x2,&y2);
    
    Distancia = (x2-x1)*(x2-x1) + (y2-y1)*(y2-y1);
    Distancia = sqrt(Distancia);
    
    printf("%.4f\n",Distancia);
    
    system("pause");
}
