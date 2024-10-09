#include <stdio.h>
#include <stdlib.h>

struct Node {
    int iValue;
    float fValue;
    struct Node *next;
};

int main() {

    struct Node *head = (struct Node*) malloc(sizeof(struct Node));
    head->iValue = 5;
    head->fValue = 3.14;
	
	// Insert code here
	printf("address of the head: %p\n", (void*)&head);
    printf("value of the head: %p\n", (void*)head);
    printf("address of iValue: %p\n", (void*)&(head->iValue));
    printf("address of fValue: %p\n", (void*)&(head->fValue));
    printf("address of next: %p\n", (void*)&(head->next));
	
	return 0;
}