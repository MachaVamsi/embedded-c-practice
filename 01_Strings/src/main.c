#include<stdio.h>

extern int token_pasting_operator();
void stringizing_operator();
void  pratice2();
int practice1();
void string_sm();
void practice3();
void string_traversal();
void  practice4(void);
void own_libraries();
void reverse_sentence();
size_t count_string_seg(const char * str);
char anagaram();
char palindrome();

int main(){
//	token_pasting_operator();
//	stringizing_operator();
//	pratice2();
//	practice1();
//	string_sm();
//	practice3();
//	string_traversal();
//	own_libraries();
//	practice4();
	reverse_sentence();
	printf("\n segments in the input string is %d", count_string_seg("Hello, my name is vamsi!"));
	anagaram();
	palindrome();
}
