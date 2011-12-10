/* a.  Write a function in C that takes an array of char and a char ** expression as parameters. 
 * The array of type char would contain a string the possibly starts with a sequence of decimal digits. 
 * Have the function convert the sequence of decimal digits it finds to type int and return 
 * the converted value. Have the function set the contents of its second parameter (a char * value) 
 * to point to the first character in the array that was not converted. 
 * For example, if the function was called convert () and the call to convert () was 
 * intval = convert (array, & charptr);
 * where array contained the string 274ADAMS/0
 * then after the call, intval would contain the 274, and charptr would point to the ‘A’ in the string.
 */

#include <stdio.h>
#include <stdlib.h>

int main (void)
{
    char* charptr;
    char a["1234Adams"];
    int intval;
    convert(intval, charptr);
    return 0;
}

void convert(&intval, charptr);
{
    gets(


