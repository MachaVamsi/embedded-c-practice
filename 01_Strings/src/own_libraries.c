/*
 * string_length.c
 *
 *  Created on: Jul 21, 2026
 *      Author: vamsi
 *       this is the chatgpt exercise
 *       build string length function without inbuilt keywords
 */

#include<stdio.h>

size_t my_strlen(const char * str){

	int count=0;
	while(*str){
		printf("%c", *str);
		str++;
		count++;
	}
	printf("length is %d \n", count);
	return count;
}


void my_strcpy(){
	//this is my version. yes it works
	char src[] = "embedded";
	char dest[20];
	int i;
	for ( i=0; src[i]!='\0'; i++){
		dest[i]=src[i];

	}
	dest[i]='\0';
	printf("%s\n", dest);
}

char* my_strcpy2(char *dest, const char* src){  // return type should be pointer not void,
												//becoz user need the orginal start point
	char *start = dest;
	while(1 ){    //
		*dest = *src;
		if(*src == '\0'){
			break;
		}
		dest++;
		src++;
	}
//	dest = start;
	return start;
}

void own_libraries(){
	my_strlen("embedkari");
	my_strcpy();
	char src[] = "STM32";
	char dest[20];
	char * p =my_strcpy2(dest, src);
	printf("new copied dest is %s \n", dest);
	printf("p iss %s... ", p);
}
