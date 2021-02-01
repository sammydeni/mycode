#include <stdio.h>
#include <stdlib.h>
//programma che chiede in input 10 valori da inserire in un array e li stampa a ritroso
#define N 10

// @return chiede i valori all'utente e li inserisce nell'array, poi lo restituisce
int * inputArray()
{
    int i;
    static int input_a[N];
    for(i=0; i<N; i++)
    {
        printf("\ninserisci un valore: ");
        scanf("%d", &input_a[i]);
    }
    return input_a;
}

// @return calcola la somma di tutti gli elementi dell'array
int sommaTotale(int box[])
{
 int somma = 0, i;
 for (i=0; i<N; i++)
    {
    somma+=box[i];
    }
return somma;
}

// @return calcola la media degli elementi dell'array
float calcolaMedia(int box[])
{
int somma, i;
float media;
somma = sommaTotale(box);
media =(float) somma / N;
return media;
}


int main(int argc, char const *argv[])
{
    int *box, tot;
    float media;
    box = inputArray();
    tot = sommaTotale(box);
    media = calcolaMedia(box);

    printf("La somma totale e': %d\n", tot);
    printf("La media e': %.2f\n", media);

    return 0;
}
