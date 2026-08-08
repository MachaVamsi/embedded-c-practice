/*
 * pointers_nd_functions.c
 *
 * Module 4 — Pointers and Functions
	Here you'll learn things like:
	void swap(int *a, int *b);
	void increment(int *x);
	void print_array(int *arr, int n);
	This teaches:
	Pass by value
	Why C doesn't have pass by reference
	Modifying caller variables
	Arrays as function parameters
	Returning pointers
	Lifetime issues (returning address of local variable)
	You'll use everything from Modules 1–3.
 *
 *  Created on: Aug 4, 2026
 *      Author: vamsi
 */

#include <stdio.h>
void miniquiz_1(int x)
{    //pass by value
	x = 50;
}

void miniquiz_2(int *p)
{	//pass by value
    *p = 50;
}

#include <stdio.h>

void miniquiz_3(int *p)
{
    p = NULL;
    //P is local. The pointer variable disappears, not the data.
    if(p == NULL)
    	   printf("inside function NULL\n");
}


void pass_arr_2_func(int arr[]){
	printf("inside function sizeof(arr) %zu\n", sizeof(arr));
	arr[1] = 99;
}


void increment(int arr[], int n)
{
    for(int i=0;i<n;i++){
        arr[i]++;
        printf("%d ", arr[i]);
    }
    printf("\n ");
}

void increment2(int arr[], int n){
	int *p = arr;

		while ( n-- )
		{
		(*p)++;
		printf("%d ", *p);
		p++;
		}
		printf("\n ");
}


void pointers_nd_functions(){
	printf("---------Module4, Pointer and functions---------------\n");
    int a = 10;
    miniquiz_1(a); //Pass an ordinary variable
    printf("miniquiz_1 : %d\n", a);


    miniquiz_2(&a); //Pass-by-value of a pointer.
    printf("miniquiz_2 : %d\n", a);


    int x = 10;
    int *ptr = &x;
    miniquiz_3(ptr);
    if(ptr == NULL)
	   printf("NULL\n");
    else
	   printf("%d\n", *ptr);


    int arr[5]={10,20,30,40,50};
	printf("sizeof(arr) %zu\n", sizeof(arr));
	pass_arr_2_func(arr);
	printf("%d %d %d\n", arr[0], arr[1], arr[2]);
	increment(arr, 5);
	increment2(arr, 5);



}




