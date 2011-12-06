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
        if(strcmp(c, "+") == 0) {
            do {
            printf("peek im + loop: %d\n", peek());
              if (pop() == '\0') {
                printf("Resultat: %d\n", e);
                break;
              }
              printf("e vor pop: %d\n",e);
              e += pop();
              printf("e nach pop: %d\n",e);
            } while (1);
        }

        /* FIXME: Hier fehlt noch die richtige Logik, erstmals die Addition...
        if(strcmp(c, "-") == 0)
            printf("Resultat: %d\n", pop() - pop());

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
