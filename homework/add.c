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
    char* sum = NULL;

    printf("Enter the first number\n");
    gets(num1);
    printf("Enter the second number\n");
    gets(num2);
    printf("\nThe numbers you entered are \n%s\n and \n%s\n", num1, num2);
    
    int i1=strlen(num1);    
    int i2=strlen(num2);    
    int length;
    if (i1>=i2)
    {
        length = i1;
    }
    else 
    {
        length = i2;
    }

    sum = malloc(sizeof(char)*length + 1);
    sum[length+1]='\0';
    
    int temp =0;
    int tens =0;
    
    for (i=length; i>0; i--)
    {
        temp = (num1[i]-'0') + (num2[i]-'0') + tens;
        if(temp<10)
        {
            sum[i]=(temp);
            tens =0;
        }
        else 
        {
            sum[i]=(temp-10);
            tens = 1;
        }
    };

    printf("The sum is: %s\n", sum);

    return 0; 
}
