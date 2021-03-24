#include "LinkedList.h"

extern void clearLinkedList(LinkedList* ll){
	Node* n = ll -> head;
	Node* nex;
	while(n != NULL){
		nex = n -> next;
		free(n);
		n = nex;
	}
	ll -> head = NULL;
	ll -> tail = NULL;
}

extern void createLinkedList(LinkedList* ll){
	ll -> head = NULL; /*malloc(sizeof(Node));*/
	ll -> tail = NULL; /*malloc(sizeof(Node)); */
	/* unsure if I need to malloc yet */
}

extern void insertInLinkedList(LinkedList* ll, int dat){
	Node* ins = malloc(sizeof(Node));
	ins -> data = dat;
	ins -> next = NULL;
	if(ll -> tail == NULL){
		ll -> head = ins;
		ll -> tail = ins;
		ins -> prev = NULL;
	}
	else{
		ll -> tail -> next = ins;
		ll -> tail = ins;
	}
}

extern void printLinkedList(LinkedList* ll){
	Node* n = ll -> head;
	while(n != NULL){
		printf("%d, ", n -> data);
		n = n -> next;
	}
	printf("\n");
}
