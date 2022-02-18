#include <stdio.h>
int main () {
printf ("Geben Sie einen Wert ein: ");
int eingabe;
eingabe = getchar();
printf ("Eingegebener Wert (int): %i\n", eingabe);
printf ("Eingegebener Wert (char): %c\n", eingabe);
return 0;
}
