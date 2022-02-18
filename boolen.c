#include <stdbool.h>
#include <stdio.h>
int main () {
    bool wahrheitswert = true;
    printf("Ausgabe als Zahl: %i\n", wahrheitswert);
    printf("Ausgabe mit true/false: %s\n", wahrheitswert ? "true" : "false");
    wahrheitswert = false;
    printf("Ausgabe als Zahl: %i\n", wahrheitswert);
    printf("Ausgabe mit true/false: %s\n", wahrheitswert ? "true" : "false");
return 0;
}
