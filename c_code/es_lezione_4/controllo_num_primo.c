#include <stdio.h>
#include <stdlib.h>

//controlla se l'input è un numero primo

int main(int argc, char const *argv[])
{
    int n, i, c=0;
    printf("Inserisci un numero: ");
    scanf("%d", &n);

    for(i=1; i<=n; i++)
        {
        if(n%i==0)
            c++;
        }

    if(c==2)
        printf("Il numero e' Primo!\n");
    else
        printf("Il numero NON e' Primo\n");
    return 0;
}