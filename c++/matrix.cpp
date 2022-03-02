/*
Create a class called Matrix containing a constructor that initialises the number of rows and the number of columns of a new Matrix object. 

The Matrix class has the following information:
1 - number of rows of matrix
2 - number of columns of matrix
3 - elements of matrix (You can use 2D vector)

The Matrix class has functions for each of the following:
1 - get the number of rows
2 - get the number of columns
3 - set the elements of the matrix at a given position (i,j)
4 - adding two matrices.
5 - multiplying the two matrices
You can assume that the dimensions are correct for the multiplication and addition.
*/

#include<iostream>

using namespace std;

class matrix{
public:
	int row ;
	int col ;
	int mat[row][col] ;

	matrix(){
	}
	
	void getrow(){
		cout<<"how many rows:";
		cin>>row;
	}

	void getcol(){
		cout<<"how many cols:";
		cin>>col;
	}

	void setEle(int i, int j,int ele){
		row=i;
		col=j;
		mat[row][col] = ele;
	}

	void display(){
		for(int i=0;i<row;i++){
			for(int j=0;j<col;j++){
				cout<<mat[row][col]<<"\t";
			}
			cout<<endl;
		}
	}

	matrix operator + (matrix obj){			
		matrix ans;
		for(int i=0;i<row;i++){
			for(int j=0;j<col;j++){
				ans.mat[i][j] = mat[i][j] + obj.mat[i][j];
			}
		}
		return ans;
	}

	matrix operator  * (matrix obj){			
		matrix ans;
		for(int i=0;i<row;i++){
			for(int j=0;j<col;j++){
				for(int k=0;k<j;k++){
				ans.mat[i][j] += mat[i][k] * obj.mat[k][j];
				}
			}
		}
		return ans;
	}
};

// int matrix :: row;
// int matrix :: col;

int main(){

	matrix m1,m2,m3;
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			m1.setEle(i,j,1);
		}
	}
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			m2.setEle(i,j,1);
		}
	}

	m1.display();
	m2.display();

	return 0;
}