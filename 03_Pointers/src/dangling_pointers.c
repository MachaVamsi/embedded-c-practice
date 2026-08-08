/*
 * return_pointers.c
 *Module 4
 *  Created on: Aug 5, 2026
 *      Author: vamsi
 */
#include <stdio.h>

int *getNumber_nostatic()
{
    int x = 10;
    return &x;
}


int *getNumber_static()
{
    static int x = 50;
    return &x;
}

void return_pointer(){
	printf("---------Module4, return_pointer---------------\n");
	int *p, *p1, *p2;
	p = getNumber_nostatic();
	printf("dangling pointer %p\n", p);
//	printf("dereferencing dangling pointer %d\n", *p);  this will crash
	p1=getNumber_static();
	printf("static dangling pointer %p\n", p1);
	printf("dereferencing static dangling pointer %d\n", *p1);
	p2=getNumber_static();
		printf("static dangling pointer %p\n", p2);
		printf("dereferencing static dangling pointer %d\n", *p2);

}
