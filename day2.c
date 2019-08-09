#include<stdio.h>
#include<stdlib.h>
struct node{
	int v;
	struct node *left, *right;
};

struct node *create(int data, struct node *lptr, struct node *rptr){
	struct node *nn = (struct node*)malloc(sizeof(struct node*));
	nn->v = data;
	nn->left = lptr;
	nn->right = rptr;
	return nn;
}

int main(){
	struct node *root = create(3, create(4, NULL, NULL), NULL);
	printf("%d", (root->left)->v);
	int a;
	scanf("%d", &a);
}