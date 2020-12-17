#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int n, div, primo, resto;

    printf("Inserisci un numero > 2: ");
    scanf("%d",&n);
    primo = 1;

    for(div=2; div<=(n/2) && primo==1; div++)
        {
        resto = n%div;
        if(resto==0)
            primo=0;
        }
    if (primo==1)
        printf("%d è PRIMO!", n);
    else
        printf("%d NON è PRIMO!", n);

    return 0;
}
