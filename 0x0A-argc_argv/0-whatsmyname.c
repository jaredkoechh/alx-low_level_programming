#include <stdio.h>

/**
 *main - prints a name followed by a new line 
 *@argc: arguement count
 *@argv: array of pointers to argc
 *Return: 0
 **/

int main (int argc, char *argv[])
{
  printf("%s\n", argv[argc - 1]);
  return (0);
}
