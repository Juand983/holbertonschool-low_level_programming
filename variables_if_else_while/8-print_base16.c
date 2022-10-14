#include <stdio.h>
/**
*main - base16
*
*Return: 0
*/
int main(void)
{
char l;
char al;
for (l = '0' ; l <= '9' ; l++)
{
putchar(l);
}
for (al = 'a' ; al <= 'f' ; al++)
{
putchar(al);
}
putchar('\n');
return (0);
}
