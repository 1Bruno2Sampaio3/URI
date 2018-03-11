#include <stdio.h>
#include <stdlib.h>

main()
{
    double A,B,C,MEDIA;
    
    scanf("%lf %lf %lf",&A,&B,&C);
    
    MEDIA = (A *0.2) + (B * 0.3) + (C *0.5);
    
    printf("MEDIA = %.1lf\n",MEDIA);
    system("pause");
}