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


// @return stampa i valori dell'array ricevuto come paramentro a ritroso
int stampaRitroso(int box[])
{
    int i;
    for(i=9; i>=0 ; i--)
    {
    printf("%d\t", box[i]);
    }
    return 0;
}


int main(int argc, char const *argv[])
{
    int *box;
    box = inputArray();
    stampaRitroso(box);

    return 0;
}
