#include <stdio.h>
#include <stdlib.h>
//programma che legge un tot di valori e li inserisce nel vettore

// @return chiede i valori all'utente e li inserisce nell'array, poi lo restituisce
int inputArray(int box[], int n)
{
    int i;

    for(i=0; i<n; i++)
    {
        printf("\ninserisci un valore: ");
        scanf("%d", &box[i]);
    }
    return 0;
}

// @return stampa i valori dell'array
int stampaVet(int box[], int n)
{
    int i;
    for(i=0; i<n ; i++)
    {
    printf("%d\t", box[i]);
    }
    return 0;
}

// @return funzione che restituisce la somma dell'array
int sommaArray(int box[], int n)
{
    int i,s=0;
    for(i=0;i<n;i++)
    {
        s+=box[i];
    }
    return s;
}

int main(int argc, char const *argv[])
{
    int box[100], n, s;
    printf("Quanti valori vuoi inserire? ");
    scanf("%d",&n);
    inputArray(box,n);
    stampaVet(box,n);
    s= sommaArray(box,n);
    printf("\nLa somma dell'Array e': %d\n",s);
    return 0;
}
