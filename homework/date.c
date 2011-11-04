
/*
 * Write a program that accepts a date from the user in the form mm/dd/yyyy and then 
 * displays it in the form month dd, yyyy, where month is the name of the month:
 *
 * Enter the date(mm/dd/yyyy): 2/17/2011
 * You entered the date February 17, 2011
 *
 *Store the month names in an array that contains pointer to string 
 *
 */

#include <stdio.h>
#include <stdlib.h>

void getArray(char * x);

int main (void)
{
    char date[9];
    char* dateptr = date;
    int i;
   /* char* month[11] = {"January", "February", "March", "April", "May", "June", "July", 
        "August", "September", "October", "November", "December"};*/

    printf("enter the date (mm/dd/yyyy)\n");
    scanf("%d", &i);
    getArray(dateptr);

    printf("You entered the date %s %c%c, %s");
    
    return 0;
}


/****************getArray  reads input from stdin****************/


void getArray(char* x)
{
    int i=0;
   
    while( (x[i++]=getchar())!='\n')
        ;
    
    x[i]='\0';
}

