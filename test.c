/*I like being code monkey!*/

#include <stdio.h>

void print_title ( void );

int main ( void ) 
{
    int lang;
    printf("French(1) or English(2)?");
    scanf("%d", &lang);
    if (lang == 1)
    {
        int n=0;
        while (n<10)
        {
            printf("Bonjour, Monde!\n");
            n++;
        }
    }
    else if (lang == 2)
        print_title();
    else 
        return 1; //error code
    return 0;
}

/*************************print_title()*************************************/

void print_title( void )

{
    int n;
    for (n=0; n<10; n++)
        printf( "%d Hello World!\n", n+1 );
}

