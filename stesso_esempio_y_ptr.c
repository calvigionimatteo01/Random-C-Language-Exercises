#include <stdio.h>
#include <stdbool.h>

int main() {

int y = 44322;

printf("Valore di y: %d\n", y);

//OK, ora lavoriamo coi ptr.

printf("Indirizzo di memoria di y: %p\n", &y);

int *p_y = &y;

printf("Valore di y: %d\n", *p_y);
printf("Indirizzo di memoria di y: %p\n", p_y);

return 0;

}