#include <stdio.h>
#include <stdlib.h>

// MasterMind

/**funzione leggiLettera modificata in modo tale che sia in grado di leggere solo 4 lettere 
*@return lettera char */
char leggiLettera()
{
	char lettera;
	lettera=getch();
	
	while(lettera !='r' && lettera !='g' && lettera !='b' && lettera !='v' 
			&& lettera !='R' && lettera !='G' && lettera !='B' && lettera !='V'  )
	{
		lettera=getch();
	}
	
	return (lettera);	
}

/**funzione che riceve una lettera (MAIUSCOLA o minuscola) e la trasforma in MAIUSCOLA
*@param lettera maiuscola o minuscola 
*@return la corrispondente lettera MAIUSCOLA*/
char capitalizza(char lettera)
{
	int distanzaAa;
	distanzaAa='a'-'A';
	
	if(lettera>='a'&& lettera<='z')
	{
		lettera=lettera-distanzaAa;
	}
	return(lettera);
}

/**funzione che legge un PIN (4 caratteri) e li stampa come *
*@param codice[] array 
*@param copia[ array
**@param dim array*/
void leggiPin(char pin[], char copia[], int dim)
{
	int i;
	char lettera;
	
	for(i=0; i<dim; i++)
	{
		lettera=capitalizza(leggiLettera());
		codice[i]=lettera;
		copia[i] = pin[i]; 
		printf("*");		
	}
}

/**funzione che legge il tentativo dell'utente e si blocca a 4 caratteri
*@param tentativo[] array 
**@param dim array*/
void leggiTent(char pin[], int dim)
{
	int i;
	char lettera;
	
	for(i=0; i<dim; i++)
	{
		lettera=capitalizza(leggiLettera());
		pin[i]=lettera; 
		printf("%c", lettera);		
	}
}

/**funzione che restituisce il numero di lettere indovinate e al posto giusto
*@param copia array
*@param tentativo array
*@param dim array
*@return numero di O da stampare*/
int giustogiusto(char copia[], char tentativo[], int dim)
{
	int i, countO = 0;
	
	for(i=0; i<dim; i++)
	{
		if(copia[i]==tentativo[i])
		{
			countO++;
			copia[i]= 'X';
			tentativo[i]= 'Y';
		}
	}
	
	return countO;
}

/**funzione che restituisce il numero di lettere indovinate ma al posto sbagliato
*@param copia array
*@param tentativo array
*@param dim array
*@return numero di o da stampare*/
int giustosbagliato(char copia[], char tentativo[], int dim)
{
	int i, j, counto = 0;
	
	for(i=0; i<dim; i++)
	{
		for(j=0; j<dim; j++)
		{
			if(copia[i]==tentativo[j])
			{
				counto++;
				copia[i]='X';
				tentativo[j]='Y';
			}
		}
	}
	
	return counto;
}

/**main*/
int main(int argc, char *argv[]) {
	
	char pin[4], tentativo[4], copia[4];
	int numtent, dim, numO, numo, i, max;
	max=11;
	dim=4;
	
	printf("Inserisci il codice da indovinare(solo RGBV):");
	leggiCodice(pin, copia, dim); 
	
	for(numtent=1; numtent<max; numtent++)
	{
		printf("\nInserisci tentativo numero %d(solo RVGB):", numtent);
		leggiTent(tentativo, dim);
		
		numO = giustogiusto(copia, tentativo, dim);
		numo = giustosbagliato(copia, tentativo, dim);
		
		printf("\n");
		
		for(i=0; i<numO; i++) //ciclo che stampa il numero di lettere del colore giusto e nella posizione giusta
		{
			printf("O");
		}
		for(i=0; i<numo; i++) //ciclo che stampa il numero di lettere del colore giusto ma nella posizione sbagliata
		{
			printf("o");
		}
		
		if(numO==4)
		{
			numtent=max;
		}
		
		for(i=0; i<dim; i++)
		{
			copia[i]=pin[i];
		}
	}
	
	if(numO==4)
	{
		printf("\nBravo hai indovinato il codice segreto!!!");
	}
	else
	{
		printf("\nHai perso!!!");
	}	
	
	return 0;
}