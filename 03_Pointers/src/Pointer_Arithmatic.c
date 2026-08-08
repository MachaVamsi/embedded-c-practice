/*
 * Module2.c ponter-Arithamatic
 *
 *  Created on: Aug 2, 2026
 *      Author: vamsi
 */
#include <stdio.h>

void pointer_arithmatic(){
	int arr[] = {10, 20, 30, 40};
	int *p = arr;
	printf("%d\n", *p);
	printf("%p\n", p);
	p++;
	printf("%d\n", *p);
	printf("%p\n", p);
	p++;
	printf("%d\n", *p);
	printf("%p\n", p);
}

void module2(){
	printf("---------Module2, Pointer Arithmatic---------------\n");
	pointer_arithmatic();
}
