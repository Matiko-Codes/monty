#include "monty.h"
/**
 * pint - prints out everything in stack
 * @stack: doubly linked list
 * @line_number: the line
 *
 */
void pint(stack_t **stack, unsigned int line_number)
{
if (!*stack)
{
fprintf(stderr, "L%u: can't pint, stack empty\n", line_number);
cleaner();
exit(EXIT_FAILURE);
}
printf("%d\n", (*stack)->n);
}
