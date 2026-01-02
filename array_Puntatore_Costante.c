#include <stdio.h>
#include <math.h>
#include <stdbool.h>

#define MC 10

//Array in Binario di 10 elementi.

int main() {

unsigned int mod = 2;

unsigned int z[MC];

for (int i = 0; i < MC; i++) {
z[i] = i % mod;
printf("%d ", z[i]);
}

printf("\n");

//Facciamo qualcosa con i Puntatori.

unsigned int *q;
//Si ricorda che un Array è: un Puntatore
//Costante alla sua prima cella. 

q = z;
//Faccio puntare la seconda cella.
q++;

printf("Ecco quà l'Uno: %d\n", *q);

//Torno indietro alla prima cella.
q--;

printf("Ecco quà lo Zero: %d\n", *q);

return 0;

}