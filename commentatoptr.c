#include <stdio.h>
#include <stdbool.h>

int main() {

int x = 0;

printf("Valore di x: %d\n", x);

printf("Indirizzo di memoria di x: %p\n", &x);

int *ptr_x = &x;

printf("Stesso indirizzo di memoria di prima: %p\n", ptr_x);

printf("Stampo x tramite ptr: %d\n", *ptr_x);

return 0;

}