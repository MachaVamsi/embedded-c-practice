/*
 * string_reversal.c
 *
 *  Created on: Jul 22, 2026
 *      Author: vamsi
 *      embedkari problem
 */


#include <stdio.h>
size_t my_strlen(const char * str);

void swap(char *a, char *b){
	char temp ;
	temp = *a;
	*a= *b;
	*b=temp;
}

void reverse_sentence(){

	char strr[] = "How Are You ?";
	int N = my_strlen(strr);
	int i=0, j= N-1;
	while(i<=j){
		swap(&strr[i], &strr[j]);   //pass the value using address i.e. pass by reference
		i++;
		j--;
	}
	printf("%s", strr);
}

