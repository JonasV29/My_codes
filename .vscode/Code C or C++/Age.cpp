#include<stdio.h>
#include<stdlib.h>

int main() {

	int day,month,year;
	
	printf("*****Birth Date******");
	printf("what is the day you born? \n");
	scanf("%d",&day);
	printf("what is the month in number? \n");
	scanf("%d",&month);
	printf("And the year? \n");
	scanf("%d",&year);

	printf("your birth date is:  %d/ %d/ %d \n", day,month,year);

	return 0;
	
}