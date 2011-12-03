
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

int main (void)
{
    
    int day;
    int year;
    int monthnum;
    char* month[12] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};

    printf("enter the date in the form (mm/dd/yyyy)\n");
    scanf("%d", &monthnum);
    getchar();
    scanf("%d", &day);
    getchar();
    scanf("%d", &year);

    monthnum--;

    printf("You entered the date %s, %d, %d.\n", month[monthnum], day, year);
    
    return 0;
}
