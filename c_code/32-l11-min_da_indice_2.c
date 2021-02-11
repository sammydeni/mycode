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

//@return restituisce l'indice del valore minimo partendo da una posizione passata come parametro
int indiceMin(int box[], int n, int p)
{
    int i, min = box[p], indice = p;
    for(i=p; i<n;i++)
    {
    if(box[i] < min)
        {
        min = box[i];
        indice = i; 
        }
    }
    return indice;
}

int main(int argc, char const *argv[])
{
    int box[100], n, p, indice;
    printf("Quanti valori vuoi inserire? ");
    scanf("%d",&n);
    inputArray(box,n);
    stampaVet(box,n);
    printf("\nInserisci la posizione da cui partire per trovare il min: ");
    scanf("%d",&p);
    indice = indiceMin(box,n,p);
    printf("\nL'indice del valore minimo e': %d",indice);
    return 0;
}
