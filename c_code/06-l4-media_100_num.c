//media di 100 numeri

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int i, s=0;
    float m=0;
    for(i=0; i<100; i++)
        {
        s+=i;
        }
    
    m=(float) s/ 100;
    printf("La media è %.2f", m);
    return 0;
}
