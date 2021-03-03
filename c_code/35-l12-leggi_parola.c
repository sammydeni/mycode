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

void cercaLettera(char parola[], int dim, char ricerca)
{
    int i, conta=0;
    for(i=0; i<dim; i++)
    {
        if(parola[i]==ricerca)
        conta++;
    }
    printf("Nella frase sono presenti %d %c",conta, ricerca);
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
    printf("\nChe lettera vuoi cercare?");
    scanf("%c", &ricerca);
    cercaLettera(parola, nlettere, ricerca);

	return 0;
}