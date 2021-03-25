#include <stdio.h>
#include <stdlib.h>
#define N 32
/**
 * funzione che inserisce i bit nell'array al contrario
 * @param binario[] - vettore di bit
 * @param n - dimensione dell'array
 * @param num - numero da codificare in binario
 * @return - numero di bit inseriti
 * @modify binario[] - modificato inserendo i bit della codifica
 */
int decimaleBinario(int binario[], int n, int num) {
 int i;
 for(i = 0; num > 0 && i < n; i++) {
  binario[i] = num % 2;
  num = num / 2;
 }
 return i;
}
/**
 * funzione che stampa un array al contrario
 * @param binario[] - vettore di bit
 * @param n - numero di bit
 */
void stampaRitroso(int binario[], int n) {
 int i;
 for(i = n - 1; i >= 0; i --) {
  printf("%d", binario[i]);
 }
}
int main(int argc, char *argv[]) {
 int num, nBit;
 int binario[N];
 printf("Inserire numero da convertire: ");
 scanf("%d", &num);
 nBit = decimaleBinario(binario, N, num);
 stampaRitroso(binario, nBit);
 return 0;
}