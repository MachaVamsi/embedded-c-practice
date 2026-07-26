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

char* my_strcpy2(char *dest, const char* src){  // return type should be pointer not void,											//becoz user need the orginal start point
	char *start = dest;
	while(1 ){    //
		*dest = *src;
		if(*src == '\0'){
			break;
		}
		dest++;
		src++;
	}
	return start;
}


int my_strcmp(const char *s1, const char *s2){

	while((*s1 != '\0') || (*s2 != '\0')){
		if (*s1==*s2){
			s1++;
			s2++;
		}
		else if (*s1>*s2){
			return 1;
		}

		else {
			return -1;
		}
	}
	return 1;
}

int my_strcmp2(const char *s1, const char *s2){

	while(*s1 == *s2) {
		s1++;
		s2++;
		if (*s1=='\0'){
			return 0;
		}
	}
	return *s1-*s2;
}

char *my_strcat(char *dest, const char *src){
	char *start = dest;
	while(*dest != '\0'){
		dest++;
	}
	 my_strcpy2(dest,  src);



//	while(1){
//		*dest= *src;
//		if(*src == '\0'){
//			break;
//		}
//		dest++;
//		src++;
//	}
	printf("%s is concatinated string\n",start );
	return start;
}


int is_alphnum(char s){
	if (((s >= 'A' && s <= 'Z') || (s >= 'a' && s <= 'z') || (s >= '0' && s <= '9'))){
		return 1;
	}
	return 0;
}


char convert_case(char s){
	if (s >= 'A' && s <= 'Z') {
		return s+('a' - 'A');
	}
	return s;
}

char to_upper(char c){
	if (c >= 'a' && c <= 'z') {
			return c-('a' - 'A');
		}
		return c;
}

char toggle_case(char c){
	if (c >= 'A' && c <= 'Z') {
			return c+('a' - 'A');
		}
	else if (c >= 'a' && c <= 'z') {
				return c-('a' - 'A');
			}
	return c;
}

void string_to_upper(char *str)
{
    while (*str)
    {
        *str = to_upper(*str);
        str++;
    }
}

int is_alpha(char c){
	if (c >= 'A' && c <='Z'){
		return 1;
	}
	 if (c >='a' && c<='z'){
		return 1;
	}
	return 0;
}

void own_libraries(){
	my_strlen("embedkari");
	my_strcpy();
	char src[] = "STM32";
	char dest[20];
	char * p =my_strcpy2(dest, src);
	printf("new copied dest is %s \n", dest);
	printf("p iss %s... \n", p);
	printf("string comparision of these two is %d \n", my_strcmp("vamsi", "vamsi"));
	printf("string comparision of these two is %d \n", my_strcmp("ABC", "ABD"));
	printf("string comparision of these two is %d \n", my_strcmp("ABD", "ABC"));
	printf("string comparision of these two is %d \n", my_strcmp("ABD", "ABC"));
	printf("string comparision of these two is %d \n", my_strcmp("", ""));
	printf("string comparision of these two is %d \n", my_strcmp("A", ""));
	printf("string comparision of these two is %d \n", my_strcmp("", "A"));
	char dest1[20] = "Hello ";
	char src1[] = "World";
	my_strcat(dest1, src1);

}
