#include <stdio.h>
#include <stdlib.h>
//aggiungere commenti
int decToBin(int bitbox[], int n)
    {
        int bit;
        int i;
    

    for(i=0; n > 0 ; i++)
        {
        bitbox[i]= n % 2;
        n = n / 2;
        }

    return i;
    }

void stampaRev(int bitbox[], int dim)
    {
        int i;
        for(i=dim-1; i>=0; i--)
            {
            printf("%d\t",bitbox[i]);
            }
    }


int main(int argc, char const *argv[])
{
    int n;
    int bitbox[100];
    int dim;

    printf("Inserisci un numero decimale: ");
    scanf("%d",&n);

    dim = decToBin(bitbox, n);
    stampaRev(bitbox, dim);
    return 0;
}