#include <stdio.h>

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

    printf("This program calculates monthly payments. \nPlease enter the rate.\n");
    scanf("%lf", &rate);
    printf("Now enter the term of the payment, in years. \n" );
    scanf("%lf", &term);
    printf("Finally, enter the principle, or how much you owe.\n");
    scanf("%lf", &principle);

/************************ calculations: ****************************/

    rate = rate/1200;
    term = term*12;
    monthpay = (rate + rate/((1 + rate)^term*-1))*principle;
    totalpay = monthpay*term;
    intexp = totalpay - principle;

/**************************print results****************************/

    printf("Monthly payment is: %f \n", monthpay);
    printf("Total payment is: %f \n", totalpay);
    printf("Interest expense is: %f \n", intexp);


        return 0;
}
