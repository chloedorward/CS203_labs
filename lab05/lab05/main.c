#include <stdio.h>
#include <stdlib.h>
#include "LinkedList.h"

LinkedList linked;

int main(int argc, char* argv[]){
	createLinkedList(&linked);
	printLinkedList(&linked);
	insertInLinkedList(&linked, 7);
	printLinkedList(&linked);
	insertInLinkedList(&linked, 5);
	printLinkedList(&linked);
	clearLinkedList(&linked);
	printLinkedList(&linked);
	return 0;
}
