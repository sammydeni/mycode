#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

//programma dei distributori di uno smartphone

// @return funzione che stampa le opzioni del menù
int stampaOpzioni()
{
    printf("\n\n-- Elenco Opzioni --");
    printf("\n 1 --> Carica i distributori");
    printf("\n 2 --> Stampa dei distributori");
    printf("\n 3 --> Prezzo medio dello smartphone");
    printf("\n 4 --> Cerca smartphone in base al prezzo");
    printf("\n 0 --> Termina il programma");
    printf("\n -- -- -- -- -- --");
    printf("\nInserisci il numero dell'opzione: ");
}


// @return funzione che fa caricare il vettore all'utente
int caricaDist(int dist[], int n, bool *carico)
{
    int i;
    printf("\n-- Caricamento dei distributori --");
    printf("\nQuanti distributori vuoi caricare? --> ");
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        printf("Inserisci il prezzo dello smartphone del distributore %d --> ", i);
        scanf("%d",&dist[i]);
    } 
    *carico = true;
    return n;
}


// @return funzione che stampa i distributori e il prezzo dello smartphone
int stampaDist(int dist[], int n)
{
    int i;
    printf("\n-- Stampa dei distributori --");
    for(i=1; i<=n; i++)
    {
        printf("\n Distributore [%d] --> Prezzo $%d", i, dist[i]);
    }
    return 0;
}


// @return funzione che calcola il prezzo medio dello smartphone e lo restituisce
float prezzoMedio(int dist[], int n, float media)
{
    int i, somma = 0;
    printf("\n-- Calcolo del prezzo medio");
    for(i=1; i<=n; i++)
    {
        somma+=dist[i];
    }
    media = (float) somma / n;
    return media;
}


// @return funzione che stampa numero distributore e prezzo smartphone sotto un prezzo dato in input
int cercaPrezzo(int dist[], int n)
{
    int i, prezzo;
    printf("\nInserisci il prezzo massimo --> ");
    scanf("%d",&prezzo);
    printf("\n- - - - - Distributori Trovati - - - - -");
    for(i=1; i<=n; i++)
    {
        if (dist[i] < prezzo)
        {
            printf("\n Distributore [%d] --> Prezzo $%d", i, dist[i]);
        }    
    }
    printf("\n- - - - - - - - - - - - - - - - - - - - -");
    return 0;
}


int main(int argc, char *argv[]) 
{
	int scelta, dist[50], n;
    bool carico = false;
    stampaOpzioni(); 
	scanf("%d", &scelta);

	while(scelta!=0)
	{
		switch(scelta)
		{
			case 0:
				break;
			case 1:
				n = caricaDist(dist, n, &carico);
				break;
			case 2:
                if (carico == true)
				    stampaDist(dist, n);
                else
                    printf("\nDevi prima caricare i Distributori!!");
				break;
            case 3:
                if (carico == true)
				    {
                        float media;
                        media = prezzoMedio(dist, n, media);
                        printf("\n Il prezzo medio dello smartphone e' %.2f", media);
                    }
                else
                    printf("\nDevi prima caricare i Distributori!!");
                break;
            case 4:
                if (carico == true)
				    {
                        cercaPrezzo(dist, n);
                    }
                else
                    printf("\nDevi prima caricare i Distributori!!");
                break;
			default:
				printf("errore di digitazione");
		}
		stampaOpzioni();	
		scanf("%d", &scelta);
	}
	return 0;
}
