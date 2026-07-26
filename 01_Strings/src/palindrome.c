/*
 * palindrome.c
 *
 *  Created on: Jul 23, 2026
 *      Author: vamsi
 */


#include <stdio.h>
size_t my_strlen(const char * str);

char convert_case(char s);
int is_alphnum(char s);

char chk_palindrome(const char *strr){
	int N = my_strlen(strr);

	int i=0;
	int j= N-1;

	while(i<j){
		if(!(is_alphnum(strr[i]))){
					i++;
				}
		else if(!(is_alphnum(strr[j]))){
					j--;
				}
		else{
			if((convert_case(strr[i])!= convert_case(strr[j]))){
				return 0;
			}
			i++;
			j--;
		}
	}
return 1;
}



void palindrome(){
	char ret;
	ret = chk_palindrome("A man, a plan, a canal: Panama")  ; // //"0P"; //"car, r78ac";
	if (ret){
		printf("its a palindrome");
	}
	else{
		printf("not a palindrome");
	}
}
