#include <stdio.h>
#include <stdbool.h>

int main() {

int z = 1;

printf("%p\n", &z);

//Creo, ora, un puntatore.

int *ptr_z = &z;

printf("%p\n", ptr_z);

//Stampo la variabile "z" a schermo
//, tramite il ptr_z.

printf("%d\n", *ptr_z);

return 0;

}