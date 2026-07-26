/*
 * analyze_string.c
 *
 *  Created on: Jul 26, 2026
 *      Author: vamsi
 */


#include <stdio.h>

char convert_case(char s);
int is_alpha(char c);


void analyze_string(const char *str){
	int vowel_cnt=0, cons_cnt=0, space_cnt=0, spec_cnt=0, digi_cnt=0;

	while(*str){
		char temp = *str;
		if (is_alpha(temp)){
			temp =  convert_case( temp);
			if((temp=='a') || (temp=='e') ||(temp=='i') || (temp=='o') || (temp=='u') ){
				vowel_cnt++;
			}

			else{
				cons_cnt++;
			}
		}
		else if (temp == ' '){
			space_cnt++;
		}

		else if ((temp >= '0')&& ((temp <= '9'))){
			digi_cnt++;
		}
		else {
			spec_cnt++;
				}
		str++;
	}
	printf("Vowels: %d\n"
			"Consonants: %d\n"
			"Special Char: %d\n"
			"Digits: %d\n"
			"Spaces: %d\n",
			vowel_cnt,
			cons_cnt,
			spec_cnt,
			digi_cnt,
			space_cnt );
}


void call_analyze_string(){
	analyze_string("TSM32 @ 32");
}
