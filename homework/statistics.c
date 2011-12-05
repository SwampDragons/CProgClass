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
#include <math.h>

void enterData(float *a, int *c);
void high(float* s, int count);
void low(float* s, int count);
void calculate_Mean(float* s, int count, float *avg);
void median (float* s, int count);
void mode(float *s, int count);
void variance(float* s, float avg, int count);

int main (void)
{
    int com;
    int counter=0;
    float data[200];
    float mean=0;
    while (com != EOF)
    {
        printf("Mini Stat Package\n______________________________________________\nThis program will perform the following:\n1) Enter data. \n2) Display data and the following statistics: \nThe number of data items, the high and low values in the data, the mean, median, mode, \nvariance, and standard deviation. \n3) Quit the program.\n_________________________________________\n\nYour choice?\n");
        
        scanf("%d", &com);
        
        switch(com)
        {
            case 1: enterData(data, &counter); break;
            case 2: printf("Number of data items:          %d\n", counter);
                    high(data, counter);                   
                    low(data, counter); 
                    calculate_Mean(data, counter, &mean); 
                    median(data, counter); 
                    mode(data, counter);
                    variance(data, mean, counter);
                    break;
            case 3: break;
            default: printf("invalid entry\n"); break;
        }
    }
            return 0;
}

void enterData(float* a, int* c)
{
    float x;
    int i;
    i=*c;

    printf("Enter one item after each data prompt.  Please return after each one.\n Signal with <EOF> when you are done with data input.\n\nitem %d:          ", i+1 );
    while (scanf("%f", &x) != EOF)
    {
        printf("\nitem %d:          ", i+2);
        a[i++] = x;
    } 
    
    *c=i;
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

void low(float* s, int count)
{
    float low=0;
    int i=0;
    low=s[0];
    for (i=0; i<count; i++)
    {
        if (s[i]<low)
            low = s[i];
    }
    printf("Lowest:          %f\n", low);
}

void calculate_Mean(float* s, int count, float* avg)
{
    int i;
    float mean=0;
    for (i=0; i<count; i++)
    {
        mean += s[i];
    }
    mean = mean/(count);
    *avg=mean;
}

void median (float*s, int count)
{
    int i;  
    int j;
    float temp; 
    float median;
    for (i=0; i<(count-1); i++)
    {
        for (j=i+1; j<count; j++)
        {
            if (s[i]>s[j])
            {
                temp=s[i];
                s[i]=s[j];
                s[j]=temp;
            }
        }
    }

    if (count%2==0)
        median = ((s[((count)/2)-1]+s[(count)/2])/2);
    else
        median = s[(count/2)];
    printf("Median:          %f\n", median);
}
void mode(float *s, int count)
{
    int c_new=0;
    int c_old=0;
    float mode_new=0.0;
    float mode_old=0.0;
    float num;
    int i;
    for(i=0; i<count; i++)
    {
        num = s[i];
            if (num!= mode_new)
            {
                if(c_new > c_old)
                {
                    c_old = c_new;
                    mode_old = mode_new;
                    c_new =0;
                }
                mode_new = num;
            }
        c_new++;
    }
    printf("Mode:          %f\n", mode_old);
}

void variance(float* s, float avg, int count)
{
    int i=0; 
    float var=0;
    float temp;
    float stdev;
    for(i=0; i<count; i++)
        {
            temp=pow((avg-s[i]), 2);
            var+=temp;
        }
    var = var/count;
    printf("Variance:          %f\n", var);
    
    stdev= sqrt(var);
    printf("Standard Deviation:          %f\n", stdev);
}
