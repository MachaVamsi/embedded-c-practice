#include <stdio.h>



void post_increment(){
	int arr[] = {10,20,30};
	int *p = arr;
	printf("*p++ results in  : %d\n", *p++);
	printf("*p after that is : %d\n", *p);

	// The increment happens immediately to the variable p,
	//but the value returned by p++ is the old pointer.

	int x = 5;

	printf("%d\n", x++);
	printf("%d\n", x);
}


void pre_increment(){
	int arr[] = {10,20,30};
	int *p = arr;
	printf("*p++ %d\n", *p++); // compiler sees it as *(P++). p++ increments, but returns old value
	printf("(*p)++ %d\n", (*p)++); //20++. compiler derefence and increments and prints/returns old value
	printf("*++p %d\n", *++p);
	p--;
	printf("*++p %d\n", *p);
}

void operator_precedence(){
	printf("---------Module3 Operator Precedence Exercise---------------\n");
	post_increment();

	pre_increment();
}
