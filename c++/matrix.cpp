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
	// int i;
	int **mat;

	
	matrix(int row,int col){
		this->row=row;
		this->col=col;

		mat = new int*[row];

		for(int i=0; i<row;i++){
			mat[i] = new int[row];
		}
	}
	
	void getrow(){
		cout<<"rows:"<<row<<endl;
	}

	void getcol(){
		cout<<"cols:"<<col<<endl;
	}

	void setEle(int i, int j,int ele){
		mat[i][j] = ele;
		// cout<<mat[i][j]<<endl;
	}

	void display(){
		cout<<"---------------contents of matrix--------------"<<endl;
		for(int i=0;i<row;i++){
			for(int j=0;j<col;j++){
				cout<<mat[i][j]<<" ";
			}
			cout<<endl;
		}
	}

	matrix operator + (matrix obj){			
		matrix ans(row,col);
		for(int i=0;i<row;i++){
			for(int j=0;j<col;j++){
				ans.mat[i][j] = mat[i][j] + obj.mat[i][j];
			}
		}
		return ans;
	}

	matrix operator * (matrix obj){			
		matrix ans(row,col);
		for(int i=0;i<row;i++){
			for(int j=0;j<col;j++){
				for(int k=0;k<col;k++){
					ans.mat[i][j] += mat[i][k] * obj.mat[k][j];
				}
			}
		}
		return ans;
	}
};



int main(){

	matrix m1(2,2),m2(2,2),m3(2,2);
	m1.getrow();
	m1.getcol();
	for(int i=0;i<m1.row;i++){
		for(int j=0;j<m1.col;j++){
			m1.setEle(i,j,1);
		}
	}
	m2.getrow();
	m2.getcol();
	for(int i=0;i<m2.row;i++){
		for(int j=0;j<m2.col;j++){
			m2.setEle(i,j,2);
		}
	}

	m1.display();
	m2.display();

	m3=m1+m2;
	m3.display();

	m3=m1*m2;
	m3.display();

	
	return 0;
}