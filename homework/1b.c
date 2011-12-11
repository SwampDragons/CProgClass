/* Megan Marsh
 *
 * makes a copy of a file.  the names for the original file and the copy are on the command line.  
 *
 * assignment b uses fgets and fputs for input and output
 * */

#include <stdio.h>
#include <stdlib.h>

int main (int argc, char * argv[])
{
    FILE * fpin, *fpout;
    int iochar;

    if (argc != 3)
    {
        printf("Usage: cp oldfile newfile\n");
        exit (1);
    }
    if ((fpin=fopen (argv[1], "r")) ==NULL)
    {
        printf("can't open input file\n");
        exit(1);
    }
    if((fpout = fopen(argv [2], "w")) == NULL)
    {
        printf("can't open output file.\n");
        exit(1);
    }
    int max = 1024;
    char line [max];
    while ((fgets(line, max, fpin)) != NULL && line[0] != '\n')
        fputs(line, fpout);
    fclose(fpin);
    fclose(fpout);
return 0;
}
