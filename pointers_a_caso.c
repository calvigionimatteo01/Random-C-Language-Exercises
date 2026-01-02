#include <stdio.h>
#include <stdbool.h>

#define X 300

int main() {

char x = 'F';

/*
Stampo x E indirizzo di memoria di x con printf().
*/
printf("Il carattere è: %c\n", x);
printf("Indirizzo di memoria di x: %p\n", &x);

/*
Ripeto la precedente operazione con i Puntatori.
*/

char *q = &x;

printf("Di nuovoo: %c\n", *q);
printf("Ok, ancora: %p\n", q);


return 0;

}