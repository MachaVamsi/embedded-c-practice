/*
 * my_own_library.c
 *
 *  Created on: Aug 2, 2026
 *      Author: vamsi
 */

#include <stdio.h>

void my_memcpy(int *dest, int *src, int n){
	/*
	 * Rules:
		No indexing ([])
		No for(i) using src[i]
		Only pointers
	 */
	int s = n;
	while(n--){
		*(dest+n) = *(src+n);
	}
	int *p = dest;
	while(p<dest+s){
		printf("element %d is copied\n",  *p);
		p++;
	}
}


void my_memcpy2(void *dest,
		const void *src,
        int n){

	unsigned char * d = dest;
	const unsigned char * s= src;

	while(n--){
		*(d) = *(s);
		d++;
		s++;
	}
	return dest;
}



void my_own_library(){
	printf("---------Module3 memcopy Exercise---------------\n");
	int dest[5];
	int src[5] = {10,12,15,16,17};
	my_memcpy( dest,  src,  5);
}

