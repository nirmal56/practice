/*Write a function that receives marks received by a student in 3 subjects and returns the total and percentage of these marks. 
Call this function from main( ) and print the results in main( ).*/

#include<stdio.h>

float per(int m, int s, int e){
	return ((float)m+(float)s+(float)e)/3;
}

int main(){
	int s,e,m;
	printf("Enter Maths , science and english marks: ");
	scanf("%d %d %d",&m,&s,&e);
	printf("percentage=%f\n",per(m,s,e));
	return 0;
}