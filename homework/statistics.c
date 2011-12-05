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
 * the number of data item, the high and low values in the data, the mean, median, mode, 
 * variance and standard deviation.
 * 3) Quit the Program
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int enterData(float *a, int i);
void high(float* s, int count);

int main (void)
{
    int com;
    int counter=0;
    float data[200];
    
    while (com != EOF)
    {
        printf("Mini Stat Package\n______________________________________________\nThis program will perform the following:\n1) Enter data. \n2) Display data and the following statistics: \nThe number of data items, the high and low values in the data, the mean, median, mode, \nvariance, and standard deviation. \n3) Quit the program.\n_________________________________________\n\nYour choice?\n");
        
        scanf("%d", &com);
        
        switch(com)
        {
            case 1: enterData(data, counter); break;
            case 2: printf("Number of data items:  %d\n", counter);
                    high(data, counter);
                    /*
                    low(data); 
                    mean(data); 
                    median(data); 
                    mode(data); 
                    variance();
                    stDev(data);*/
                    break;
            case 3: break;
            default: printf("invalid entry\n"); break;
        }
    }
            return 0;
}

int enterData(float *a, int i)
{
    float x;

    printf("Enter one item after each data prompt.  Please return after each one.\n Signal with <EOF> when you are done with data input.\n\nitem %d:         ", i+1 );
    while (scanf("%f", &x) != EOF)
    {
        printf("\nitem %d:      ", i+2);
        a[i++] = x;
    } 

    return i;
}

void high(float* s, int count)
{
    float hi=0;
    int i=0;

    hi=s[0];
    for (i=0; i<count; i++)
    {
        if (s[i]>hi)
            hi=s[i];
    }
    printf("Highest:          %f\n", hi);
}

/*void low(float* s, float low)
{
    float low=0;
    int i;
    low = s[0];
    for (i=0; i<200; i++)
    {
        if (s[i]<low)
            low = s[i];
    }
    printf("Lowest:          %f\n", low);
}

void mean (float*s, float mean, int i)
{
    int x=0; float mean;
    for (x=0, x<=i, i++)
    {
        mean += s[x];
    }
    mean = mean/(x-1);
    return mean;
}

void median (float*s, float median, int i)
{
    int x=0; int j; float temp; float median;
    for (x=0, x<=i, x++)
    {
        for (j=x+i; j<=i+1; x++)
        {
            if s[x]>s[j]
            {
                temp=s[x];
                s[x]=s[j];
                s[x]=temp;
            }
        }
    }
    if(x%2==0)
        median = {s[(x/2)-1]+s[(x/2)+1]}/2;
    else
        median = s[(x/2)+1];
    return median;
}
void mode()
{}

void variance(float* a, float mean, float *b, int size)
{
    int i=0; float var=0;
    for(i=0; i<size, i++)
        {
            b[i]=pow(mean-a[i], 2);
            var+=b[i];
        }
    var = var/size;
    return var;
}

void stDev(float variance)
{
    float stdev=sqrt(variance);
    return stdev;
}

*/
