#include <stdio.h>
#include <stdlib.h>

typedef struct Node_tag {
	int data;
	struct Node_tag * next;
	struct Node_tag * prev;
} Node;

typedef struct{
	Node* head;
	Node* tail;
} LinkedList;

extern void createLinkedList(LinkedList* ll);
extern void insertInLinkedList(LinkedList* ll, int dat);
extern void printLinkedList(LinkedList* ll);
extern void clearLinkedList(LinkedList* ll);
