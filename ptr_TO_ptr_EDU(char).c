#include <stdio.h>

int main(void) {

char x = 'A';
char y = 'B';
char z = 'C';

char *p1 = &x;
char *p2 = &y;
char *p3 = &z;

//Array di puntatori a char.
char *r[3];
r[0] = p1;
r[1] = p2;
r[2] = p3;

//Puntatore a puntatore a char.
char **pp;
pp = r;

//Stampiamo cose rilevanti (!)

//Inizio stampando i 3 char,
//direttamente con notazione - array.
printf("%c ", pp[0][0]);
printf("%c ", pp[1][0]);
printf("%c ", pp[2][0]);

printf("\n\n");

//Stampiamo indirizzi di memoria.
printf("%p.\n", (void*)&(**pp));
printf("===\n");
printf("%p.\n", (void*)&x);

printf("\n\n");

printf("%p.\n", (void*)&(**(pp + 1)));
printf("===\n");
printf("%p.\n", (void*)&y);

printf("\n\n");

printf("%p.\n", (void*)&(**(pp + 2)));
printf("===\n");
printf("%p.\n", (void*)&z);

return(0);
}