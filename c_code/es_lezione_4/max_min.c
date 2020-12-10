#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int max, min, c, a;
    printf("Inserisci il primo numero: ");
    scanf("%d", &max);
    min = max;
    c = 0;

    while (c < 4)
        {
        printf("inserisci un valore: ");
        scanf("%d", &a);
        if (a > max)
            max = a;
        else
            {
            if (a < min)
                min = a;
            }
        c++;
        }
    
    //stampo i risultati
    printf(" il massimo e' %d\n", max);
    printf(" il minimo e' %d\n", min);
    return 0;
}
