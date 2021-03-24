#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "bt.h"

BinaryTree* createBinaryTree() {
    BinaryTree* ret = malloc(sizeof(BinaryTree));
    ret -> root = NULL;
    ret -> size = 0;
    return ret;
}

void insertInBinaryTree( BinaryTree* bt, int x ) {
/* probably going to do level order insertion. unsure how to make a queue in c? */
    BTNode* r = (bt -> root);
    /* Queue q of nodes
	q.push(r);
	while(q.size!= 0)
    */
	if(r == NULL){
		bt -> root = (struct BTNode*)malloc(sizeof(BTNode));
		bt -> root -> data = x;
		return;
	}
	int searching = 0;
	while(searching == 0){
		if(x < r -> data){
			if(r -> left == NULL){
				r -> left = (struct BTNode*)malloc(sizeof(BTNode));
				r -> left -> data = x;
				return;
			}
			else {
				r = r-> left;
				continue;
			}
		}
		else{
			if(r -> right == NULL){
				r -> right = (struct BTNode*)malloc(sizeof(BTNode));
				r -> right -> data = x;
				return;
			}
			else{
				r = r -> right;
				continue;
			}
		}
	}
}

char* toStringBinaryTree( BinaryTree* bt, TreeOrder order ) {
    if ( bt->root != NULL ) {
        char* printbuf = (char*)malloc( bt->size*3 );
        // call traversals with printbuf
        (*ftable[order]) (bt -> root, printbuf);
        return( printbuf );
    }
    else
        return( (char*)NULL );
}


void BinaryTreeInOrder( BTNode* bt, char* p ) {
	/* if left not null, call on left*/
	/* append data to p*/
	/* if right not null, call on right*/
    if(bt -> left != NULL) BinaryTreeInOrder(bt -> left, p);
    char* dat = (char*)malloc(32);
    sprintf(dat, "%d", bt -> data);
    strcat(p, dat);
    /*free(dat);*/
    if(bt -> right != NULL) BinaryTreeInOrder(bt -> right, p);
}

void BinaryTreePreOrder( BTNode* bt, char* p ) {
	/* append data to p */
	/* if left not null, call on left */
	/* if right not null, call on right */
    char* dat = (char*)malloc(32);
    sprintf(dat, "%d", bt->data);
    strcat(p, dat);
    /*free(dat);*/
    if(bt -> left != NULL) BinaryTreePreOrder(bt -> left, p);
    if(bt -> right != NULL) BinaryTreePreOrder(bt -> right, p);
}

void BinaryTreePostOrder( BTNode* bt, char* p ) {
	/* if left not null, call on left */
	/* if right not null, call on right */
	/* append data to p */
    if(bt -> left != NULL) BinaryTreePostOrder(bt -> left, p);
    if(bt -> right != NULL) BinaryTreePostOrder(bt -> right, p);
    char* dat = (char*)malloc(32);
    sprintf(dat, "%d", bt -> data);
    strcat(p, dat);
    /* free(dat) */
}

void initializeBinaryTree() {
/*    ftable = {&BinaryTreePreorder, &BinaryTreeInOrder, &BinaryTreePostOrder}; */
    ftable[PREORDER] = BinaryTreePreOrder;
    ftable[INORDER] = BinaryTreeInOrder;
    ftable[POSTORDER] = BinaryTreePostOrder;
}
