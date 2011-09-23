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

Program has loop which ends with ^Z (this means infinite loop till you cancel it...?)
*/
#include <stdio.h>

void calculate_payment(); /*function for calculating individual car fees is calculate_payment()*/ 

int main (void)
{
int i;

for ( i=0 ; i<1; ) /*this loop is infinite because I am not incrementing i.*/
	calculate_payment();

return 0;
}
/********************define function calculate_payment()****************************************/
void calculate_payment()
{
char type; int enter; int exit; double fee;

/*find out type of vehicle*/
printf("Enter the type of vehicle: C for car, T for truck, or S for senior citizen.\n");
scanf("%c", &type);
if (type != C & type != T & type != S)
	{
	printf("invalid entry.  Please enter C, T, or S);
	scanf("%c", &type);
	}

/*find out hours in garage*/
printf("Using military numbers, write the entry and exit times separated by a space.\n")
scanf("%d %d," &enter, &exit);
if (enter < 600 | enter > 2200 | exit <600 | exit > 2200)
	{
	printf("invalid times.  Please reenter times between the hours of 0600 and 2200.\n");
	scanf("%d %d," &enter, &exit);
	}
/**************************calculate fees****************************************/
if ( type == C ) /*calculate fee for cars*/
{
	
	if (exit-enter <= 200)/*do not charge cars for less than or equal to two hours*/ 
		fee = 0;
	else if (200 < exit-enter <= 500) /*between 2 and 5 hours, charge $0.50 per hour*/
		fee = .50*(exit-enter-200);
	else /*between 5 and 15 hours, charge $0.25 per hour*/
		fee = 1.5 + .25*(exit-enter-500);
}
else if (type == T) /*calculate fee for trucks*/
{
	if (exit-enter <= 100) /*do not charge trucks for less than or equal to one hour*/
		fee = 0;
	else if (100 < exit-enter <= 300)/*between 1 and 3 hours, charge $1.00/hour*/
		fee = 1.00*(exit-enter-100);	
	else /*between 3 and 15 hours, charge $.75/hour*/
		fee = 2.0+.75*(exit-enter-300);
}
else if (type == S) /*calculate fee for seniors; do not charge for seniors ever*/
	fee = 0;
/********************report fee********************/
printf("The fee for this vehicle is $%.2f \n", fee);
}
