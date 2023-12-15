#include "monty.h"
/**
  * parse_line - function to parse
  * @line: the line
  * Return: str of strs
 */
char **parse_line(char *line)
{
	int buffsize = 256;
	/*int i = 0;*/
	char **parsed = malloc(buffsize * sizeof(char *));
	char delim [] = {" \n\t"};
	/*char *word = NULL;*/

	if (!parsed)
	{
		perror("malloc");
		exit(EXIT_FAILURE);
	}

	parsed[0] = strtok(line, delim);
	parsed[1] = strtok(line, delim);
	/*word = strtok(line, delim);
	while (word != NULL)
	{
		parsed[i] = word;
		i++;
		word = strtok(NULL, delim);
	}
	*/
	parsed[2] = NULL;
	return (parsed);
}

