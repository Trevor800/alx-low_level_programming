#include <stdio.h>
#include "main.h"

/**
* main - function print each argument passed to program on a line
* @argc: function is argument counter
* @argv: function is pointer to array of arguments
* Return: 0 on success
*/
int main(int argc, char *argv[])
{

int i;
for (i = 0; i < argc; i++)
printf("%s\n", argv[i]);
return (0);
}
