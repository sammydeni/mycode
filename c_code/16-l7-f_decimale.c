#include <stdio.h>
#include <stdlib.h>

int leggiCifra()
    {
        int a;
    scanf("%d",&a);
    while (a < 0 || a > 9)
    {
        scanf("%d",&a);
    }
    return(a);
    }
    

int main(int argc, char const *argv[])
{
    int cifra;

    printf("Inserisci una cifra tra 0 e 9: ");
    cifra=leggiCifra();
    printf("La cifra e' %d\n", cifra);
    return 0;
}
