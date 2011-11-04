/*
 * Megan Marsh
 *
VISITOR PARKING:
Cars:
	First 2 hours	Free
	Next 3 hours	0.50/hour
	Next 10 hours	.25/hour
Trucks:
	First 1 hour	Free
	Next 2 hours	1.00/hours
	Next 12 hours	0.75/hour
Senior Citizens: Free of charge

Program accepts as input:
	*a one-character designator (C, T or S), 
	*two military numbers in range of 0600-2200 (6:00 A.M to 10:00 P.M). 

    Using this input, the program computes the appropriate charge and the round up time that car was parked.

For each vehicle, program prints:
	*arrival time, departure time and cost. 

Program also provides a summary at the end of each day indicating: 
	*total cars, trucks, and senior , time and fees. 

Program has loop which ends with ^Z (EOF)
*/

#include <stdio.h>

int main (void)

{
    char type=0; 
    double enter=0; 
    double exit=0; 
    double fee; 
    int cars=0; 
    int trucks=0; 
    int seniors=0; 
    double totfee=0.0; 
    int tottime=0;

/************Scan input; if none of the input = EOF, then stay in while loop******/
    
    while(scanf("%c %lf %lf\n", &type, &enter, &exit) != EOF )
    {

    /**********************calculate fees(inside while loop)*******************************/
        double duration= exit-enter;

        if ( type == 'C' ) /*calculate fee for cars*/
        {
            if (duration <= 200)/*do not charge cars for less than or equal to two hours*/ 
                fee = 0;
            else if (duration > 200 && duration <= 500) /*between 2 and 5 hours, charge $0.50 per hour*/
                fee = .50*((duration-200)*.01);
            else /*between 5 and 15 hours, charge $0.25 per hour*/
                fee = 1.5 + .25*((duration-500)*.01);
            
            /*increment counters*/
            cars++;
        }   
        
        else if (type == 'T') /*calculate fee for trucks*/
        {
            if (duration <= 100) /*do not charge trucks for less than or equal to one hour*/
                fee = 0;
            else if (duration > 100 && duration <= 300)/*between 1 and 3 hours, charge $1.00/hour*/
                fee = 1.00*((duration-100)*.01);	
            else /*between 3 and 15 hours, charge $.75/hour*/
                fee = 2.0+.75*((duration-300)*.01);
            
            /*increment counters*/
            trucks++;

        }
        
        else if (type == 'S') /*calculate fee for seniors; do not charge for seniors ever*/
        {
            fee = 0;

            /*increment counters*/
            seniors++;
        }
        
        totfee += fee;
        tottime += duration;
        printf("the fee for this vehicle was %.2f\n", fee);

    }
/********************report fee********************/

    printf("\nToday there were %d cars, %d trucks, and %d seniors.\n", cars, trucks, seniors);
    printf("In total, $%.2f was collected in fees for %d hours of parking\n", totfee, tottime/100);

return 0;

}
