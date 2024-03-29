/* Megan Marsh
 * 2.Write a complete C programming to add two very large numbers together as follows:
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
    /*printf("\nThe numbers you entered are \n%s\n and \n%s\n", num1, num2);*/
    
    int i1=strlen(num1);    
    int i2=strlen(num2);    
    int length;
    
    if (i1>=i2)
        length = i1;
    else 
        length = i2;

    /*printf("max length is %d\n", length);*/

    sum = malloc(sizeof(char)*length + 3);
    sum[length+2]='\0';
    sum[0]=0;
    
    int temp =0;
    int tens =0;
    
    for (i=length+1; i>0; )
    {
        while((i1) > 0 && (i2) > 0)
        {
            temp = (num1[i1-1]-'0') + (num2[i2-1]-'0') + tens;
            /*printf("temp is %d\n", temp);*/
            i1--;
            i2--;
            if(temp<10)
            {
                sum[i-1]=temp + '0';
                tens = 0;
            }
            else 
            {
                sum[i-1]=(temp-10) + '0';
                tens = 1;
            } 
            /*printf("sum[%d] is %c\n",i-1, sum[i-1]);*/
            i--;
        }
        if (i1>i2)
        {
            while((i1-1) >= 0)
            {
                temp = (num1[i1-1]-'0') + tens;
                /*printf("temp is %d\n", temp);*/
                sum[i-1] = temp + '0';
                /*printf("sum[%d] is %c\n", i-1, sum[i-1]);*/
                i1--;                
                tens=0;
                i--;
            }
        }
        else if (i2>i1)
        {
            while ((i2-1) >= 0)
            {
                temp = (num2[i2-1]-'0') + tens;
                /*printf("temp is %d\n", temp);*/
                sum[i-1] = temp+ '0';
                /*printf("sum[%d] is %c\n", i-1, sum[i-1]);*/
                i2--;                
                tens=0;
                i--;
            }
        }
    sum[0]=tens+'0';                   
    if (sum[0]=='0')
        sum[0]=' ';
    /*printf("sum[0] = %c\n", sum[0]);*/
    printf("The sum is: %s\n", sum);
    return 0; 
    }
}

