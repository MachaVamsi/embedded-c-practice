#include<stdio.h>
#include<stdint.h>

uint8_t swap_nibble(uint8_t num){
	uint8_t  nibble =0;
	uint8_t result =0;

	nibble = num & 0xF0;
	result = result | (nibble>>4);
	result = result | ((num&0x0F)<<4);
	return result;
}

uint8_t count_setbits(uint8_t num){
	//hamming weight
	int count=0;
	while(num>0){
		num = num & (num-1);
		count++;
	}
	return count;
}

void swap2(int *a, int *b){

	*a = *a ^ *b;
	*b = *a ^ *b;
	*a = *b ^ *a;
}

void binary_arr_soring(){
	int num[10] = {1,0,1,1,0,1,1,1,0,1};
	int pc =-1;
	for (int i=0; i<10; i++){
		if ((num[i]==1) && (pc==-1)){
			pc =i;
		}
		if ((num[i]==0) && (pc !=-1)){
			swap2(&num[i], &num[pc]);
			pc = pc+1;
		}
	}
	for(int i=0; i<10; i++){
	printf("%d", num[i]);
	}
	printf(" is the sorted array\n");
}

int reverseBits(int n) {
    int i=0;
    int j= 31;
    int left, right;
    while(i<j){
        left = n & (1u<<j);
        right = n & (1u<<i);
        if (left ==0){
             n= n & (~(1u>>(j-i)));
        }
        else {
             n= n | left>>(j-i);
        }
        if (right==0) {
            n = n & (~(1u<<(j)));
        }
        else {
            n = n | right<<(j-i);
        }

        i++;
        j--;
    }
    return n;
}

//convert big endian to littel endian
//find endianness of a micro controller
//program to reverse word of strings.

void embedkari_lession3(){
	binary_arr_soring();
}
