#include <stdio.h>

#define L 3

int main() {

//Creo una Stringa x di lunghezza L,
//poi la stampo a schermo.
char x[L] = {'a', 'e', '\0'};
printf("La stringa è: %s.\n", x);

printf("Memory address of x[0] == %p.\n", (void*)&x[0]);
printf("Memory address of x[1] == %p.\n", (void*)&x[1]);
printf("Memory address of x[2] == %p.\n", (void*)&x[2]);

//Introduco un PTR a char.
char *p = x;

//Modifico la Stringa con la PTR - ARITHMETIC.
*p = 'i';
p++;
*p = 'o';
p--;

printf("La stringa ora è: %s.\n", x);

//Riscrivo gli indirizzi di memoria 
//usando il PTR a char.
for (int y = 0; y < L; y++) {
printf("&x[%d] == %p\n", y, (p + y));
}

//Ora invertiamo un diverso char - array (non Stringa)
//col PTR.

char w[L] = {'a', 'b', 'c'};
p = w;

printf("Array originale:\n");

for (int u = 0; u < L; u++) {

printf("w[%d] == %c.\n", u, *(p + u));

}

for (int k = 0; k < (L/2); k++) {

char c;

c = *(p + k);
*(p + k) = *(p + L - k - 1);
*(p + L - k - 1) = c;
}

//Stampo il char - array.

printf("Array invertito:\n");

for (int q = 0; q < L; q++) {
printf("w[%d] == %c.\n", q, *(p + q));
}

return 0;

}