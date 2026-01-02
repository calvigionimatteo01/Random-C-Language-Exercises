#include <stdio.h>
#include <stdbool.h>

#define CONST 100

int main() {

/*Giochiamo un attimo
coi puntatori, OK ?*/

double x = 3.68;

/*Stampo manualmente con printf():
1)%f, x ~> valore variabile double x
2)%p, &x ~> indirizzo di memoria variabile double x
*/

printf("Il valore dentro x è: %f\n", x);
printf("Indirizzo di memoria di x è: %p\n", &x); 

double *q = &x;

/*Dopo la dichiarazione,
e l'inizializzazione, del puntatore a double q,
posso riscrivere le stesse cose meglio.
*/

printf("Il valore dentro x è: %f\n", *q);
printf("Indirizzo di memoria di x è: %p\n", q);

return 0;

}