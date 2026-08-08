/*
 * pointer_2_pointer.c
 *Goal (2–3 days)

By the end of this module, you'll understand:

What int ** actually means (without memorizing syntax).
Why a pointer is also just a variable with its own address.
How to modify the caller's pointer.
Why functions like malloc() often use double pointers in APIs.
How argv in main() relates to pointer-to-pointer.
Common interview questions on int **.
 */


#include <stdio.h>
#include <stdlib.h>

void makeNull(int **pp)
{
    *pp = NULL;
}

void swap_pointer(int **a, int **b){
	int *p ;
	 p=*a;
	 *a=*b;
	 *b=p;
}


void createBuffer(int **ptr)
{
    *ptr= malloc(5*sizeof(int));
    if (*ptr == NULL)
        {
            printf("Allocation failed\n");
        }
}




int pointer_2_pointer()
{
	printf("---------Module5, ** pointer---------------\n");
    int x = 10;
    int *ptr = &x;
    makeNull(&ptr);
    if(ptr == NULL)
        printf("NULL\n");
    else
        printf("%d\n", *ptr);

    //my malloc
    int *ptrr = NULL;
   createBuffer(&ptrr);
   for(int i=0;i<5;i++)
	   ptrr[i] = (i+1)*10;
   for(int i=0;i<5;i++)
	   printf("%d ", ptrr[i]);
   free(ptrr);
   return 0;
}

