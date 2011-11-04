
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
    int date[11];
    int* dateptr = date;
    int i;

/*assignment calls for putting months in strings so even though it's stupid and tedious I did it*/

    char* jan = "January"; char* feb = "February"; 
    char* mar = "March"; char* apr = "April";
    char* may = "May"; char* jun = "June";
    char* jul = "July"; char* aug = "August";
    char* sep = "September"; char* oct = "October";
    char* nov = "November"; char* dec = "December";

/*array that will hold pointers to strings (month names) */

    char** month[11] = {jan, feb, mar, apr, may, jun, jul, aug, sep, oct, nov, dec};

    printf("enter the date (mm/dd/yyyy)\n");
    getArray(dateptr);

    i = ((date[0] * 10) + date[1]); 

    printf("You entered the date %s %c%c, %s" month[i], date[3], date[4], date[6]);
    
    return 0;
}


/****************getArray  reads input from stdin****************/


void getArray(int* x)
{
    int i=0;
   
    while( (x[i++]=getchar())!='\n')
        ;
    
    x[i]='\0';
}

