#include <stdio.h>
#include <stdlib.h>

//calcola max e min utilizzando un ciclo for

int main(int argc, char const *argv[])
{
    //dichiaro le variabili
    int max, min, c, a;
    printf("Inserisci il primo numero: ");
    scanf("%d", &max);
    min = max;
    //uso un ciclo for
    for ( c = 0; c < 4; c++)
        {
        printf("inserisci un valore: ");
        scanf("%d", &a);
        if (a > max)
            max = a;
         
        if (a < min)
            min = a;
        }
    
    //stampo i risultati
    printf(" il massimo e' %d\n", max);
    printf(" il minimo e' %d\n", min);
    return 0;
}
