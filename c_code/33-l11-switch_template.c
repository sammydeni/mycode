#include <stdio.h>
#include <stdlib.h>

/* menu */
int main(int argc, char *argv[]) 
{
	int scelta;

	printf("\n0. uscita");
	printf("\n1. carimento");
	printf("\n2. stampa");
	printf("\nIntroduci scelta: ");
	scanf("%d", &scelta);

	while(scelta!=0)
	{
		switch(scelta)
		{
			case 0:
				break;
			case 1:
				printf("eseguire il caricamento");
				break;
			case 2:
				printf("eseguire la stampa");
				break;
			default:
				printf("errore di digitazione");
		}
		printf("\n0. uscita");
		printf("\n1. carimento");
		printf("\n2. stampa");
		printf("\nIntroduci scelta: ");	
		scanf("%d", &scelta);
	}
	return 0;
}
