#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

// programma che converte da binario a decimale

// @ converte un numero binario in decimale e lo restituisce
int leggiBit() {
	char bit;
	bit = getch();
	while((bit < '0' || bit > '1') && bit !='\r') {
		bit = getch();
	}
	return (int) bit - '0';
}

// @return converto il numero binario in decimale
int convertiInDecimale() {
	int bit, num = 0;
	bit = leggiBit();
	while(bit >= 0) {
		printf("%d", bit); //faccio visualizzare il numero binario
		num =  (num * 2) + bit;
		bit = leggiBit();
	}
	return num;
}

int main(int argc, char *argv[]) {
	int num;
	printf("\nInserire numero: ");
	num = convertiInDecimale();
	printf("\nIl numero e': %d", num);
}