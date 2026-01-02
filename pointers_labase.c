#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int main() {

unsigned int m = 0;

unsigned int *p = &m;

//Mi aspetto 2 Valori Uguali, ovvio.
printf("%d\n", m);
printf("%d\n", *p);

//Cambio il valore della Variabile m.

*p = 1;

//Mi aspetto che Stampi 1.
printf("%d\n", *p);

return 0;

}