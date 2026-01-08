//strlen() AND strcat()

#include <stdio.h>
#include <string.h>


int main() {

char str_One[40] = "Ugo";
char str_Two[30] = "Foscolo";

printf("Stringa Uno: %s.\n", str_One);
printf("Stringa Due: %s.\n", str_Two);

size_t n = strlen(str_One);
size_t m = strlen(str_Two);

printf("Lunghezza Stringa Uno: %zu.\n", n);
printf("Lunghezza Srringa Due: %zu.\n", m);

//Concateno le due Stringhe nella str_One.
strcat(str_One, str_Two);
//Perché questo, sarà mutata strlen(str_One).
n = strlen(str_One);

printf("Stringa Concatenata: %s.\n", str_One);
printf("Lunghezza della tale: %zu.\n", n);

return 0;

}