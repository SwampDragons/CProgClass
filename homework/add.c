/*2.Write a complete C programming to add two very large numbers together as follows:
 * Enter the first number
 * 1999999999999999999999999999999999999999999996667766999999
 * Enter the second number
 * 888888888888888888888888888888888888888888888888888888888888888888888888
 * Sum is
 * Display the total here
 *
 * http://mailman.linuxchix.org/pipermail/courses/2002-November/001043.html
 */

#include <stdio.h>
#include <stdlib.h>

int main (void)
{
    char num1[200];
    char num2[200];
    
    printf("Enter the first number\n");
    gets(num1);
    printf("Enter the second number\n");
    gets(num2);

    printf("The numbers you entered are\n%s\n and\n%s\n", num1, num2);

    i1=strlen(num1);
    i2=strlen(num2);

    return 0;
}

