#include <stdio.h>
#include <stdlib.h>

#define DIM 100
#define INVIO 13
#define SPAZIO 32

/*programma che permette di trovare la lettera maggiormente ripetuta e quante volte viene ripetuta

/**funzione che legge e ritorna una lettera minuscola, maiuscola, INVIO o SPAZIO
*@return lettera minuscola, maiuscola, SPAZIO o INVIO*/
char leggiLettera()
{
	char lettera;
	lettera=getch();
	
	while((lettera<'A' && lettera!= INVIO && lettera!= SPAZIO) || (lettera>'Z' && lettera<'a')|| lettera>'z')
	{
		lettera=getch();
	}
	
	return (lettera);
	
}

/**funzione che legge una frase terminata da INVIO
*@return num lettere della frase*/
int leggiFrase(char frase[], int dim)
{
	int i;
	char lettera;
	lettera=leggiLettera();
	
	for(i=0; lettera!=INVIO && i<dim; i++)
	{
		if(lettera==SPAZIO)
		{
			printf("%c", lettera);
			lettera=leggiLettera();	
			i--;
		}
		else
		{
			frase[i]=lettera;
			printf("%c", lettera);
			lettera=leggiLettera();	
		}
	}

	return(i);
}

/**funzione che riceve una lettera e la restituisce MAIUSCOLA
*@return la corrispondente lettera MAIUSCOLA
*/
char capitalizza(char lettera)
{
	int distanzaAlpha;
	distanzaAlpha='a'-'A';
	
	if(lettera>='a'&& lettera<='z')
	{
		lettera=lettera-distanzaAlpha;
	}
	return(lettera);
}

//funzione che conta e stampa il numero di ogni lettera presente nella frase

void contalettere(char frase[], char alfabeto[], int dim)
{
	int i, indice;
	
	//inizializzo la conta di ogni lettera dell'array alfabeto
	for(i=0; i<26; i++)
	{
		alfabeto[i]=0;
	}
	
	for(i=0; i<dim; i++)
	{
		indice=capitalizza(frase[i])-'A'; //sottraggo dalla lettera capitalizzata la 'A' e ottengo l'indice per l'array alfabeto
		alfabeto[indice]++;
	}
}

//funzione che trova la lettera maggiormente ripetuta e il numero di volte che viene ripetuta
void letteraRipetuta(char alfabeto[], char *lettera, int *volte)
{
	int i;
	char l;
	*lettera='A';
	*volte=alfabeto[0];
	
	for(i=0, l='A'; i<26 && l<='Z'; i++, l++) ///cerco la lettera piú utilizata
	{
		if(alfabeto[i]>*volte)
		{
			*lettera=l;
			*volte=alfabeto[i];
		}
	}
}

//main
int main(int argc, char *argv[]) 
{
	char frase[DIM], alfabeto[26], lettera;
	int nlettere, volte;
	
	printf("Introduci una frase: ");
	nlettere=leggiFrase(frase, DIM);
	
	contalettere(frase, alfabeto, nlettere);
	
	letteraRipetuta(alfabeto, &lettera, &volte);
	
	printf("\nLa lettera maggiormente usata e' la %c (usata %d volte)", lettera, volte);
	
	return 0;
}