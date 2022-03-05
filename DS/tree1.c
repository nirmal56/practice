/*

compile using 
gcc tree1.c -lm

//need to pass refference
*/


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct Node
{
	int data;
	struct Node *left, *right;
} * myQ[100];

int level = 0;
int q_front = 0;
int q_rear = 0;

int line[100];
int l_index = 0;
int output[100][100];
int output_level = 0;
int output_column = 0;

void playWithArray(int level)
{
	if (level == 0)
	{
		output[level][output_column] = 1;
		return;
	}
	for (int i = 0, j = pow(2,level) - 1; i < pow(2,level) / 2, j >= pow(2,level) / 2; i++, j--)
	{
		output[level][output_column++] = line[i];
		output[level][output_column++] = line[j];
	}
}
// Iterative method to find height of Binary Tree
void printLevelOrder(struct Node *root)
{
	// Base Case
	if (root == NULL)
		return;
	//insert root in queue
	myQ[q_rear++] = root;						//rear incre //push

	while (q_front != q_rear)					//untill empty
	{
		//rear-front=size//nodecount
		int nodeCount = q_rear - q_front;
		for (int i = 0; i < nodeCount; i++)
		{
			struct Node *node = myQ[q_front];	//front node of queue assigned to node->data of tree
			line[l_index++] = node->data;
			q_front++;									//front increament//pop
			if (node->left != NULL)
				myQ[q_rear++] = node->left;

			if (node->right != NULL)
				myQ[q_rear++] = node->right;
		}

		printf("\n");
		playWithArray(level);
		level++;
		output_column = 0;
		l_index = 0;
	}
}

// Utility function to create a new tree node
struct Node *newNode(int data)
{

	struct Node *temp = (struct Node *)malloc(sizeof(struct Node));
	temp->data = data;
	temp->left = temp->right = NULL;
	return temp;
}

// Driver program to test above functions
int main()
{
	// Let us create binary tree shown in above diagram
	struct Node *root = newNode(1);
	root->left = newNode(2);
	root->right = newNode(3);
	root->left->left = newNode(4);
	root->left->right = newNode(5);
	root->right->left = newNode(6);
	root->right->right = newNode(7);
	root->left->left->left = newNode(8);
	root->left->left->right = newNode(9);
	root->left->right->left = newNode(10);
	root->left->right->right = newNode(11);
	root->right->left->left = newNode(12);
	root->right->left->right = newNode(13);
	root->right->right->left = newNode(14);
	root->right->right->right = newNode(15);
	// < "Level Order traversal of binary tree is \n";
	printLevelOrder(root);

	for (int i = 0; i < level; i ++){
		for (int j = 0; j < pow(2,i); j ++){
			printf("%d, ", output[i][j]);
		}
	}
	printf("\n");
	for (int i = level -1 ; i >= 0; i--)
	{
		for (int j = 0; j < pow(2, i); j++)
		{
			printf("%d, ", output[i][j]);
		}
	}
	return 0;
}