#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int c, s=0, n;
    for ( c = 0; c < 5; c++)
    {
        printf("Inserisci un valore: ");
        scanf("%d", &n);

        s+=n;
    }
    
    printf("La somma è %d", s);
    return 0;
}
