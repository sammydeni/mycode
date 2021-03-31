#include <stdio.h>
#include <stdlib.h>

/** funzione che legge solo una lettera maiuscola
 * @RETURN lettera maiuscola
*/
char leggiMaiuscola()
    {
         char a;
  
    printf("inserisci una lettera maiuscola:");
    a=getch();

    while (a<'A' || a>'Z')
    {
        a=getch();

        
    }
    return a;
        }


int main(int argc, char *argv[])
{
 char lettera;

 lettera = leggiMaiuscola(); 
  printf("La lettera inserita e' %c\n",lettera);
  
  
  	
  return 0;
}