#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int tab,n,c;

    for(n=2; n<10; n++)
        {
        printf("\nTabellina del %d\n\n",n);
        for(c=1; c<=10; c++)
            {
            tab = n * c;
            printf("%d\t",tab);
            }
            printf("\n");
        }
    return 0;
}
