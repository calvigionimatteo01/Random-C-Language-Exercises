#include <stdio.h>

#define N 4

int main() {

int v[N];

for (int k = 0; k < N; k++) {

//Numeri dispari. 
v[k] = (2*k + 1);
printf("v[%d] == %d. ", k, (2*k + 1));

}

printf("\n\n");

/*
Creo un pointer ad INT e lo faccio puntare
al primo elemento dell'Array.
*/

int *p;
p = &v[0];

for (int k = 0; k < N; k++) {

//Numeri pari.
*(p + k) = 2*k;
printf("*(p + %d) == %d ", k, 2*k);
}

printf("\n\n");

return 0;

}