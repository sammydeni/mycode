#include <stdio.h>
#include <stdlib.h>
#define INVIO 13


/** funzione che legge una cifra decimale come carattere o il CR e restituisce il valore numerico corrispondente
*@return il valore intero corrispondente alla cifra letta come carattere oppure un valore negativo se si tratta di CR*/

int leggiCifra()
{
  char cifra;
  int intCifra;
  cifra=getch();
  
  while((cifra<'0' && cifra!=INVIO)|| cifra>'9')
  {
    cifra = getch();
   }
   
   intCifra=cifra-'0';
   
   return(intCifra);
}

/**funzione che legge un numero di tot cifre decimali come caratteri e restituisce il valore numerico corrispondente premendo INVIO
* fa uso di una funzione leggiCifra
*@return il numero intero corrispondente alle cifre lette in sequenza*/

int leggiNumero() {
    int cifra, n, ncifre;
  n=0;
    cifra = leggiCifra();
  ncifre=1;
    while(cifra >= 0 && ncifre<10) 
  {
        printf ("%d", cifra);
    n=(n*10)+cifra;
        cifra = leggiCifra();
        ncifre++;
    }
    return (n);
}

int main(int argc, char *argv[]) {
	int numero;
	printf("Inserisci un numero: ");
	numero = leggiNumero();
	
	printf("\nIl numero e': %d", numero);
	return 0;
}