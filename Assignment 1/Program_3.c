// Task 1.3 Wap in C to input student name and roll number and print Student Name and roll number 

#include<stdio.h>

void main(){
	// The Name can be 50 Character long so the array of st_name stores 49 character 
	char st_name[50];
	int roll_no;
	
	// taking input name
	printf("\nEnter the Name of the Student : ");
	fgets(st_name, sizeof(st_name), stdin);
	// taking input roll number
	printf("\nEnter the Roll Number : ");
	scanf("%d",&roll_no);
	
	//printing the name and roll number
	printf("\nEntered Student Name : %s",st_name);
	printf("\nEntered Roll Number : %d",roll_no);
}
