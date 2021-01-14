#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  char a;
  
 printf("inserisci una lettera minuscola:");
 a=getchar();

 while (a<'a' || a>'z')
 {
    a=getchar();

    
 }
  
 printf("la lettera e': %c\n", a); 
  
  
  
  	
  return 0;
}