#include<stdio.h>

void module1();
void module2();
void module3();
void my_own_library();
void operator_precedence();
void pointers_nd_functions();
void return_pointer();
int pointer_2_pointer();
int main(){
	printf("HelloWorld\n");
	module1();
	module2();
	module3();
	my_own_library();
	operator_precedence();

	pointers_nd_functions();
	return_pointer();
	pointer_2_pointer();
}
