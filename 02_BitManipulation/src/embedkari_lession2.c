#include <stdio.h>
#include <limits.h>
#include <stdint.h>

void display_bits(int num){
	//same as int 2 binary
	printf("%d \t",num);
	int mask = 1<<31;
	for (int i=0; i<32; i++){
		printf("%d", ((num & mask)? 1:0));
		num = num<<1;
	}
	printf("\n");
}


void implement_xor(int num1, int num2){
	int mask ;
	int result =0;
	int loop_limit = sizeof(num1)*CHAR_BIT;
	for (int i=0; i<loop_limit;i++ ){
		mask = 1<<i;
		if ((num1 & mask )!=(num2 & mask)){
			result = result | (mask);
		}
	}
	printf("own xor %d\n", result);
	printf("xor operator %d\n", num1^num2);
}


uint8_t rotate_left(uint8_t num) {
    uint8_t result;
    result = num & 1u;
    num = num >> 1u;
    num = num | (result << 7);

    printf("After left rotation 0x%02X\n", num); // Print in Hex for easy LED visualization
    return num;
}

void strip_lowestbit(uint8_t num){
	uint8_t result;
	result = num & (num-1);
	display_bits(num);
	printf("Before striping lowest bit %d and after %d \n",num, result);
	display_bits(result);
}

void unique_element(){
	int arr[9] = {1,2,2,5,5,7,7,7,1};
	int res=0;
	for (int i=0; i<9; i++){
		res= res^arr[i];
	}
	printf("unique elemnt is array is %d\n", res);
}

void embedkari_lession2(){
	display_bits(7);
	display_bits(120);
	implement_xor(5, 8);
	implement_xor(6,3);
	implement_xor(8,8);
	rotate_left(7);
	strip_lowestbit(3);
	unique_element();
}

