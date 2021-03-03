#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#define DIM 30
#define INVIO 13
/* programma che ricerca una lettera e stampa quante lettere uguali ha trovato nella parola */

/** funzione che legge e ritorna una lettera minuscola o INVIO
* @return lettera minuscola o INVIO
*/
char leggiLettera()
{
	char lettera;
	lettera=getch();
	
	while((lettera<'a' && lettera!= INVIO) || lettera>'z')
	{
		lettera=getch();
	}
	
	return (lettera);
	
}

int leggiParola(char parola[], int dim)
{
	int i;
	char lettera;
	lettera=leggiLettera();
	
	for(i=0; lettera!=INVIO && i<dim; i++)
	{
		parola[i]=lettera;
		printf("%c", lettera);
		lettera=leggiLettera();			
	}

	return(i);
}

void stampaArray(char parola[], int dim)
{
	int i;
	for(i=0; i<dim; i++)
	{
		printf("%c", parola[i]);
	}
}
// funzione che mi dice se una parola è palindroma o no
void controlloPalindroma(char parola[], int dim)
{
    int i;
    int countdown = dim;
    int controllo = 0;
    char reverse[dim];

    for(i=0; i<dim; i++)   //inverto la frase
    {
        reverse[countdown-1] = parola[i];
        countdown--;
    }

    for(i=0; i<dim; i++)
    {
        if(parola[i] == reverse[i])
        controllo++;
    }
    if(dim == controllo)
        printf("\nLa frase/parola e' palindroma!\n");
    else
        printf("\nLa frase/parola NON e' palindroma!\n");


}

int main(int argc, char *argv[]) 
{
	char parola[DIM];
    char ricerca;
	int nlettere;
	printf("Introduci la parola (lettere minuscole, terminate da INVIO): ");
	nlettere=leggiParola(parola, DIM);
	printf("\n");
	stampaArray(parola, nlettere);
    controlloPalindroma(parola, nlettere);
	return 0;
}