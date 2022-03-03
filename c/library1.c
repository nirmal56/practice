/*
Write a menu driven program that depicts the working of a library. The menu options should be:
1. Add book information
2. Display book information
3. List all books of given author
4. List the title of specified book
5. List the count of books in the library
6. List the books in the order of accession number
7. Exit
Create a structure called library to hold accession number, title of the book, author
name, price of the book, and flag indicating whether the book is issued or not.
*/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct library{
	int an;				//acess num
	char title[50];
	char author[30];
	int price;
	int flag;			//flag = 1  Issued //flag =  0 not issued
}mylib[10]= {			//some default entries.
	1, "t1", "a1", 200, 1,
	2, "t2", "a1", 300, 1,
	3, "t3", "a2", 400, 0,
	4, "t3", "a3", 150, 0,
	5, "t5", "a4", 180, 1
};

int count(){
	int i = 0;
	while (mylib[i].an)
		i++;
	return i;
}

void display(int i){
	i--;
	printf("\n");
	printf("\nAccession Number : %d", mylib[i].an);
	printf("\nTitle : %s", mylib[i].title);
	printf("\nAuthor : %s", mylib[i].author);
	printf("\nPrice : %d", mylib[i].price);
	if (mylib[i].flag)							//Flag : 1
		printf("\nStatus : Issued");
	else										//Flag : 0
		printf("\nStatus : Not Issued(Avail)");			
}

void giveAuth(char *author){
	int i = 0;
	printf("\nBooks of \"%s\" are following : \n", author);
	//checks untill mylib.an is true, hence here when mylib.an>=4 ->false
	while (mylib[i].an){
		if (!(strcmp(author, mylib[i].author)))
			display(mylib[i].an);
		i++;
	}
}

void adbook(){
	int next = count();				//count current books
	mylib[next].an = next + 1;		//add +1 to add another book.

	while (getchar() != '\n');		//not consider enter as value 

	printf("\nEnter the title : ");
	gets(mylib[next].title);

	printf("\nEnter the author name : ");
	gets(mylib[next].author);

	printf("\nEnter the price : ");
	scanf("%d", &mylib[next].price);

	mylib[next].flag = 1;			//not issued(avail) by default
}

void bookTitle(int an){
	an--;
	printf("\nTitle of the book : %s\n", mylib[an].title);
}

void allBook(){
	int i = 0;
	while (mylib[i].an){
		display(i+1);
		i++;
	}
}

int main(){
	int ans = 1, an;
	char auth[30];
	while (ans != 7){
		printf("\n");
		printf("\n1.Add Book Info.");
		printf("\n2.Display Book Info.");
		printf("\n3.List all books of given author.");
		printf("\n4.List the title of specified book.");
		printf("\n5.List the counts of the books in library.");
		printf("\n6.List the books in order of accession number.");
		printf("\n7.Exit.");
		printf("\nEnter you choice : ");
		scanf("%d", &ans);
		switch (ans){
		case 1:
			adbook();
			break;
		case 2:
			printf("\nEnter the accession number of the book : ");
			scanf("%d", &an);
			display(an);
			break;
		case 3:
			while (getchar() != '\n');
			printf("Enter the name of the author (case sensitive) : ");
			gets(auth);
			giveAuth(auth);
			break;
		case 4:
			printf("\nEnter the accession number of book : ");
			scanf("%d", &an);
			bookTitle(an);
			break;
		case 5:
			printf("\nTotal Number of books : %d", count());
			break;
		case 6:
			allBook();
			break;
		case 7:
			return 0;
		}
	}
	return 0;
}
