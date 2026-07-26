/*
 * practice4.c
 *
 *  Created on: Jul 22, 2026
 *      Author: vamsi
 */


#include <stdio.h> // Note: Screenshot has '#include' without standard library name on this line, but likely intended as <stdio.h> or similar

char *myStr0 = "ABCDE"; // Pointer myStr0 will be shown in datasignment but initialized with rodata in flash
char myStr1[] = "112233";
char myStr2[7] = "445566";
char myStr3[] = "778899";
 char myStr4[7] = "122121"; // Text or Code Segment, rodata

void  practice4(void)
{
    /* USER CODE BEGIN 1 */

    const char str[6] = "ABCDEF";
    char *ptr;
    char *ptr1 = "12345678";
    int i;

    ptr1 = str;
    ptr = str;

    // This will not work str[1] = 'A';
    ptr[1] = 'A'; // But this is working. It is wrong behavior by compiler. Some compilers will not permit this.

    // Remove this comment and test *ptr = '9';
    ptr = str;

    //str[3] = 'A';

    while (1)
    {
        ;
    }
}
