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

// @return funzione che scambia due valori del vettore usando gli indici ricevuti come paramentro
int scambiaXY(int x, int y)
{
    int s;
    s = box[x];
    box[x] = box[y];
    box[y] = s;

    return 0;
}

int main(int argc, char const *argv[])
{
    int x, y;
    inputArray();
    stampaVet(); //sstampo tutti i valori dell'array

    printf("Inserisci x: \n");
    scanf("%d",&x);
    printf("Inserisci y: \n");
    scanf("%d",&y);
    scambiaXY(x,y);

    stampaVet(); //ristampa l'array con i valori invertiti
    return 0;
}
