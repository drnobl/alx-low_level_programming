#include "main.h"
/**
 *create_array - Entry point for the program
 *
 * @size: size of the pointer
 *
 * @c: Char Parameter
 * Return: 0 on success
 */
char *create_array(unsigned int size, char c)
		
{
		
	char *str;
		
	unsigned int i;
		

		
	str = malloc(sizeof(char) * size);
		
	if (size == 0)/* ||str==NULL*/		
		return (NULL);
		

		
	for (i = 0; i < size; i++)
		
		str[i] = c;
		
	return (str);
}
