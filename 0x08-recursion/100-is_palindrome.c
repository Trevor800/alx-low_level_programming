#include "main.h"

/**
* _strlen - function that return length of string
* @str: string to check
*
* Return: length of str
*/
int _strlen(char *str)
{
if (*str == '\0')
return (0);
else
return (1 + _strlen(str + 1));
}

/**
* check_palindrome - function checks to see if a string is a palindrome
* @a: left hand index
* @b: right hand index
* @c: possible palindrome
*
* Return: 1 if palindrome 0 if not
*/
int check_palindrome(int a, int b, char *c)
{
if (a >= b)
return (1);
else if (c[a] != c[b])
return (0);
else
return (check_palindrome(a + 1, b - 1, c));
}

/**
* is_palindrome - function states if a string is a palindrome
* @s: string to check
*
* Return: 1 if palindrome, 0 if not
*/
int is_palindrome(char *s)
{
int i;

i = _strlen(s) - 1;
return (check_palindrome(0, i, s));
}
