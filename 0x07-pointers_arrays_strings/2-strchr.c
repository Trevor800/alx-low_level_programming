#include "main.h"
#define NULL 0

/**
*   _strchr - function locate 1st occurrence of char in string and returns pointer there
*    @s: function is the string to search
*     @c: function is target characer
*      Return: function that is pointer to that character in string
*/

char *_strchr(char *s, char c)
{
int i = 0;

while (s[i] != '\0' && s[i] != c)
i++;

if (s[i] == c)
return (&s[i]);
else
return (NULL);
}
