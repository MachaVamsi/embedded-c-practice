/*
 * practice1.c
 *
 *  Created on: Jul 21, 2026
 *      Author: vamsi
 *      from embedkari string manipulation course
 */


#include <stdio.h>
#include <stddef.h>
#include <stdint.h>

struct A {
    char c;     // 1 byte
                // padding here
    int x;      // 4 bytes
    double d;   // 8 bytes
};

int practice1(void)
{
    printf("offset of x = %zu\n", offsetof(struct A, x));
    printf("offset of d = %zu\n", offsetof(struct A, d));
    return 0;
}
