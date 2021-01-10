#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  char car;
  
 printf("inserisci una cifra decimale (e solo una cifra):");
 car=getchar();

 while (car<'0' || car>'9')
 {
         car = getchar();
    
 }
  
 printf("\nla cifra e': %c\n", car); 
  
  
  
  	
  return 0;
}