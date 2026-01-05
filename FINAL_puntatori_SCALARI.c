#include <stdio.h>


int main() {

double a = 3.1415;
printf("Il double vale: %lf.\n", a);
printf("L'indirizzo di memoria del double è: %p.\n", &a);

/*
Creo una variabile di tipo di dato DERIVATO
puntatore a double, poi la Inizializzazione
a puntare a.  
*/
double *x; // * = Operatore di INdirezione
x = &a; 

//Scrivo a schermo la stessa cosa ...

printf("Il double vale: %lf.\n", *x);
printf("L'indirizzo di memoria del double è: %p.\n", x);

*x = 2.7182;

/*
Ho semplicemente modificato il valore
di a tramite l'operatore di INdirezione.
*/

printf("Ora il double vale: %lf.\n", *x);

//Giochino con (*x)++, incremento semplicemente a.
(*x)++;

printf("Ora il double vale: %lf.\n", *x);

return 0;

}