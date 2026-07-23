/*
 * palindrome.c
 *
 *  Created on: Jul 23, 2026
 *      Author: vamsi
 */


#include <stdio.h>
size_t my_strlen(const char * str);

char is_alphnum(char s){
	if (((s >= 'A' && s <= 'Z') || (s >= 'a' && s <= 'z') || (s >= '0' && s <= '9'))){
		return 1;
	}
	return 0;
}


char convert_case(char s){
	if (s >= 'A' && s <= 'Z') {
		return s+32;
	}
	return s;
}

char palindrome(){
	char strr[] =  "A man, a plan, a canal: Panama"; //"0P"; //"car, r78ac";
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
			if(!(convert_case(strr[i])== convert_case(strr[j]))){
				printf("not a palidrome");

				return 0;
			}
			i++;
			j--;
		}
	}
	printf("its a palidrome");
return 1;
}
