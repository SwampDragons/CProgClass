/*Megan Marsh
 *
 * This program prints a one-month calendar. 
 * The user specifies:
 *      the number of days in the month
 *      the day of week on which the month begins.
 *
 * The most important part of a for statement uses a variable I to count 
 * from 1 to n, where n is the number of days in the month, printing 
 * each value of i.  Inside of the loop, an if statement tests whether
 * i is the last day in a week; if so, it prints a new-line character.
 *
 * example output (for 31 days and start day = 3):
 * 
 *     1 2 3 4 5
 * 6 7 8 9 10 11 12
 * 13 14 15 16 17 18 19
 * 20 21 22 23 24 25 26
 * 27 28 29 30 31
 *
 */

#include <stdio.h>

int main (void)
{
    int i; int s; int numdays; int startday;  

/****************gathering user input*******************/

    printf("Enter the number of days in your month:\n");
    scanf("%d", &numdays);

    printf("Enter the number representing the starting day of the week.\n");
    printf("For example, for Sunday enter 1 or for Saturday enter 7.\n");
    scanf("%d", &startday);

/*****************creating calendar*********************/
    i = 1;
    s = 0;

    printf ("\nYour calendar is:\n\n");
    
    for ( s ; s < startday ; s++ )
    {
        if (startday != 7)
            printf(" ");
    }

    for ( i ; i <= (numdays) ; i++ )
    {
        if( i == (7-startday) || i== (14-startday) || i== (21-startday) || i== (28-startday) || i==(35-startday) )
            printf("%d \n", i);
        else 
            printf("%d ", i);
    }

    printf("\n");

     return 0;
}
