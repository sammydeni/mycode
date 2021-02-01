#include <stdio.h>
#include <stdlib.h>
//programma che chiede in input 10 valori da inserire in un array e stampa il massimo e il minimo
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


// @return stampa il massimo dei valori di un array ricevuto come parametro
int stampaMax(int box[])
{
int i, max = box[0];
for(i=0; i<N;i++)
    {
    if(box[i] > max)
        max = box[i];
    }
return max;
}

// @return stampa il minimo dei valori di un array ricevuto come parametro
int stampaMin(int box[])
{
int i, min = box[0];
for(i=0; i<N;i++)
    {
    if(box[i] < min)
        min = box[i];
    }
return min;
}


int main(int argc, char const *argv[])
{
    int *box, max, min;
    box = inputArray();
    max = stampaMax(box);
    min = stampaMin(box);
    printf("Il massimo e': %d\n", max);
    printf("Il minimo e': %d\n", min);
    return 0;
}
