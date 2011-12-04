/*
Credit card numbers follow certain patterns. A credit card number must have between 13 and 16 digits. 
It must start with:
4 for Visa cards
5 for Master cards
37 for American Express cards
6 for Discover cards

In 1954, Hans Luhn of IBM proposed an algorithm for validating credit card numbers. 
The algorithm is useful to determine if a card number is entered correctly 
or if a credit card is scanned correctly by a scanner. Almost all credit card numbers are 
generated following this validity check, commonly known as the Luhn check or the Mod 10 check, 
which can be described as follows (for illustration, consider the card number 4388576018402626):

1. Double every second digit from right to left. If doubling of a digit results in a two-digit number, 
    add up the two digits to get a single-digit number    
    2 * 2 = 4
    2 * 2 = 4
    4 * 2 = 8
    1 * 2 = 2
    6 * 2 = 12 (1 + 2 = 3)
    5 * 2 = 10 (1 + 0 = 1)
    8 * 2 = 16 (1 + 6 = 7)
    4 * 2 = 8

2. Now add all single-digit numbers from Step 1. 
    4 + 4 + 8 + 2 + 3 + 1 + 7 + 8 = 37

3. Add all digits in the odd places from right to left in the card number.
    6 + 6 + 0 + 8 + 0 + 7 + 8 + 3 = 38

4. Sum the results from Step 2 and Step 3.
    37 + 38 = 75

5. If the result from Step 4 is divisible by 10, the card number is valid; otherwise, it is invalid. 
For example, the number 4388576018402626 is invalid, but the number 4388576018410707 is valid.

Write a program that prompts the user to enter a credit card number as a long integer. Display whether the number is valid or invalid. 

Here are sample runs of the program:

Sample 1:
Enter a credit card number as a long integer: 4246345689049834
4246345689049834 is invalid

Sample 2:
Enter a credit card number as a long integer: 4388576018410707
4388576018410707 is valid
*/

#include <stdlib.h>
#include <stdio.h>

int main (void)
{
    char x[16];
	int length;
	int num;
	int a;
	int i;
    printf("Enter a credit card number as a long integer:\n");
    gets(x);
	length = strlen(x);
	for (i=length-1; i >=0; i=i-2)
	{ if (*x[i]*2<10)
		num = *x[i];
		else
		num = (*x[i]*2 - 10 + 1);
		a += num
	
	
	
	
