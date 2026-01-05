#include <stdio.h>

#define MC 3

int main() {

char x[MC] = {'m', 'c', '\0'};

//Stampo qualcosa, poi useremo i ptr.

printf("%s\n\n", x);

char *z = x;

z++;
z++;


printf("Memory address of x[2] == %p\n", (void*)&x[2]);
printf("Memory address of x[2] == %p\n\n", (void*)z);

z--;
z--;

*z = '$';
z++;
*z = '$';
z--;

int j = 0;

while (*(z + j) != '\0') {

printf("%c", *(z + j));

j++;

}

printf("\n");

return 0;

}