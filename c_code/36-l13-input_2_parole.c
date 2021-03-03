#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#define DIM 50
#define INVIO 13

/* programma che legge due parole composte da lettere minuscole e termina con un invio e verifica che siano uguali */

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

/**funzione che legge una  parola formata da più caratteri minuscoli e la restituisce come array premendo INVIO
* fa uso di una funzione leggiLettera
*@return il numero di lettere che sono state inserite*/
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

/**funzione che mette a confronto due parole sotto forma di array e dice se sono uguali o meno
*/
void confrontaParole(char parola1[], char parola2[], int nl1, int nl2)
{
	int i, dif; 
	dif=0, i=0;

	if (nl1!=nl2)
	{
		printf("\nLe due parole non sono uguali");
	}
	else
	{
		while (i<nl1)
		{
			if(parola1[i]!=parola2[i])
			{
				dif++;
			}
			i++;
		}
		
		if(dif==0)
		{
			printf("\nLe due parole sono uguali");
		}
		else
		{
			printf("\nLe due parole non sono uguali");
		}
	}

}

//main
int main(int argc, char *argv[]) 
{
	char parola1[DIM], parola2[DIM];
	int nl1,nl2;
	
	printf("Inserisci la prima parola: ");
	nl1=leggiParola(parola1, DIM);
	
	printf("\n");
	
	printf("Inserisci la seconda parola: ");
	nl2=leggiParola(parola2, DIM);
	
	confrontaParole(parola1, parola2, nl1, nl2);
	return 0;
}