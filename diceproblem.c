
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
    int i;
    srand(time(NULL));
    for(i=0; i < 10; i++)
        printf("===========>>>%d\n",rand()%(6-1+1)+1);

}
