#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

//definisco un array globale per contenere i bit
int binario[100];

// @return cifra inserita dall'utente char --> int
int leggiCifra() {
	char cifra;
	cifra = getch();
	while((cifra < '0' || cifra > '9') && cifra != 13) {
		cifra = getch();
		
	}
	return (int) cifra - 48;
}

// @return numero intero
int leggiNumero() {
	int numero=0, cifra;
	cifra = leggiCifra();
	while(cifra != -35)
	{
	printf("%d",cifra);
	numero = (numero * 10) + cifra;
	cifra = leggiCifra();
	}
	return numero;
} 

// @return funzione che converte un numero decimale in binario
int DecToBin(int numero)
{
	int i=0;
	while (numero > 0) 
	{
	binario[i] = numero%2;
	numero = numero / 2;
	i++;
	}
	return i;
}

// @return funzione che stampa un array a ritroso
int stampaRitroso(int n)
{
    int i;
	printf("\n");
    for(i=n-1; i>=0 ; i--)
    {
	
    printf("%d\t", binario[i]);
    }
    return 0;
}

int main(int argc, char *argv[]) {
	int numero, n=0;
	printf("Inserisci un numero: ");
	numero = leggiNumero();
	n = DecToBin(numero);
	stampaRitroso(n);
	
}