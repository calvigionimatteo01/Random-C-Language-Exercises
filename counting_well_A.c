#include <stdio.h>
#include <math.h>
#include <stdbool.h>

#define MC 100

//PROTOTIPO DELLA FUNZIONE.

unsigned int counting_well_A(char *str, int L);

/*
Ho scelto di inserire anche il Parametro aggiuntivo
L, lunghezza del Char - Array, per evitare problemi.
*/

int main() {

//Userò fgets() per prendere in Input da utente
//una certa stringa e contare il numero di 
//caratteri 'A'.

char str[MC];

printf("Inserisci una stringa: ");
fgets(str, MC, stdin);

printf("%d", counting_well_A(str, MC));

return 0;

}

//DEFINIZIONE DELLA FUNZIONE.
unsigned int counting_well_A(char *str, int L) {

unsigned int numero_di_A = 0;

for (int k = 0; k < L; k++) {
if (str[k] == 'A') {
numero_di_A = numero_di_A + 1;
}
}

return numero_di_A;
}