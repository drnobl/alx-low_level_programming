#include "main.h"

/**
 * _isalpha -  A function that checks for alphabetic character
 *@c: A parameter to print alphabetic characters
 * Return: Always 0.
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
