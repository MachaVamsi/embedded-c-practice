/*
 * anagram.c
 *
 *  Created on: Jul 23, 2026
 *      Author: vamsi
 *      this is an embedkari problem
 */

#include <stdio.h>

char anagaram(){
	char a[] = "anagram";
	char b [] = "nagaramm";

	int arr[26]={0};
	int idx;

	 // Create modifiable pointers tracking the start of each array
	    char *ptrA = a;
	    char *ptrB = b;

	    // Loop 1: Increment counts using ptrA
	    while (*ptrA != '\0') {
	        idx = *ptrA - 'a'; // Clean pointer dereference
	        arr[idx]++;
	        ptrA++;            // Safely moves the pointer to the next character
	    }

	    // Loop 2: Decrement counts using ptrB
	    while (*ptrB != '\0') {
	        idx = *ptrB - 'a';
	        arr[idx]--;
	        ptrB++;            // Safely moves the pointer to the next character
	    }

	for (int i=0; i<26; i++){
		if (arr[i]!=0){

			printf("\n given strings are not anagrams");
			return 0;
		}
	}
	printf("\n given strings are anagrams");
	return 1;
}
