/*
 * string_traversal.c
 *
 *  Created on: Jul 21, 2026
 *      Author: vamsi
 *      this is the chatgpt exercise
 */
#include <stdio.h>
char str[] = "Embedded";

/* Method 1 strong traversal using array indices
 * Pros:
	Easier for beginners
	More readable if you're thinking in terms of arrays
 */
void array_indexing(){
	printf("With Method1 string traversal\n");
	for(int i=0; str[i]!='\0';i++){
		printf("%c", str[i]);
	}
	printf("\n");
}


/* Method 2 using pointer
 * Pros:
	Less syntax
	Closer to how many C library functions are implemented
	Very common in embedded drivers and libc implementations

	Neither is "better". As an embedded engineer, you should be comfortable with both.
 */
void pointer_traversal(){
	char *p = str;
	printf("with method 2 using pointer traversal\n");
	while(*p){
		printf("%c", *p);
		p++;
	}
	printf("\n");
}

void string_traversal(){
	array_indexing();
	pointer_traversal();
}
