/*Megan Marsh   
 *
 * the following program is to count:
 * whitespace
 * digits
 * uppercase alphabetics
 * lowercase alphabetics
 * in the input, which is a text file.*/

#include <stdio.h>

int main(void)
{
    int iochar, numdigits=0, numlower=0, numupper=0, numwhites=0;
                
    while((iochar = getchar())!=EOF) 
    {
        if ((iochar==' ')||(iochar=='\t')||(iochar=='\n'))
        {
            numwhites++;
            putchar(iochar);
        }
        else 
            if((iochar>='0')&&(iochar<='9')) 
            {
                numdigits++;
                putchar(iochar);
            }
            else 
                if(('a'<=iochar)&&(iochar<='z')) 
                {
                    numlower++;
                    putchar(iochar-32);
                } 
                else 
                    if(('A'<=iochar)&&(iochar<='Z'))
                    {
                        numupper++;
                        putchar(iochar);
                    }
                    else 
                        putchar(iochar);  
    }

    printf("%d white characters, %d digits, ",numwhites,numdigits);
    printf("%d lowercase have been converted to ",numlower);
    printf("uppercase and %d uppercase.\n",numupper);

    printf("\n\n");


    return 0;
}

/*
a. Execute the program in its present form using input for which it is easy to predict the output.
b. Analyze the program from the output obtained through the testing and tentatively make some changes.
c. Retest it until you are sure that the bugs are out.
d. Rewrite the program in more structured way. It should have more than one function.*/

