// Task 1.2 Wap in C to find max number from two numbers using ternary operator.

#include<stdio.h>

void main(){
	int first_no,second_no,max;
	
	printf("Enter the First Number : ");
	scanf("%d",&first_no);
	
	printf("\n Enter the Second Number : ");
	scanf("%d",&second_no);
	
	max=(first_no > second_no) ? first_no : second_no;
	
	printf("\n The Maximum Number is %d",max);
	
}
