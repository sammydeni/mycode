#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

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


int main(int argc, char *argv[]) {
	int numero;
	printf("Inserisci un numero: ");
	numero = leggiNumero();
	
	printf("\nIl numero e': %d", numero);
	return 0;
}