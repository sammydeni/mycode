#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int n;
    printf("Inserisci un numero: ");
    scanf("%d",&n);
    if(n%2==0)
        printf("E' pari!\n");
    else
        printf("E' dispari!\n");
    return 0;
}
