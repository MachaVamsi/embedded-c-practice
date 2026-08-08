/*
 * cgpt_lession1.c
 *
 *  Created on: Aug 2, 2026
 *      Author: vamsi
 *
 */
#include <stdio.h>

void module1(){
	int x=25;
	int * ptr ;
	ptr = &x;
	// because %p expects a void * argument.
	//Some compilers accept int * directly, but casting is the standard
	//and portable way.
	printf("%d :\n", x);
	printf("%p :\n",(void *) &x);
	printf("%p :\n", (void *)ptr);
	printf("%d :\n", *ptr);

	*ptr = 50;

	printf("\nAfter modification\n");

	printf("%d\n", x);
	printf("%p\n", (void *)&x);
	printf("%p\n", (void *)ptr);
	printf("%d\n", *ptr);
}
