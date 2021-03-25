#include <stdio.h>
#include <stdlib.h>

int decToBin(int n, int bitbox[])
    {
        int bit;
        int i = 0;
    

    while(n>0)
        {
        bitbox[i]= n % 2;
        n = n / 2;
        i++;
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

    dim = decToBin(n, bitbox);
    stampaRev(bitbox, dim);
    return 0;
}