#include <stdio.h>
#include <stdbool.h>

#define C 100

int main() {

/*
Gioco con l'operatore %,
l'operatore modulo.
*/

unsigned int a = 2;
unsigned int b = 3;

printf("3 mod 2 = %d\n", b % a);

//Un piccolo dettaglio di formattazione testo.
printf("3 %% 2 = %d\n", b % a);

//Ora faccio un Input Utente e vediamo se è Pari (0mod2)

unsigned int c;
printf("Inserire un intero: ");
scanf("%d", &c);

//Check per la Parità tramite l'operatore modulo %.

if ((c % 2) == 0) {
printf("Il numero %d è pari\n", c);
}
else {
printf("Il numero %d è dispari\n", c);
}

return 0;

}