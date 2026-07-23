/*
 * string_segments.c
 *
 *  Created on: Jul 22, 2026
 *      Author: vamsi
 *      this is an embedkari problem
 */

#include <stdio.h>

size_t count_string_seg(const char * str){
	int count=0;
	while(*str){
		if (*str==32){
			count++;
		}
		str++;
	}

	return count+1;
}

