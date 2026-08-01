#include <stdio.h>
#include <stdint.h>
#include <math.h>

char is_power_of_two(uint32_t num){
	int count=0;
	// num & num-1 ==0  also means power 2. another way
	while (num >0){
		num = num &(num-1);
		count++;
	}
	if (count==1){
		return 1;
	}
	return 0;
}

char is_alternating_bits(int n){
	n ^= (n >> 1);
	     if(n== pow(2,31)-1){
	        return 1;
	     }
	    return (n & (n + 1)) == 0;
}

void set_rightmost_unsetbit(int num){
	num = ~num;
	num = num &(num-1);
	num = ~num;
	// num & (num+1)   is other way

	// num = num&(num &(-num));
	printf("set right most unset bit %d\n", num);
}

void Position_of_MSB(int num){
	int pos=0;
	int org=num;
	while(num)
	{
	    num >>=1;
	    pos++;
	}
	printf("Highest set  bit pos of %d is %d\n", org, pos);
}


int extract_bit(int num, uint32_t pos){
	return ((num>>pos)& 1);
}

int replace_bit(int num , uint32_t pos, uint8_t bit){

	num = num & ~(1u<<pos);
	num = num | (bit<<pos);
	return num;
}

int find_lsb_postion(int num){
	int pos=0;
	while(num){
		if ((num & 1) ==1){
			pos++;
			return pos;
		}
		num = num>>1;
		pos++;
	}
	return 0;
}

int cnt_trailing_zero(int num){
	int pos = find_lsb_postion(num);
	return pos-1;
}

int hamming_distance(int num1, int num2){
	int num;
	num = num1^num2;
	int count=0;

	while(num>0){
			num = num & (num-1);
			count++;
		}
		return count;
}


unsigned int nextPowerOfTwo(unsigned int n) {
    if (n == 0) return 1;
    n--;
    n |= n >> 1;
    n |= n >> 2;
    n |= n >> 4;
    n |= n >> 8;
    n |= n >> 16;
    return n + 1;
}

int next2power(int num){
	//my logic but wont work for all.
	int count;
	int org = num;
	while(num>0){
				num = num & (num-1);
				count++;
			}
	if (count==1){
		return org;
	}
	else {
		return 1<<(count+1);
	}

}


/*
 * Extract bit field
Replace bit field
Toggle every alternate bit
Find MSB
Find LSB
Mini interview challenge


Find LSB position
Count trailing zeros
Count leading zeros (concept)
Hamming distance
Next power of two
Two unique numbers using XOR

Lesson 6
Medium Problems
Find missing number using XOR
Find unique number
Two unique numbers
XOR properties
Bit masks in algorithms
Lesson 7
Advanced
Brian Kernighan algorithm
Population count
Parity
Hamming distance
Next power of two
Clear lowest set bit
Isolate lowest set bit
 */

void cgpt_lession2(){
	is_power_of_two(6); //2,4,8
	is_alternating_bits(56);
	set_rightmost_unsetbit(34);
	Position_of_MSB(pow(2,31)-1);
}
