#include <stdio.h>

/**
 *main - Entry point
 *Return: Always 0 (Success)
 */


int main(void)
{
char alphabe = 'z';

while (alphabe >= 'a')
{
putchar(alphabe);
alphabe--;
}
putchar('\n');

return (0);
}
