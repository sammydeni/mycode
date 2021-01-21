/* programma che stampa le tabelline del 2, 3, etc */



/**funzione che stampa la tabellina del parametro b

*@param b base della tabellina che viene stampata */

void stampaTabellina(int b)
{
	int n, limite;
	limite=b*10;
	for(n=b;n<=limite;n=n+b)
	{
		printf("%d\t", n);
	}
}
int main(int argc, char *argv[]) 
{
	int b;
	for(b=2;b<10;b++)
	{
		stampaTabellina(b); //stampo la riga della tabellina prima del 2, poi del 3, etc
		printf("\n");
	}
	return 0;
}