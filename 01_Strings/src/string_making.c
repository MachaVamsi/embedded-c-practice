/*
 * string_making.c
 *
 *  Created on: Jul 20, 2026
 *      Author: vamsi
 *      from embedkari string manipulation course
 */
#include <stdio.h>


void token_pasting_operator(){
	//For generating variable/function names based on macro parameters

	#define CAT(a,b) a##b
	// Token Pasting operator
	int CAT(Hello,World)=10; //int HelloWorld becomes 10
	printf("%d", HelloWorld);

	//usage
	#define UART_REG(ID) UART##ID##_DR
	int UART1_DR, UART2_DR ;
	UART_REG(1)=5; // becomes UART1_DR=5
	UART_REG(2)=7; // becomes UARt2_DR=7
	printf("token pasting operator exercise %d %d", UART1_DR, UART2_DR);

}

void stringizing_operator(){
	#define STR(x) #x

	printf("%s\n", STR(HELLO));  //print HELLO
	printf("%s\n", STR(10+20)); // it doesnot evaluate , it takes token literally


	//Real Embedded Use
	//1: Debug print macro
	#define DBG_VAR(var)  printf(#var " = %d\n", var)
	int speed=55;
	DBG_VAR(speed); //expands to: printf("speed" "=%d\n", speed);
	//prints speed =55

	//2: Auto "build time + name " message
	#define MSG_INFO(name) "BUILD:  "__DATE__" "__TIME__" | " #name
	printf("%s\n", MSG_INFO(Firmware_v1));

	//3: Error message
	#define ERR_MSG(code) "ERROR("#code")"
	printf("%s\n", ERR_MSG(404));

	//4: UART printf Wrapper
	#define LOG_VAR(name) (#name " = %d")
	printf(LOG_VAR(speed), speed);
	printf("\n");

	//5: usage both # and ##
	#define STR(x) #x
	#define EXPAND_AND_STR(x) STR(x)
	#define REG_NAME(X) UART##X##_DR
	#define MSG_REG(X) "using Register " #X "->" EXPAND_AND_STR(REG_NAME(X))
	printf("%s\n", MSG_REG(10));

}

/*
 aSSIGNMENT
 #define FORM_RCC_APBENR(x) RCC->APBENR##x

 int main(void{

 FORM_RCC_APBENR(1) = 1<<17;
 while(1);
 return 0
 }
 */

