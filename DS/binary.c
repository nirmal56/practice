/*
Generate binary numbers between 1 to `n` using a queue.
Given a positive number n, efficiently generate binary numbers between 1 and n using the queue data
structure in linear time.
For example, for n = 16, the binary numbers are:
Input :
1 10 11 100 101 110 111 1000 1001 1010 1011 1100 1101 1110 1111 10000
Output:
1 10 11 100 101 110 111 1000 1001 1010 1011 1100 1101 1110 1111 10000
*/


#include <stdio.h>
#include <string.h>

#define MAX 20

char queue[MAX][MAX], temp[MAX];

int front = -1, rear = -1;

void enqueue(char *ptr){
	if(rear == MAX-1){
		return;
	}
	if(front == -1 && rear == -1)
		front = rear = 0;
	else
		rear = rear + 1;
	strcpy(queue[rear],ptr);
}

char* dequeue(){
	if(front == -1)
		printf("\n Queue underflowed");
	else{
		strcpy(temp,queue[front]);
		if(front == rear)
			front = rear = -1;
		else
			front = front + 1;
		return temp;
	}
}
void binaryconversion(){
	char temp2[MAX];
	strcpy(temp,dequeue());
	printf("%s\n",temp);
	strcpy(temp2,temp);
	strcat(temp,"0");
	enqueue(temp);
	strcat(temp2,"1");
	enqueue(temp2);
}

int main(){
	int i,n;
	printf("\nHow many numbers do you want to generate : ");
	scanf("%d",&n);
	char temp[2] = "1";
	enqueue(temp);
	printf("\nBinary numbers from 1 to %d :\n",n);
	for(i = 1; i <= n; i++)
		binaryconversion();
	return 0;
}