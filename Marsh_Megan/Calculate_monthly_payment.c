/* Megan Marsh */

#include <stdio.h>
#include <math.h>

/*this program is designed to perform a simple interest calculation, using the formula of:
 *
 * monthly pay = {rate + rate/[(1+rate)^months-1]}x(principle)
 * 
 * this formula should compute the required monthly payment required to pay down the principle, and also the total payment
 */

int main (void)

{
    double rate; double term; double principle; double  monthpay; double totalpay; double intexp;

/**********************collect input from user**********************/

    printf("This program will help you calculate how much you have to pay per month in order to buy that thing you probably didn't need. \nPlease enter the interest rate.\n");
    scanf("%lf", &rate);
    printf("Now enter the term of the payment, in years. \n" );
    scanf("%lf", &term);
    printf("Finally, enter the principle, or how much you paid for that thing you didn't need.\n");
    scanf("%lf", &principle);

/************************ calculations: ****************************/

    rate = rate/1200.0;
    term = term*12.0;
    monthpay = (rate + rate/(pow(1.0+rate,term)-1.0))*principle;
    totalpay = monthpay*term;
    intexp = totalpay - principle;

/**************************print results****************************/

    printf("Your monthly payment is: %.2f \n", monthpay);
    printf("Your total payment is: %.2f \n", totalpay);
    printf("which means that your interest expense is: %.2f. \n", intexp);

        return 0;
}
