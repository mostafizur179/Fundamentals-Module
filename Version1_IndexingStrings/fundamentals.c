#include "fundamentals.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define BUFFER_SIZE 80
#define NUM_INPUT_SIZE 10

void indexing_strings(void) {
    printf("*** Start of Indexing Strings Demo ***\n");

    char buffer1[BUFFER_SIZE];
    char numInput[NUM_INPUT_SIZE];
    size_t position;

    do {
        printf("Type not empty string (q - to quit):\n");
        fgets(buffer1, BUFFER_SIZE, stdin);
        buffer1[strlen(buffer1) - 1] = '\0'; // Remove trailing newline

        if (strcmp(buffer1, "q") != 0) {
            printf("Type the character position within the string:\n");
            fgets(numInput, NUM_INPUT_SIZE, stdin);
            numInput[strlen(numInput) - 1] = '\0'; // Remove trailing newline

            position = atoi(numInput); // Convert input to integer

            if (position >= strlen(buffer1)) {
                position = strlen(buffer1) - 1; // Reduce position to last valid index
                printf("Too big... Position reduced to max available.\n");
            }

            printf("The character found at position %d is '%c'\n", (int)position, buffer1[position]);
        }
    } while (strcmp(buffer1, "q") != 0);

    printf("*** End of Indexing Strings Demo ***\n");
}

