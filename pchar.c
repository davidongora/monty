#include <stdio.h>
#include <stdlib.h>
#include "monty.h"

/* Function to print the character at the top of the stack */
void pchar(stack_t **stack, unsigned int line_number) {
    if (*stack == NULL) {
        fprintf(stderr, "L%u: can't pchar, stack empty\n", line_number);
        exit(EXIT_FAILURE);
    }

    int value = (*stack)->n;
    if (value < 0 || value > 127) {
        fprintf(stderr, "L%u: can't pchar, value out of range\n", line_number);
        exit(EXIT_FAILURE);
    }

    printf("%c\n", (char)value);
}
