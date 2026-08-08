/*
 * Module 3 — Arrays vs Pointers
	Most confusing interview topic.
	Topics:
	arr
	&arr
	arr+1
	&arr+1
	sizeof(arr)
	sizeof(pointer)
 */



#include <stdio.h>



void problem1(){
	int arr[5] = {10,20,30,40,50};
	printf("%p\n", (void *)arr);
	printf("%p\n", (void *)&arr[0]);
}

void problem2(){
	int arr[5];
	printf("arr : %p\n", (void *)arr);//Pointer to first element after decay
	printf("&arr : %p\n", (void *)&arr); //Pointer to the entire array |int (*)[5]`

	printf("(arr + 1): %p\n", (void *)(arr + 1)); // pointer to next element
	printf("(&arr + 1): %p\n", (void *)(&arr + 1)); //pointer to next addres after array.
}

void problem3(){
	//sizeof test with arrays
	int arr[5];
	printf("sizeof(arr) : %zu\n", sizeof(arr));
	int *p = arr;
	printf("sizeof(p) : %zu\n", sizeof(p));
	printf("sizeof(&arr) : %zu\n", sizeof(&arr));
}

void problem4(){
	int arr[5] = {10,20,30,40,50};
	printf("arr[2] : %d\n", arr[2]);
	printf("*(arr + 2) : %d\n", *(arr + 2));
}

void problem5(){
	int arr[] = {10,20,30};
	printf("2[arr] : %d\n", 2[arr]); // its legal, No one uses it,  Because it's terrible for readability.
}

void pointer_arr_traversal(){
	int arr[] = {10,20,30};
	int sum=0;
	 int max = *(&arr[0]); //int max = *arr;  //int max = arr[0];
	for (int i=0; i<3; i++){
		printf("%dth element %d\n", i, *(arr+i));
		sum += *(arr+i);
		if(max < *(arr+i)){
			max = *(arr+i);
		}
	}
	printf("sum is %d:\n", sum);
	printf("max is %d:\n", max);
}

void reverse_traversal(){
	int arr[] = {10,20,30};
	for (int i=2; i>=0; i--){
		printf("%dth element %d\n", i, *(arr+i));
	}

	// 2nd version embeed ppl use it seems
	int *p = arr + 2;
	while(p >= arr)
	{
	    printf("%d\n", *p);
	    p--;
	}
}

void copy_array(){
	int arr[] = {10,20,30};
	int dup[3];
	for (int i=0; i<3; i++){
		printf("%dth element %d is copied\n", i, *(arr+i));
		*(dup+i)= *(arr+i);
		}
}

void module3(){
	printf("---------Module3, Array Vs Pointer---------------\n");
	problem1();
	problem2();
	problem3();
	problem4();
	problem5();

}
