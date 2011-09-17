/*I like being code monkey!*/

#include <stdio.h>

void print_title ( void );

int main ( void ) 
{
    print_title();
    return 0;
}

/*************************print_title()*************************************/

void print_title( void )

{
    int n;
    for (n=0; n<10; n++)
        printf( "%d Hello World!\n", n+1 );
}

