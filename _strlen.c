#include <stdio.h>
#include "main.h"

/**
 * _strlen - returns the length of the string
 * @s: is a pointer to a string
 *
 * Return: this returns an integer value
 */

int _strlen(char *s)
{
  int len = 0;

  while (*s)
    {
      s++;
      len++;
    }
  return (len++);
}
