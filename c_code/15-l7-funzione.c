#include <stdio.h>
#include <stdlib.h>

char minuscola()
    {
    char lettera;
    lettera=getchar();
    while (lettera<'a' || lettera>'z')
    {
        lettera=getchar();
    }
    return(lettera);    
    }


int main(int argc, char const *argv[])
{
    char lettera, lettera2;

    printf("Inserisci lettera minuscola\n");
    lettera=minuscola();
    printf("Inserisci lettera minuscola\n");
    lettera2=minuscola();
    
    printf("%c %c", lettera,lettera2);

    return 0;
}
