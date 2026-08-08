/*
 * structure_definition.c
 */

#include<stdio.h>
#include <string.h>

struct book {
	char title[20];
	int pages ;
	float price;
};

struct employee{
	int id;
	float salary;
	char department[20];
};

struct rectangle{
	float length;
	float breadth;
};


void structure_definition(){

	struct book b1;
	struct employee e1;
	struct rectangle r1;

	r1.length = 11.5;
	r1.breadth = 7;

	e1.id = 101;
	e1.salary = 55000;
	strcpy(e1.department ,"R&D");

	printf("%f %f \n",r1.length, r1.breadth );
	printf("%d %f %s \n", e1.id, e1.salary, e1.department);
}
