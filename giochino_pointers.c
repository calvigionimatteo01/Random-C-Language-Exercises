#include <stdio.h>
#include <math.h>
#include <stdbool.h>

#define M 4

int main() {

/*Un ARRAY è un PUNTATORE COSTANTE AL SUO
PRIMO ELEMENTO !!*/

double arr_Uno[M];

//Riempiamo a caso l'array dai.
for (int k = 0; k < M; k++) {

//Non posso mettere 0 dentro log() ...
arr_Uno[k] = log(k + 1);

}

//Fase Cruciale.
double *p = arr_Uno;

printf("%lf\n", arr_Uno[2]);
printf("Uguale valore: %lf\n", *(p + 2));

return 0;

}