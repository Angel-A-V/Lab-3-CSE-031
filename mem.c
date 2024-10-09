#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

 int main() {
	int num;
	int *ptr;
	int **handle;

	num = 14;
	ptr = (int *) malloc(2 * sizeof(int));
	*ptr = num;
	handle = (int **) malloc(1 * sizeof(int *));
	*handle = ptr;

	// Insert code here
    printf("num is at: %p\n", (void*)&num);
    printf("num value: %d\n\n", num);

    printf("ptr is at: %p\n", (void*)&ptr);
    printf("ptr points to: %p\n", (void*)ptr);
    printf("value at ptr: %d\n\n", *ptr);

    printf("handle is at: %p\n", (void*)&handle);
    printf("handle points to: %p\n", (void*)handle);
    printf("handle points to ptr, which is at: %p\n", (void*)*handle);
    printf("value at *handle: %d\n\n", **handle);


	return 0;
} 

