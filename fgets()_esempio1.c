#include <stdio.h>
#include <stdbool.h>

#define LGT 100

int main() {

printf("Tocca usare fgets()\n");

char stringa[LGT];

/*All'utente glielo dico che sto usando fgets(),
sennò non scrive un cazzo ...*/

printf("Inserire una stringa: \n");

fgets(stringa, LGT, stdin);

/*Dopo utente messo stringa,
io stamapre stringa !!*/

printf("La stringa che hai messo è questa: %s\n", stringa);

return 0;

}