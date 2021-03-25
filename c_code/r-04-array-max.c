#include <stdio.h>
#include <stdlib.h>
#define DIM 5

/* calcolo massimo su array */

/** funzione che carica un array con valori inseriti dall'utente
*@PARAM v vettore
*@PARAM dim dimensione del vettore
*@MODIFY vettore coi valori caricati
*/
void caricaArray(int v[], int dim)
{
	int i, n;
	for(i=0; i<dim; i++)
	{
		scanf("%d", &n);
		v[i]=n;	
	}
}

/** funzione che calcola il massimo valore presente in un array
 * @PARAM v vettore
 * @PARAM dim dimensione del vettore 
*/
int maxArray(int v[], int dim)
    {
    int i;
    int max = v[0];
    for(i=1; i< dim; i++)
        {
            if(v[i] > max)
                {
                max = v[i];
                }
        }
    return max;
    }

int main(int argc, char *argv[]) 
{
	int vet[DIM];
	printf("introduci array: \n[");
	caricaArray(vet, DIM);
	printf("]\n");
    printf("Il massimo e' %d",maxArray(vet, DIM ));
	return 0;
}

