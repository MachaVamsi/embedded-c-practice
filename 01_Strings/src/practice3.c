/*
 * practice3.c
 *
 *  Created on: Jul 21, 2026
 *      Author: vamsi
 *      from embedkari string manipulation course,  clubbed the doubts ones into
 *      this practice file
 */
#include <stdio.h>

void practice3(){
	char *str = "Hello";
//	str[0]='Y';  // this results in undefined behavior
//	str[0]="Y";  t// this leads to compile time error . "Y" (in double quotes) is a string literal, which the compiler treats as a pointer to a character (char *).When you write str[0] = "Y";, you are trying to assign a memory address (a pointer) directly into a single character variable. The compiler blocks this and gives you the -Wint-conversion error because it cannot automatically turn a pointer into a standalone character.
	printf("%s\n",str);

}

