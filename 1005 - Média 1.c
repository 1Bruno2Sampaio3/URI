#include <stdio.h>
#include <stdlib.h>

main()
{
      double n1,n2,MEDIA = 0;
      
      scanf("%lf %lf",&n1,&n2);
      
      n1 = n1 * 3.5;
      n2 = n2 * 7.5;
      
      MEDIA = (n1+n2)/11;
      
      printf("MEDIA = %.5lf\n",MEDIA);
      
      system("pause");
}