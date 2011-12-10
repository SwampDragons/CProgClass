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
#include <string.h>
#include <math.h>

int main (void)
{
    char num1[1024];
    char num2[1024];
    int i=0;
    int i1=strlen(num1);
    int i2=strlen(num2);
    int sum = 0;

    printf("Enter the first number\n");
    gets(num1);
    printf("Enter the second number\n");
    gets(num2);
    printf("\nThe numbers you entered are \n%s\n and \n%s\n", num1, num2);
    
    for (i=0; i<i1; i++)
    {
        sum =+ (num1[i]-48) * pow(10, 1i-1-i);
    };
    for ( i=0; i<i2; i++)
    {
        sum += (num2[i]-48) * pow(10, 12-1-i);
    };
    printf("The sum is: %d\n", sum);


    return 0; 
}
