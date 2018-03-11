#include <stdio.h>

int main(){
    
    int qa, qb, qc, menor, v[3], i, j;
    
    scanf("%i %i %i", &qa, &qb, &qc);
    
    v[0] = 2 * qb + 4 * qa;
    v[1] = 2 * qc + 2 * qa;
    v[2] = 2 * qb + 4 * qc;
    
    menor = v[0];
    for(i = 0; i < 3; i++)
    {
            
            for(j = i + 1; j < 3; j++)
            {
                    if(v[j] < menor)
                    {
                            menor = v[j];
                    }
            }        
    }
    
    printf("%i\n", menor);
    
 return 0;   
}