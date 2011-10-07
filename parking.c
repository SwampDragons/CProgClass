/*
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
    int type=0; int enter=0; int exit=0; double fee; 
    int cars=0; int trucks=0; int seniors=0; double totfee=0.0; int tottime=0;

/************Scan input; if none of the input = EOF, then stay in while loop******/
    
    while( (type != EOF) && (enter !=EOF) && (exit != EOF) )
    {
        scanf("%d %d %d\n", &type, &enter, &exit);

/****************calculate fees(inside while loop)*******************************/
    
    if ( type == 'C' ) /*calculate fee for cars*/
    {
        if (exit-enter <= 200)/*do not charge cars for less than or equal to two hours*/ 
            fee = 0;
        else if (200 < exit-enter <= 500) /*between 2 and 5 hours, charge $0.50 per hour*/
		    fee = .50*((exit-enter-200)*.01);
	    else /*between 5 and 15 hours, charge $0.25 per hour*/
		    fee = 1.5 + .25*((exit-enter-500)*.01);
        
        /*increment counters*/
        cars++;
    }   
    
    else if (type == 'T') /*calculate fee for trucks*/
    {
    	if (exit-enter <= 100) /*do not charge trucks for less than or equal to one hour*/
	    	fee = 0;
	    else if (100 < exit-enter <= 300)/*between 1 and 3 hours, charge $1.00/hour*/
		    fee = 1.00*((exit-enter-100)*.01);	
    	else /*between 3 and 15 hours, charge $.75/hour*/
	    	fee = 2.0+.75*((exit-enter-300)*.01);
        
        /*increment counters*/
        trucks++;

    }
    
    else if (type == 'S') /*calculate fee for seniors; do not charge for seniors ever*/
    {
        fee = 0;

        /*increment counters*/
        seniors++;
    }
    
    totfee = totfee + fee;
    tottime = tottime + (exit-enter);
    
    }
/********************report fee********************/

    printf("\nToday there were %d cars, %d trucks, and %d seniors.\n", cars, trucks, seniors);
    printf("In total, $%f was collected in fees for %d hours of parking", totfee, tottime);

return 0;

}
