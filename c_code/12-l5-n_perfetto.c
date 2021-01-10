//verifica numero perfetto
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int n, i, s=0;
    printf("Inserisci un numero: ");
    scanf("%d",&n);

    for(i=1; i<n; i++)
    {
    if(n%i==0)
        s+=i;
    }
    if(n==s)
        printf("%d e' un numero perfetto!\n",n);
    else
        printf("%d NON e' un numero perfetto!\n",n);
    return 0;
}
