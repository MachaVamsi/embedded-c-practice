
#include <stdio.h>

int set_bit(int num, int bit_pos){
	int ret = num | (1<<bit_pos);
	return ret;
}

int clear_bit(int num, int bit_pos ){
	int mask;
	mask = ~(1<<bit_pos);
	int ret = num & (mask);
	return ret;
}

int toggle_bit(int num, int bit_pos){
	int ret = num ^ (1<<bit_pos);
	return ret;
}

void count(int num){
	int setbit_cnt, unsetbit_cnt;
	setbit_cnt=0;
	unsetbit_cnt=0;
	int original_num= num;
	while(num >0){
		if ((num &1)==1){
			setbit_cnt++;
		}
		else{
			unsetbit_cnt++;
		}
		num=num>>1;
	}
	printf("Number %d has %d set bits and %d unset bits\n", original_num,setbit_cnt,unsetbit_cnt);
}

void swap(int a, int b){
	printf("Before swapping a:%d and b:%d are\n", a, b);
	a= a^b;
	b= b^a;
	a=a^b;
	printf("After swapping a:%d and b:%d are\n", a, b);

}

void embedkari_lesson1(){
	count(5);
	swap (8,9);

}
