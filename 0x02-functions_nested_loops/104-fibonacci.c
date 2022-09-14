#include <stdio.h>

/**
*main - prints out first 50
*fibonacci suit numbers
*Return: return 0
*/

int main(void)

{

int inc;

unsigned long n1 = 0, n2 = 1, n3 = 1, n4;

for (inc = 0; inc < 97; inc++)

{

n4 = n2 + n3;

printf("%lu", n4);

n1 = n2;

n2 = n3;

n3 = n4;

if (inc == 97)

printf("\n");

else

printf(", ");

}

return (0);

}
