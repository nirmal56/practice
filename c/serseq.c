/*
Search and Sequence
Consider an integer array ‘a’ of size 10, where the value of the array elements are {1,5,4,8,9,2,0,6,11,7}. 
Write a program to
▪ Find whether the given element exists in an array or not. If the element exists in an
array, display YES else NO.
▪ To print a number following a sequence of elements in an array i.e., 15489206117.
*/

#include<stdio.h>

int a[10]={1,5,4,8,9,2,0,6,11,7};
int flag = 0;

void checkele(int num){
	for(int i=0;i<10;i++){
		if (num == a[i]){
			flag=1;
			break;
		}
	}
	if(flag == 0){
		printf("No\n");
	}
	else{
		printf("Yes\n");
	}

}

void printarr(){
	printf("array elemets are: ");
	for (int i=0;i<10;i++){
		printf("%d ",a[i]);
	}
	printf("\n");
}

int main(){
	
	int x;
	printf("which number you want to check:");
	scanf("%d",&x);
	checkele(x);

	printarr();

	return 0;
}