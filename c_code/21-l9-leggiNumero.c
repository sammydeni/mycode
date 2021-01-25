#include <stdio.h>
#include <stdlib.h>

int leggiCifra()
{
	char cifra;
	cifra=getchar();
	while(cifra<'0' || cifra>'9')
	{
		cifra=getchar();
	}
	cifra=cifra-'0'; 
	return(cifra);
}



int main(int argc, char *argv[]) 
{
	int cifra, c, n=0,e= 1000;
	printf("Inserisci 4 cifre decimali: ");
	for(c=0;c<4;c++)
	{
		cifra=leggiCifra();	
        n+=cifra*e;
        e=e/10;
    }
    printf("Il numero e': %d\n", n);
	return 0;
}