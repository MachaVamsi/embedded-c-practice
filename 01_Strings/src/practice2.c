/*
 * practice2.c
 *
 *  Created on: Jul 21, 2026
 *      Author: vamsi
 *      from embedkari string manipulation course
 */


#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
#include <stdbool.h>
#include <stddef.h>

typedef struct {
    char ch;
    int var;
    long varL;
    float varF;
} mydef;

#define BITWISE_OPR
#define ARR_FUNC
#define OFFSET
#define CONCATENATE(a, b) a##b
#define STRING_EX(x) #x
#define CREATE_MSG(name) ("HELLO" STRING_EX(name))
#define STRING
#define STRING2

void  pratice2()
{
    mydef data;
    int of1, of2, of3, of4;
    of1 = offsetof(mydef, ch);
    of2 = offsetof(mydef, var);
    of3 = offsetof(mydef, varL);
    of4 = offsetof(mydef, varF);

    printf("of1=%d, of2=%d, of3=%d, of4=%d \n", of1, of2, of3, of4);

    int CONCATENATE(Hello, World) = 1;
    printf("%d\n", CONCATENATE(50, 1));
    printf("%d\n", CONCATENATE(Hello, World));
    printf("%s\n", CREATE_MSG(MUMBAI));


}
