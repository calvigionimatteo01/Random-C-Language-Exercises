#include <stdio.h>
#include <math.h>
#define LGT 5

int main() {

double v[LGT] = {3.14, 3.15, 3.16, 3.17, 3.18};

for (int j = 0; j < LGT; j++) {
printf("v[%d] == %lf.\n", j, v[j]);
}

printf("\n\n");

//indirizzi di memoria CONGRUENTI
printf("&v[0] == %p.\n", (void*)&v[0]);
printf("&v[0] == %p.\n", (void*)v);

printf("\n\n");

//Puntatore a DOUBLE
double *ptr = v;

//Normalizzo gli M_PI
for (int i = 0; i < LGT; i++) {
*ptr = M_PI;
ptr++;
}

ptr = v;

for (int i = 0; i < LGT; i++) {

printf("v[%d] == %lf.\n", i, *(ptr + i));

}

return 0;

}