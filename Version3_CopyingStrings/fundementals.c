#include "fundamentals.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define BUFFER_SIZE 80

void copying_strings(void) {
    printf("*** Start of Copying Strings Demo ***\n");

    char destination[BUFFER_SIZE];
    char source[BUFFER_SIZE];

    do {
        destination[0] = '\0'; // Reset destination string
        printf("Destination string is reset to empty.\n");

        printf("Type the source string (q - to quit):\n");
        fgets(source, BUFFER_SIZE, stdin);
        source[strlen(source) - 1] = '\0';

        if (strcmp(source, "q") != 0) {
            strcpy(destination, source);
            printf("New destination string is \"%s\".\n", destination);
        }
    } while (strcmp(source, "q") != 0);

    printf("*** End of Copying Strings Demo ***\n");
}
