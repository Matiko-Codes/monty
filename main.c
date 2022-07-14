#include "monty.h"
/**
 * monty - custom interpretor
 * Return: Nothing
 */
void monty(void)
{
char line[128];
args.file = fopen(args.argv[1], "r");
if (args.file != NULL)
{
while (fgets(line, sizeof(line), args.file) != NULL)
{
args.counter++;
args.line = line;
caller();
}
fclose(args.file);
}
else
{
fprintf(stderr, "Error: Can't open file %s\n", args.argv[1]);
cleaner();
exit(EXIT_FAILURE);
}
}
