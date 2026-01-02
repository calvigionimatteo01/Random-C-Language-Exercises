#include <stdio.h>

int main() {

int x = 0;
int y = 1;

//Prendo una variabile z di capsulamento.

int z = 2;

//Stampo a schermo le due variabili x ed y.

printf("%d\n", x);
printf("%d\n", y);

//Ora scambio le variabili x ed y,
//usando la variabile z come capsulamento.

z = x;
x = y;
y = z;

//Stampo a schermo le due variabili x ed y
//scambiate di valore.

printf("%d\n", x);
printf("%d\n", y);

return 0;

}