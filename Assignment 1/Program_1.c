// Task 1.1 WAP in C to perform mathematical operations using arithmetic operators.

#include<stdio.h>

void main(){
	
	int first_no,second_no;
	int sum,subs,mul,rem,div;
	
	printf("Enter First Number : ");
	scanf("%d",&first_no);
	
	printf("\nEnter Second Number : ");
	scanf("%d",&second_no);
	
	// Addition Operation
	sum=first_no+second_no;
	
	//substraction Operation
	subs=first_no-second_no;
	
	//multiplication Operation
	mul=first_no*second_no;
	
	//Division Operation
	div=first_no/second_no;
	
	// Remainder Operation
	rem=first_no%second_no;
	
	printf("\n The Addition of the Number is %d",sum);
	
	printf("\n The Substraction of the Number is %d",subs);
	
	printf("\n The Multiplication of the Number is %d",mul);
	
	printf("\n The Division of the Number is %d",div);
	
	printf("\n The Remainder of the Number is %d",rem);
}
