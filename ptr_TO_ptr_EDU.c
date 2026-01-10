//ptr di ptr EDU (1).
#include <stdio.h>
#define L 2

int main(void) {

int a = 1;
int b = 2;

int *p1 = &a;
int *p2 = &b;

/*
Creo ora qualcosa di nuovo:
un ARRAY DI PUNTATORI DI L == 2.
*/
int *v[L];

//Riempiamo l'ARRAY DI PUNTATORI,
//con i nostri p1;p2.
v[0] = p1;
v[1] = p2;

//finally ...
int **pp = v;

//Stampo dati rilevanti. 

//Stampo v[0] == *p1 == a.
printf("%d.\n", **pp);
printf("======\n");
printf("%d.\n", *p1);

printf("\n\n");

//Stampo v[1] == *p2 == b.
printf("%d.\n", *(*(pp + 1)));
printf("======\n");
printf("%d.\n", *p2);

printf("\n\n");

//Cambio il "LIVELLO DI INDIREZIONE":
//lavoro, ora, con singolo memory address
//per printf(). 
printf("%p.\n",(void*)*pp);
printf("======\n");
printf("%p.\n", (void*)p1);

printf("\n\n");

printf("%p.\n", (void*)*(pp + 1));
printf("======\n");
printf("%p.\n", (void*)p2);

printf("\n\n");

//Usiamo la notazione stile array,
//per accedere agli elementi puntati.
printf("%d.\n", v[0][0]);
printf("%d.\n", v[1][0]);

return(0);
}