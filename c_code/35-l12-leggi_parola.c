#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

#define DIM 20
#define INVIO 13
// @return lettera inserita dall'utente
char leggiLettera() {
	char lettera;
	lettera = getch();
	while((lettera < 'a' || lettera > 'z') && lettera != INVIO) {
		lettera = getch();
	}
    return lettera;
}

int leggiParola(char parola[], int dim)
    {
    char lettera;
    int i;
    lettera = leggiLettera();
    for(i=0; lettera!=DIM && dim<i; i++)
        {
        parola[i] = lettera;
        lettera = leggiLettera();
        }
    return i;
    }

void stampaParola(char parola[], int nlettere)
    {
    int i;
    for(i=0; i< nlettere; i++)
        {
        printf("%c", &parola[i]);
        }
    }

int main(int argc, char *argv[]) {
	char parola[DIM];
    int nlettere;
    printf("Inserisci la parola: ");
    nlettere = leggiParola(parola, DIM);
    stampaParola(parola, nlettere);
	return 0;
}

//DA CORREGGERE PPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPDDDDDDDDDDDDDDDDDDDDDDDDDDDDD