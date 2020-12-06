#include <stdio.h>
#include <stdlib.h>

//stampa il massimo fra 4 numeri
int main(int argc, char *argv[])
{
int max, c, a;
printf("inserisci il primo valore: ");
scanf("%d", &max);
c = 0;
while(c < 3)
    {
    printf("Inserisci il valore %d: ", c+2);
    scanf("%d", &a);
    if(a > max)
        max = a;
    c++;
    }
printf("Il valore massimo è: %d\n", max);

return 0;
}