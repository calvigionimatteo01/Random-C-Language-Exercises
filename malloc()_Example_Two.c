//malloc()_Exercise_Two
#include <stdio.h>
#include <stdlib.h>

/*Userò ancora malloc()
a scopo di printf(), banale,
per poter familiarizzare meglio con 
malloc(). Useremo i char.
*/

int main(void) {

//Lavoro in STACK - MEMORY.
char c = 'a';
char v[30] = "Stringa";
char *ptr = &c;

printf("Dimensione in BYTE di char: %zu.\n", sizeof(c));
printf("Dimensione in BYTE di v: %zu.\n", sizeof(v));
printf("Dimensione in BYTE di puntatore a char: %zu.\n", sizeof(ptr));

//Lavoro in HEAP - MEMORY

char *d = malloc(sizeof(char));
//Esperimento sul secondo ptr e. Metto (*300). 
char *e = malloc(sizeof(char) * 300); 

//Controllo su FAIL possibili nell'allocation.
if ((d == NULL) || (e == NULL)) {

printf("M_emory ALLOC_ation: FAILED !\n");

return(1);
}


printf("Dimensione in BYTE di d: %zu.\n", sizeof(d));
printf("Dimensione in BYTE di e: %zu.\n", sizeof(e));

/*OK, fatto con i sizeof(), adesso tocca agli 
INDIRIZZI DI MEMORIA. */

printf("\n\n");

//STACK
printf("Indirizzo di memoria di c: %p.\n", (void*)&c);
printf("Indirizzo di memoria di v: %p.\n", (void*)v);

printf("\n\n");

//HEAP
printf("Indirizzo di memoria di d: %p.\n", (void*)d);
printf("Indirizzo di memoria di e: %p.\n", (void*)e);

//Da non dimenticare free() (!)

free(d);
free(e);

return(0);
}