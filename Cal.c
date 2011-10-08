/*Write a program that can serve as a simple calculator. 
 * This calculator keeps track of a single number (of type double) that is called result and that starts out as 0.0. 
 * Each cycle allows the user to repeatedly add, subtract, multiply, or divide by a second number. 
 * The result of one of these operations becomes the new value of result. 
 * The calculation ends when the user enters the letter R for “result” (either in uppercase or lowercase). 
 * The user is allowed to do another calculation from the beginning as often as he or she wants. Use the scanf for input.
 *
 * The input format is shown in the following sample dialog.
 * If the user enters any operator symbol other than +, −, *, or /, then display message “UnknownOperatorException is thrown
 * and the user is asked to reenter that line of input*/

#include <stdio.h>
void calc ();

int main (void)
{
    char again;
    printf("type an operator (+, -, /, *) and a number **not** separated by a space, then press enter.\n");
    
    do     
    {
        calc();
        printf("Again? (y/n)\n");
        scanf("%c", &again);
        while(getchar() != '\n');
    }
    while( again == 'y' || again == 'Y');

    return 0;
}  

/*****************Define Function Calc()***********************************************/

void calc ()
{
    double result = 0.0; 
    char operator; 
    double number;
    
printf("result = %.2lf\n", result);

    while(1)
    {
        operator = getchar();
        if (operator == 'R' || operator == 'r')
        {
            while(getchar() != '\n');
            break;
        }
        scanf("%lf", &number);
        while (getchar() != '\n');

        if (operator == '+')
          {   result += number;
              printf("result + %.2lf = %.2lf\n", number, result);
          }

        else if (operator == '-')       
          {   result -= number;
              printf("result - %.2lf = %.2lf\n", number, result);
          }
        
        else if (operator == '*')
          {   result *= number;
              printf("result * %.2lf = %.2lf\n", number, result);
          }
        
        else if (operator == '/')
          {   result /= number;
              printf("result / %.2lf = %.2lf\n", number, result);
          }
        else 
            printf("%c is an unknown operation!\nReenter your last command:\n", operator);
    }
 
    printf("final result is %.2f\n", result);

}
