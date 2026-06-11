// task 1.7 WAP in C to calculate average of three numbers.

#include<stdio.h>

void main(){
	
	int first_no,second_no,third_no,average;
	
	printf("Enter First Number : ");
	scanf("%d",&first_no);
	
	printf("Enter Second Number : ");
	scanf("%d",&second_no);
	
	printf("Enter Third Number : ");
	scanf("%d",&third_no);
	
	//calculate average
	average=(first_no+second_no+third_no)/3;
	
	printf("The Average of the Numbers is %d",average);
}
