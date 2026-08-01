/*
 * led_sequence.c
 *
 *  Created on: Jul 28, 2026
 *      Author: vamsi
 *      embedkari practice
 */
#include <stdio.h>
#include <stdint.h>

uint8_t rotate_left(uint8_t num);



void led_sequence() {
    static uint8_t num = 0xAA;
    for (int i = 0; i < 100; i++) {
        num = rotate_left(num);
    }

}
