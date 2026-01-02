#include <stdio.h>
#include <stdbool.h>

int main() {

//EDUTECNICA - ESERCIZIO 1

//Dichiaro 2 variabili int.
int n = 1;
int o = 2;

//Creo 2 pointers ad int,
//e lì faccio puntare ad n;o.
int *p_n = &n;
int *p_o = &o;

printf("Indirizzo di n è: %p\n", p_n);
printf("Indirizzo di o è: %p", p_o);

return 0;

}