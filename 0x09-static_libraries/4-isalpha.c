#include "main.h"
/**
 * _isalpha - character to be checked
 * @c: character to be checked
 * Return: 1 for lowercase char, 0 for anything else
 */
int _isalpha(int c)
{
if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
{
return (1);
}
return (0);
}
