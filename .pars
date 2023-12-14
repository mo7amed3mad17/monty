#include "monty.h"
/**
  * parse_line - function to parse
  * @line: the line
  * Return: str of strs
 */
char **parse_line(char *line)
{
	int buffsize = 256;
	int i = 0;
	char **parsed = malloc(buffsize * sizeof(char *));
	char delim [] = {" \n\t\r\a"};
	char *word = NULL;

	if (!parsed)
	{
		perror("malloc");
		exit(EXIT_FAILURE);
	}
	word = strtok(line, delim);
	while (word != NULL)
	{
		parsed[i] = word;
		i++;
		word = strtok(NULL, delim);
	}
	parsed[i] = NULL;
	/*printf("%s %s", parsed[0], parsed[1]);*/
	return (parsed);
}
