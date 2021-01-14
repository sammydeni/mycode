#include <stdio.h>

#include <stdlib.h>



/* programma che permette la lettura di una cifra come carattere, utilizzando una funzione */



/** funzione che legge una cifra come carattere e restituisce il corrispondente valore decimale

* @return valore numerico della cifra decimale inserita dall'utente

*/

int leggiCifra()

{

	char cifra;

	

	cifra=getchar();

	while(cifra<'0' || cifra>'9')

	{

		cifra=getchar();

	}

	

	cifra=cifra-'0'; // dal carattere ottengo il valore numerico corrispondente

	return(cifra);

	

}



int main(int argc, char *argv[]) 

{

	int cifra, c, n=0,e= 1000;

	printf("Introduci 4 cifre decimali: ");

	for(c=0;c<4;c++)

	{



		cifra=leggiCifra();	
        n+=cifra*e;
        e=e/10;
    }

    printf("Il numero e': %d", n);

	

	return 0;

}