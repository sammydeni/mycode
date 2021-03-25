#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int i, k;

    for(i=1; i< 10; i++)
        {
            printf("\n- - - tabellina del %d - - -\n\n",i);
            for(k=1; k <= 10; k++)
                {
                    printf("%d x %d = %d\t",i,k,i*k);
                }
            printf("\n");
        }
    return 0;
}
