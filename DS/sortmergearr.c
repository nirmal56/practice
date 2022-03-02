/*
In-place merge two sorted arrays.
Given two sorted arrays, X[ ] and Y[ ] of size m and n each, merge elements of X[ ] with elements of
array Y[ ] by maintaining the sorted order, i.e., fill X[ ] with the first m smallest elements and fill Y[ ]
with remaining elements.
For example,
Input:
X[] = { 1, 4, 7, 8, 10 }
Y[] = { 2, 3, 9 }
Output:
X[] = { 1, 2, 3, 4, 7 }

Y[] = { 8, 9, 10 }
*/

#include <stdio.h>
 
void merge(int ar1[], int ar2[], int m, int n)
{
    for (int i = n - 1; i >= 0; i--)
    {
        int j, last = ar1[m - 1];
        //m-2 beacuse last already holds m-1 no need to increase time complexity by increasing insider loop +1 iteration
        for (j = m - 2; j >= 0 && ar1[j] > ar2[i]; j--)
            ar1[j + 1] = ar1[j];
 
        if ( last > ar2[i])
        {
            ar1[j + 1] = ar2[i];
            ar2[i] = last;
        }
    }
}
void display(int a[],int x){
	for(int i=0;i<x;i++){
		printf("%d ",a[i]);
	}
	printf("\n");
}
 
int main()
{
    int ar1[] = { 1, 4, 7, 8, 10 };
    int ar2[] = { 2, 3, 9};

    int m = sizeof(ar1) / sizeof(ar1[0]);
    int n = sizeof(ar2) / sizeof(ar2[0]);

    merge(ar1, ar2, m, n);
 
 	printf("------------first---------------\n");
    display(ar1,m);

 	printf("------------second--------------\n");
    display(ar2,n);

    return 0;
}