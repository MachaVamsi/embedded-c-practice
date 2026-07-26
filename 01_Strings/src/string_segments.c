/*
 * string_segments.c
 *
 *  Created on: Jul 22, 2026
 *      Author: vamsi
 *      this is an embedkari problem
 */

#include <stdio.h>

size_t count_string_seg(const char * str){

	//Nice first attempt, but this solution only works for single
//	spaces between words.
//	It fails for several important cases.
	int count=0;
	while(*str){
		if (*str==32){
			count++;
		}
		str++;
	}

	return count+1;
}


size_t count_words(const char * str){
	int count =0;
	while(*str){
		//*(str+1)== '\0' handles the single word inputs
		if ((*str !=' ') && ((*(str+1)== ' ')|| (*(str+1)== '\0'))){
			count++;
		}
	str++;
	}
	return count;
}
