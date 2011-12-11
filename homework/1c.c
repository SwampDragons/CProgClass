/* Megan Marsh
 *
 * makes a copy of a file.  the names for the original file and the copy are on the command line. 
 *
 * assingment 1 c uses fread() to do the input and fwrite() to do the output.
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
    int size = sizeof(char);
    char line;
    while (fread(&line, size, 1, fpin) != 0)
        fwrite(&line, size, 1, fpout);
    fclose(fpin);
    fclose(fpout);
return 0;
}
