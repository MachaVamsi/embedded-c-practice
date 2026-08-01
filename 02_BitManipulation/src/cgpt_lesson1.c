#include <stdio.h>
#include <limits.h>
int check_bit(unsigned num, int pos){
	return (num & (1u<<pos))!=0 ;
}

void int_2_binary(int num){

	int temp=0;
	int flag=0;
	int loop_limt=(sizeof(num) * CHAR_BIT)-1;  //CHAR_BIT is nothing  but 8 bits in a byte

	if (num == 0)
	{
	    printf("0\n");
	    return;
	}
	for(int i=loop_limt; i>=0;i--){
		temp = check_bit(num,i);
		if(temp==1){
			flag=1;
		}
		if (flag){
		printf("%d", temp);
		}
	}
	printf("\n");
}

void setbit_position(int num){
	int i=0;
	while(num>0){
		if((num & 1)==1) {
			printf("Bit %d is set\n",i);
		}
		i++;
		num = num>>1;
	}
}

void even_odd_check(int num){
	if ((num & 1)==1){
		printf("given number %d is odd\n", num);
	}
	else {
		printf("given number %d is even\n", num);
	}
}
void cgpt_lession1(){
	int_2_binary(6);
	setbit_position(56);
	even_odd_check(34);
}
