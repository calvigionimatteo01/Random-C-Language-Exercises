#include <stdio.h>
#include <math.h>

//Prototipo della funzione che voglio creare.
double switchBase_log(double x, double base);

int main() {

double x, base;

//Prendo in Input i Dati dall'Utente.
printf("Inserire il valore di x: ");
scanf("%lf", &x);

printf("\nInserire il valore della base: ");
scanf("%lf", &base);

printf("\nIl logaritmo naturale di %lf è: %lf", x, log(x));

//OK, tutto chiaro. Possiamo cominciare a lavorarci.

printf("\nIl logaritmo in base %lf di %lf è: %lf", base, x, switchBase_log(x, base));

return 0;

}

//Definizione della funzione switchBase_log().
double switchBase_log(double x, double base) {
return log(x) / log(base);
}