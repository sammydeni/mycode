#include <stdio.h>
#include <stdlib.h>

int leggiCifra()
    {
        char a;
    a=getchar();
    while (a < '0' || a > '9')
    {
        a=getchar();
    }
    a-='0';
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
