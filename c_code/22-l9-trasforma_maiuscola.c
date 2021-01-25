#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

char inputLettera()
    {
    char a;
  
    printf("inserisci una lettera: ");
    a=getch();
    while ((a<'a' || a>'z') || (a<'A' || a>'Z'))
    {
        a=getch();
    }
    return a;
    }

char inMaiuscola()
    {
    char k;
    k = inputLettera();
    if (k > 'Z')
        {
        k-=32;
        }
    return k;
    }

int main(int argc, char *argv[])
{
 char a;
a = inMaiuscola();
printf("\nla lettera e': %c\n", a); 
  return 0;
}