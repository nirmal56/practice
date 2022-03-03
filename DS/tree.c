/*
Print all nodes of a perfect binary tree in a specific order.
Given a perfect binary tree, print the values of alternating left and right nodes for each level in a top-down and bottom-up manner.
For example, there are two ways to print the following tree:
Variation 1: Print Top-Down
(1, 2, 3, 4, 7, 5, 6, 8, 15, 9, 14, 10, 13, 11, 12)

Variation 2: Print Bottom-Up
(8, 15, 9, 14, 10, 13, 11, 12, 4, 7, 5, 6, 2, 3, 1)
*/

#include<stdio.h>
#include<stdlib.h>

struct node {
   int data; 
	
   struct node *lptr;
   struct node *rptr;
};

int flag=0;

int enqueue(int Q[],int *F,int *R,int N,int ele){
 	if(flag==0){
		*F=0;
		*R=0;
		flag=1;
	}
	if (*R >= N){
		printf("Queue Overflow \n");
		return 0;
	}
	else{
		*R=*R+1;
		*F=1;
		Q[*R]=ele;
		return Q[*R];
	}
}

int dequeue(int Q[],int *F,int *R){
	int y;
	if(*F == 0){
		printf("Queue Underflowed \n");
		
		return 0;	
	}
	
	else {
		y=Q[*F];
		if(*F == *R){
			*F=0;	
			*R=0;
		}
		else{
			*F=*F+1;
		}
		return y;
	}
}
struct node *uptodown(struct node *t){
	int size=15;	int Q1[size];
	int Q2[size];
	int f1=0,r1=0;
	int f2=0,r2=0;
	int pushed,popped;



}

struct node *downtoup(struct node *t){

}

void main(){

	// for(char z='a';z<='o';z++)
	// 	struct node *z = (struct node*)malloc(sizeof(struct node));

	struct node *a = (struct node*)malloc(sizeof(struct node));
	struct node *b = (struct node*)malloc(sizeof(struct node));
	struct node *c = (struct node*)malloc(sizeof(struct node));
	struct node *d = (struct node*)malloc(sizeof(struct node));
	struct node *e = (struct node*)malloc(sizeof(struct node));
	struct node *f = (struct node*)malloc(sizeof(struct node));
	struct node *g = (struct node*)malloc(sizeof(struct node));
	struct node *h = (struct node*)malloc(sizeof(struct node));
	struct node *i = (struct node*)malloc(sizeof(struct node));
	struct node *j = (struct node*)malloc(sizeof(struct node));
	struct node *k = (struct node*)malloc(sizeof(struct node));
	struct node *l = (struct node*)malloc(sizeof(struct node));
	struct node *m = (struct node*)malloc(sizeof(struct node));
	struct node *n = (struct node*)malloc(sizeof(struct node));
	struct node *o = (struct node*)malloc(sizeof(struct node));

	a->data= 1;
	b->data= 2;
	c->data= 3;
	d->data= 4;
	e->data= 5;
	f->data= 6;
	g->data= 7;
	h->data= 8;
	i->data= 9;
	j->data= 10;
	k->data= 11;
	l->data= 12;
	m->data= 13;
	n->data= 14;
	o->data= 15;
	
	a->lptr = b;
	a->rptr = c;
	
	b->lptr = d;
	b->rptr = e;

	c->lptr = f;
	c->rptr = g;

	d->lptr = h;
	d->rptr = i;

	e->lptr = j;
	e->rptr = k;

	f->lptr = l;
	f->rptr = m;

	g->lptr = n;
	g->rptr = o;

	h->lptr = NULL;
	h->rptr = NULL;

	i->lptr = NULL;
	i->rptr = NULL;

	j->lptr = NULL;
	j->rptr = NULL;

	k->lptr = NULL;
	k->rptr = NULL;

	l->lptr = NULL;
	l->rptr = NULL;

	m->lptr = NULL;
	m->rptr = NULL;

	n->lptr = NULL;
	n->rptr = NULL;

	o->lptr = NULL;
	o->rptr = NULL;

	printf("uptodown= ");uptodown(a);
	printf("\n");
	printf("downtoup= ");downtoup(a);
	printf("\n");
	
}