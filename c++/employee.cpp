/*
Write a program by creating an Employee class having the following functions and print the final salary.
1 - getInfo() which takes the salary, number of hours of work per day of employee as parameters
2 - AddSal() which adds $10 to the salary of the employee if it is less than $500.
3 - AddWork() which adds $5 to the salary of the employee if the number of hours of work per day is more than 6 hours.
*/

#include<iostream>
using namespace std;
class employee{
	int salary,wh;
	
	public:

	employee(){

	}
	
	void getinfo(int sal, float h){
		salary = sal;
		wh = h;
	}
	
	void addSal(){
		if(salary < 500){
			salary += 10;
		}
	}

	void addwork(){
		if(wh > 6){
			// 30 multiplied because assumed 5$ for daily wages.
			salary += 30 * 5;
		}
	}

	void display(){
		cout<<"salary:$"<<salary<<",working hours:"<<wh<<endl;
	}

};

int main(){
	employee e1,e2,e3,e4;

	e1.getinfo(450,5);
	e1.addSal();
	e1.addwork();
	e1.display();

	e2.getinfo(600,7);
	e2.addSal();
	e2.addwork();
	e2.display();

	e3.getinfo(500,6);
	e3.addSal();
	e3.addwork();
	e3.display();

	e4.getinfo(450,7);
	e4.addSal();
	e4.addwork();
	e4.display();
	return 0;
}