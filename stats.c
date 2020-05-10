/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material.
 *
 *****************************************************************************/
/**
 * @file <stats.c>
 * @brief <The main file for the statistic caclulation program >
 *
 * This is the implementation file for the statistical program that will take
 * an array of char and calculate values such as the mean, median, maximum and
 * minimum from it.
 * @author <Mathew Xavier Earathu>
 * @date <07/05/2020 >
 *
 */



#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

void main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  /* Other Variable Declarations Go Here */
  /* Statistics and Printing Functions Go Here */
  sort_array(SIZE, test);
  print_array(SIZE, test);
  print_statistics(SIZE, test);

}

/* Add other Implementation File Code Here */

void print_statistics(unsigned int length, unsigned char *array) {
    printf("The value of the median is %d.\n", find_median(SIZE, array));
    printf("The value of the mean is %d.\n", find_mean(SIZE, array));
    printf("The value of the maximum is %d.\n", find_maximum(SIZE, array));
    printf("The value of the minimum is %d.\n", find_minimum(SIZE, array));

}

void sort_array(unsigned int length, unsigned char *array) {
    int i, j;
    unsigned char k;

    for (i = 0; i < length; i++) {
        for (j = i + 1; j < length; j++) {
            if (*(array + j) > *(array + i)) {
                k = *(array + i);
                *(array + i) = *(array + j);
                *(array + j) = k;
            }
        }
    }

}

unsigned char find_median(unsigned int length, unsigned char *array) {
    if ((length % 2) == 0) {
        return ((length % 2) == 0) ? (array[(length - 1)/2] + array[length/2])/2
                : array[length / 2];
    }
}

unsigned char find_mean(unsigned int length, unsigned char *array) {
    int i;
    unsigned int sum = 0;
    for (i = 0; i < length; i++) {
        sum += array[i];
    }
    return sum / length;
}

unsigned char find_maximum(unsigned int length, unsigned char *array) {
    int value = array[0];
    int i;
    for (i = 1; i < length; i++) {
        if (array[i] > value) {
            value = array[i];
        }
    }
    return value;
}

unsigned char find_minimum(unsigned int length, unsigned char *array) {
    int value = array[0];
    int i;
    for (i = 0; i < length; i++) {
        if (array[i] < value) {
            value = array[i];
        }
    }
    return value;
}

void print_array(unsigned int length, unsigned char *array) {
    int i;
    for (i = 0; i < length; i++) {
        printf("%d ", *(array + i));
    }
    printf("\n");
}
