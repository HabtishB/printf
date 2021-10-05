#include <stdio.h>
#include "main.h"

int main(void)
{
  
_printf("Let's try to printf a simple sentence. \n");
printf("Let's try to printf a simple sentence. \n");
_printf("Character:[%c]\n", 'Z');
printf("Character:[%c]\n", 'Z');
_printf("Negative number: [%i]\n", -3003);
printf("Negative number: [%i]\n", -3003);
_printf("String:[%s]\n", "Habtamu and Zelalem in collaboration!");
printf("String:[%s]\n", "Habtamu and Zelalem in collaboration!");
_printf("Decimal number:[%d]\n", 534.55);
printf("Decimal number:[%d]\n", -534.55);
_printf("Percent:[%%]\n");
printf("Percent:[%%]\n");
return (0);
}
