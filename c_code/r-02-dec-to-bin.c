#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int n, bit;

    printf("Inserisci un numero decimale: ");
    scanf("%d",&n);

    while(n>0)
        {
        bit = n % 2;
        printf("%d", bit);
        n = n / 2;
        }

    return 0;
}
