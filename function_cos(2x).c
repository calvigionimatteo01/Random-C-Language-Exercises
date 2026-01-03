#include <stdio.h>
#include <math.h>

/*
Piccolo programma che prototipa e definisce
una funzione per fare cos(2x) tramite la formula 
goniometrica associata.
*/

//PROTOTIPO DELLA FUNZIONE.
double cos_2theta(double theta);

int main() {

double x;
printf("Inserire la frazione di PI GRECO: ");
scanf("%lf", &x);

x = M_PI / x;

printf("x = %lf\ncos(2x) = %lf", x, cos_2theta(x));

return 0;
}

//DEFINIZIONE DELLA FUNZIONE.
double cos_2theta(double theta) {

return pow(cos(theta), 2) - pow(sin(theta), 2);

}