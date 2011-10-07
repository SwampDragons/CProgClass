
/* Programming Project ?
 *
 * One of the most popular games of chance is a dice game known as “craps,” which is played in casinos and back alleys throughout the world.  
 * The rules of the game are straightforward:
 *
 * A player rolls two dice.  Each die has six faces.  These faces contain 1,2,3,4,5, and 6 spots.  After the dice have come to rest, the sum of the spots on the two upward faces is calculated.  If the sum is 7 or 11 on the first throw, the player wins.  If the sum is 2,3, or 12 on the first throw (called “craps”), the player loses (i.e., the “house” wins).  If the sum is 4,5,6,8,9, or 10 on the first throw, then that sum becomes the player’s “points.”  To win, you must continue rolling the dice until you “make your points.”  The player loses by rolling a 7 before making the points.
 *
 * Make a program to simulate the game of craps for 100 times and print number of the wins in first roll, lost in first roll, wins with points, and lost with points.  
 */

#include <stdio.h>
#include <stdlib.h>

void main()

{
    int i; int roll; int roll2; int points; int win1; int lose1; int win2; int lose2;
    
    /*win1 is number of wins on first roll, win2 is number of wins with points. Same for lose1 and lose2
     * roll is used to compare individual rolls*/
    
    srand(time(NULL));
    for(i=0; i < 99; i++)
    {
        roll=((rand()%(6-1+1)+1) + (rand()%(6-1+1)+1)); /*roll = points for one roll of two dice*/
        
        if ( (roll==7) || (roll==11) )
        { 
            win1++;
            printf("Won on the first roll in game %d \n",i);
        }
        else if ( (roll==2) || (roll==3) || (roll==12))
        {
            lose1++;
            printf("Lost on the first roll in game %d \n", i);
        }
        else
        {
            do 
            { points = roll;
              roll2 = (rand()%(6-1+1)+1) + (rand()%(6-1+1));}
            while ( (roll2 != 7) || (roll2 != points) );
         
            if (roll2 == 7)
            {lose2++;
                printf("lost with points in game %d \n", i);}
            
            else if (roll2 == points)
            {win2++;
                printf("won with points in game %d \n", i);}
        }
     }

    printf( "\n You won on the first roll %d times.\n You lost on the first roll %d times.\n", win1, lose1);
    printf("You won with points %d times.\n You lost with points %d times.\n", win2, lose2);

}
