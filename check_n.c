#include "monty.h"
/**
  * check_n - function to check n
  * @n: THE n
  * Return: int
 */
int check_n(char *n)
{
	int i;

	for (i = 0; n[i] != '\0'; i++)
	{
		if (n[i] < 48 || n[i] > 57)
		{
			return (1);
		}
	}
	return (0);
}
