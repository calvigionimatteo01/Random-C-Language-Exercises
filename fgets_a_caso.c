#include <stdio.h>
#include <stdbool.h>

#define C 100

int main() {

char stringa1[C];

/*
Voglio usare fgets() per far mettere all'utente
char dentro il char - array.
*/

printf("Inserire del testo !\n");

fgets(stringa1, C, stdin);

printf("Bravo ! Hai inserito: %s\n", stringa1);


return 0;

}