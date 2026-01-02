#include <stdio.h>
#include <stdbool.h>
#include <math.h>

//PROTOTIPO della funzione cubo().
double cubo(double x);

int main() {

double z;

//Prendo z da Input Utente.
printf("Inserire un numero reale: ");
scanf("%lf", &z);

/*
Evoco cubo() e ... basta.
*/

printf("\nIl valore %lf al cubo vale: %lf\n", z, cubo(z));

return 0;

}

double cubo(double x) {
return pow(x, 3);
}