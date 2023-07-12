#include <stdio.h>

typedef struct Node
{
	int val;
	struct Node * next; // address of next node in linked list
}Node;

int main(){
	Node node1 = {10};
	Node node2 = {20};
	node1.next = &node2; // storing address of node2
	node2.next = NULL;

	printf("%d\n", (*(node1.next)).val );
	printf("%d\n", ((node1.next))->val );

	return 0;
}