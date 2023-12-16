#include "monty.h"
/* Function to multiply the top element with the second top element of the stack */
void mul(stack_t **stack, unsigned int line_number) {
    if (*stack == NULL || (*stack)->next == NULL) {
        fprintf(stderr, "L%u: can't mul, stack too short\n", line_number);
        exit(EXIT_FAILURE);
    }

    (*stack)->next->n *= (*stack)->n;
    stack_t *temp = *stack;
    *stack = (*stack)->next;
    free(temp);
}
