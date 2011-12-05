/* 
 * menu-driven mini-statistics package. A user should be able to enter up to 200 items of float data.  
 * The program should calculate the number of items in the data, the mean, the standard deviation, 
 * the variance, the median, and the mode of the data. A sample run follows. 
 * The symbol <EOF> in the sample run below should be replaced with CTRL-Z or CTRL-D 
 * or the end-of-file symbol on your system.
 *
 * Mini-Stat Package 
 * -----------------------
 *  This program will perform the following:
 *  1) Enter data. 
 *  2) Display the data and the following statistics: 
 *  the number of date item, the high and low values in the data, the mean, median, mode, 
 *  variance and standard deviation.
 *  3) Quit the Program
 *  --------------------------------------------------------
 *
 * Your Choice? 1
 * Enter one data item after each prompt. Press return after each one. 
 * Signal with <EOF> when you are done with data input. 
 * Item #1        :    25
 * Item #2        :    36 
 * Item #3        :    27.5   
 * Item #4        :    28
 * Item #5        :    32
 * Item #6        :    33.25
 * Item #7        :    <EOF>
 * This program will perform the following:
 * 1) Enter data. 
 * 2) Display the data and the following statistics: 
 * the number of date item, the high and low values in the data, the mean, median, mode, 
 * variance and standard deviation.
 * 3) Quit the Program
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void enterdata(void);

int main (void)
{
    int com;
    float data[200];

    printf("This program will perform the following:\n 1) Enter data. \n 2) Display data and the following statistics: the number of data items, the high and low values in the data, the mean, median, mode, variance, and standard deviation. \n 3) Quit the program.\n Enter 1, 2, or 3 to proceed.\n");
    scanf("%d", &com);
    switch(com)
    {
        case 1: enterData(data); break;
       /* case 2: statistics(); break;
        case 3: break;*/
        default: printf("invalid entry\n"); break;

    }

            return 0;
}

void enterData(float *a)
{
    float x;
    int i=0;

    printf("Enter one item after each data prompt.  Please return after each one.\n Signal with <EOF> when you are done with data input.\n");
    while (x != EOF)
    {
        scanf("%f", &x);
        a[i++] = x;
    } 
}

