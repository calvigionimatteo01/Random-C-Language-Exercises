#include <stdio.h>
#include <stdlib.h>

//prototipo e definizione.
void put_Int(int **ii) {

/*
*i è un single_Pointer per definizione di **ii
come double_Pointer. Dunque, posso allocare in HEAP
la quantità corretta di memoria con malloc(sizeof(int)).
Un cast (int*) ci restituisce la corretta forma
di un single_Pointer ad INT. 
*/

*ii = (int*)malloc(sizeof(int));
**ii = 0;

}

int main(void) {

/*
Procedo con:
1)creare un single_Pointer x ad INT ed
inizializzarlo a NULL;
2)passare &x, che è lecito, alla put_Int().
Infatti, (int **xx = &x) sarebbe uguale con più sintassi.
*/
int *x = NULL;
put_Int(&x);

printf("Valore ottenuto: %d.\n", *x);

free(x);

return(0);
}