/*
Suppose you have a Piggie Bank with an initial amount of Rs.50 and you have to add somenmore amount to it. 
Create a class AddAmount with a data member named amount with an initial value of Rs. 50. 
Now make two constructors of this class as follows:
1 - without any parameter - no amount will be added to the Piggie Bank
2 - having a parameter which is the amount that will be added to the Piggie Bank
Create an object of the AddAmount class and display the final amount in the Piggie Bank.
*/

#include<iostream>
using namespace std;

class addamount{

	int r=50;

public:
	addamount(){
		//do nothing;
	}

	addamount(int amount){
		r+=amount;
	}

	void display(){
		cout<<"amount is:"<<r<<endl;
	}
	
};

int main(){
	int x;

	addamount a;
	addamount b(60);
	a.display();
	b.display();
	return 0;
}