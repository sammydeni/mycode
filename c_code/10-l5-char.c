#include <stdio.h>
#include <stdlib.h>

/* giocare coi caratteri */

int main(int argc, char *argv[]) 
{
	
	int a;
	float r;
	
	char c;  /*dichiarare una variabile charater*/
	
	c='a';   /*inizializzare una variabile character*/
	
	c=c+1;  /*prendo il carattere 'a' + 1 = il carattere 'b'*/
	
	for(c='a'; c<='z'; c++)
	{
		printf ("%c ", c);
	}
	
    c=getch();
	
	
	
	
	
	
	return 0;
}
