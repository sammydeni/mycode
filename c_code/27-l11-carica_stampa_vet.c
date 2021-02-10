#include <stdio.h>
#include <stdlib.h>
//programma che legge un tot di valori e li inserisce nel vettore

//dichiaro l'array e la sua dimensione globalmente
int box[100];
int n;

// @return chiede i valori all'utente e li inserisce nell'array, poi lo restituisce
int inputArray()
{
    int i;
    printf("Quanti valori vuoi inserire? ");
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        printf("\ninserisci un valore: ");
        scanf("%d", &box[i]);
    }
    return 0;
}


// @return stampa i valori dell'array
int stampaVet()
{
    int i;
    for(i=0; i<n ; i++)
    {
    printf("%d\t", box[i]);
    }
    return 0;
}


int main(int argc, char const *argv[])
{
    inputArray();
    stampaVet();

    return 0;
}
