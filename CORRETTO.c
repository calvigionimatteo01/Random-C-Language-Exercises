#include <stdio.h>
#include <stdlib.h>

#define C 3

int main(void) {

//Livelli di indirezione: 
// qq --> p --> c. 
char c = 'a';
char *p = &c;
char **qq = &p;

printf("Il carattere è: %c.\n", c);
printf("È sempre: %c.\n", *p);
printf("Lo stesso: %c.\n", **qq);

printf("\n\n");

printf("L'indirizzo di memoria è: %p.\n", (void*)&c);
printf("È sempre: %p.\n", (void*)p);
printf("Lo stesso: %p.\n", (void*)*qq);

//Cambio qualcosa ... 

*p = 'b'; // c == 'b'.
(**qq)++; // sfruttando L'ANSI: c == 'c' (!)

printf("\n\n");

printf("Il carattere ORA è: %c.\n", c);

printf("\n\n");

/*Un array di puntatori a CHAR,
del resto, può essere associato
ad un double_Pointer a CHAR (!).
Ne dichiaro uno, ed alloco memoria 
in HEAP con malloc().
*/

char **pp = malloc(sizeof(char*) * C);

for (int k = 0; k < C; k++) {

pp[k] = malloc(sizeof(*(pp[k])));

/*
Nota; 
pp[k] è, semplicemente, un puntatore a CHAR.
Allocco la corretta memoria in HEAP,
per ciascun char puntato, con malloc().
*/

}

//Giusto per riempire l'array ...
int j = 0;

while (j < C) {

*(pp[j])  = 'C';
printf("*(p[%d]) == %c;\n", j, *(pp[j]));
j++;

}

for (int z = 0; z < C; z++) {
//Doveroso free() degli elementi interni,
//in primis (che sono puntatori a CHAR). 

free((pp[z]));

}

free(pp);

return(0);
}