/* a. Write a C function that will input values into an array of type int. 
 * Have the array and the number of elements in the array passed as parameters to your function. 
 * Use a local pointer variable to traverse the array. 
 *
 * b. Write a C function that will output the contents of an array of type int. 
 * Have the array and the number of elements in the array passed as parameters. 
 * Use a local pointer variable to traverse the array
 * */
#include <stdio.h>
#include <stdlib.h>
   
void enterData(int* a, int* c);
void printData(int*a, int count);

int main (void)
{
    int counter =0;
    int data[200];

    enterData(data, &counter);
    printData(data, counter);

    return 0;
}

void enterData(int* a, int* c)
{
    int x;
    int i;
    i=*c;

    printf("Enter one value after each data prompt.  Please return after each one.\n Signal with <EOF> when you are done with data input.\n\nitem %d:          ", i+1 );
    while (scanf("%d", &x) != EOF)
    {
        printf("\nitem %d:          ", i+2);
        a[i++] = x;
    } 
    
    *c=i;
}
void printData(int*a, int count)
{
    int i=0;
   
    printf("\nYou entered:\n");
    
    for (i=0; i<count; i++)
    {
        printf("%d, ", a[i]);
    };
    printf("\n");
}

