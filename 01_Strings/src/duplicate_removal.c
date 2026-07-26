/*
 * duplicate_removal.c
 *
 *  Created on: Jul 26, 2026
 *      Author: vamsi
 */


#include <stdio.h>
size_t my_strlen(const char * str);

void delete_at(char str[], int index){
	int N = my_strlen(str);
	for (int i=index; i<N; i++){
		str[i]=str[i+1];
	}
}

void duplicate_removal(char  str[]){
	int N;
	N= my_strlen(str);
	int seen =0;
	for(int i=0; i<N; i++){
		for (int j=0;j<i;j++){
			if (str[i] == str[j]){
				seen =1;
			}
		}
		if (seen==1){
			delete_at(str, i);
			N--;
			i--;
		}
		seen=0;
 }
	printf("%s \n", str);
}

void call_duplicate_removal(){
	char strr[] = "programming";
	duplicate_removal( strr);
}
