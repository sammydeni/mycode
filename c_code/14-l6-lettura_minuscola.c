#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  char a;
  
 printf("inserisci una lettera minuscola:");
 scanf(" %c",&a); 


 while (a<'a' || a>'z')
 {
    printf("Errore! Inserisci lettera minuscola: ");
    scanf(" %c",&a);

    
 }
  
 printf("la lettera e': %c\n", a); 
  
  
  
  	
  return 0;
}