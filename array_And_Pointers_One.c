#include <stdio.h>
#define MC 3

int main() {

int v[MC] = {0, 1, 2}; 

/*
Creo pointer a v[0].
*/
int *p = v;

/*
Nota: casto (void*) perché printf() vuole quello 
nel placeholder %p. Un ptr a void e lo avrà. 
*/
printf("Indirizzo di v = %p\n", (void*)v);
printf("Indirizzo di &v[0] = %p\n", (void*)&v[0]);

//Accedo agli elementi dell'array,
//in modi equivalenti sintatticamente.

for (int k = 0; k < MC; k++) {

//Classico ...
printf("v[%d] = %d\n", k, v[k]);

//Usando l'Aritmetica dei Puntatori
printf("*(v + %d) = %d\n", k, *(v +k));

//Posso usare anche p nel modo Classico ... 
printf("p[%d] = %d\n", k, p[k]);

//Ancora con l'Aritmetica dei Puntatori 
printf("(p + %d) = %d\n\n", k, *(p + k));

}



return 0;

}