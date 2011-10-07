/*
 * Write a program that can serve as a simple calculator. 
 * This calculator keeps track of a single number (of type double) that is called result and that starts out as 0.0. 
 * Each cycle allows the user to repeatedly add, subtract, multiply, or divide by a second number. 
 * The result of one of these operations becomes the new value of result. 
 * The calculation ends when the user enters the letter R for “result” (either in uppercase or lowercase). 
 * The user is allowed to do another calculation from the beginning as often as he or she wants. Use the scanf for input.
 *
 * The input format is shown in the following sample dialog.
 * If the user enters any operator symbol other than +, −, *, or /, then display message “UnknownOperatorException is thrown
 * and the user is asked to reenter that line of input..
 */
#include <stdio.h>

int main (void)

{
    double result = 0.0; int operator; double number;

    printf("type an operator (+, -, /, *) and a number **not** separated by a space, then press enter.\n");
   
    while( (operator = getchar()) != 'R')
    {
        number = getchar();
        if (operator == '+')
          {
              result = result + number;
              printf("result + %f = %f", number, result);
          }

        else if (operator == '-')       
          {
              result = result - number;
              printf(" result + %f = %f", number, result);
          }
        else if (operator == '*')
          {
              result = result*number;
              printf(" result + %f = %f", number, result);
          }
        else if (operator == '/')
          {
              result = result/number;
              printf(" result + %f = %f", number, result);
          }
        
        getchar();
    }

    printf("final result is %f", result);

    return 0;

}
