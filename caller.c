#include "monty.h"
/**
 * caller - caller
 */
void caller(void)
{
instruction_t ins[] = {
{"push", push},
{"pall", pall},
{"pint", pint},
{"pop", pop},
{"swap", swap},
{"add", add},
{"nop", nop},
{"sub", sub},
{"div", div},
{"mul", mul},
{"mod", mod},
{"pchar", pchar},
{"pstr", pstr},
{"rotl", rotl},
{"rotr", rotr},
{"queue", queue},
{"stack", stack},
{NULL, NULL}};
int i = 0;
char *op = NULL;
op = strtok(args.line, " \n");
if (!op || *op == '#')
return;
while (ins[i].opcode && op)
{
if (!strcmp(op, ins[i].opcode))
{
ins[i].f(&(args.stack), args.counter);
return;
}
i++;
}
fprintf(stderr, "L%ld: unknown instruction %s\n", args.counter, op);
cleaner();
exit(EXIT_FAILURE);
}
