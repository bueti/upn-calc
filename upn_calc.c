#include <stdio.h>
#include <string.h>
#include "stack.h"

int main() {

    char c[100];  // Character Arrray (String) für Operator
    int i = 0;    // Int für den Stack
    int e = 0;    // Zum Rechnen

    printf("(quit to exit)\n");

    /* Endlosloop bis Eingabe "quit" */
    while ( 1 ) {

        /**
         * Konvertiere den Input (String) zu einem Integer damit
         * wir damit rechnen können. Mach das solange, bis der Input
         * ein Newline ist.
        */

        do { gets(c); sscanf(c, "%d", &i); } while (!strcmp(c, "\n"));

        /**
         * Nimm 'c' und vergleiche mit den Operatoren. Falls c kein
         * Operator ist, lege i (i = int-Wert von String c) auf den Stack
         * Falls nicht, hole jede Zahl aus dem Stack und "operatore" sie zu d
         * Gib d als Resultat aus
        */
        // FIXME: Der Stack wird nicht wirklich resetet... O_o
        if(strcmp(c, "+") == 0) {
          while(peek() != 0) {
              e += pop();
          }
          printf("Resultat: %d\n", e);
          push(e);
          e = 0;
        }

        /* TODO: Hier fehlt noch die richtige Logik, erstmals die Addition...
        if(strcmp(c, "-") == 0) {
          while(peek() != 0) {
              e -= pop();
          }
          printf("Resultat: %d\n", e);
          push(e);
          e = 0;
        }

        if(strcmp(c, "*") == 0)
            printf("Resultat: %d\n", pop() * pop());

        if(strcmp(c, "/") == 0)
            printf("Resultat: %d\n", pop() / pop());
        */

        if(strcmp(c, "quit") == 0)
            return 0;

        push(i);
    }
}
