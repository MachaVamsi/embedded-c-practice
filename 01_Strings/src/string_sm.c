/*
 * string_sm.c
 *
 *  Created on: Jul 21, 2026
 *      Author: vamsi
 *      from embedkari string manipulation course
 */


#include <stdio.h>

void string_sm(){
	char *str1 ="dog";
	char str2[] ="dog";
	printf("%d\n%d\n%d", sizeof(str1), sizeof(str2), sizeof("dog"));
}
