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
 * @file stats.c 
 * @brief Main file for statistics functions
 *
 * This file contains the implementation of functions to analyze an array of unsigned
 * char data and calculate various statistics such as mean, median, maximum,
 * and minimum.
 *
 * @author <Bing Hui Lai>
 * @date June 13, 2024
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

    print_array(test, SIZE);
    print_statistics(test, SIZE);
}

void print_statistics(unsigned char arr[], int length) {
    printf("Statistics:\n");
    printf("Minimum: %d\n", find_minimum(arr, length));
    printf("Maximum: %d\n", find_maximum(arr, length));
    printf("Mean: %.2f\n", find_mean(arr, length));
    printf("Median: %.2f\n", find_median(arr, length));
}

void print_array(unsigned char arr[], int length) {
    printf("Array: ");
    for (int i = 0; i < length; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

float find_median(unsigned char arr[], int length) {
    sort_array(arr, length);
    if (length % 2 == 0) {
        return (float)(arr[length / 2 - 1] + arr[length / 2]) / 2;
    } else {
        return arr[length / 2];
    }
}

float find_mean(unsigned char arr[], int length) {
    int sum = 0;
    for (int i = 0; i < length; i++) {
        sum += arr[i];
    }
    return (float)sum / length;
}

unsigned char find_maximum(unsigned char arr[], int length) {
    unsigned char max = arr[0];
    for (int i = 1; i < length; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

unsigned char find_minimum(unsigned char arr[], int length) {
    unsigned char min = arr[0];
    for (int i = 1; i < length; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    return min;
}

void sort_array(unsigned char arr[], int length) {
    for (int i = 0; i < length - 1; i++) {
        for (int j = i + 1; j < length; j++) {
            if (arr[i] < arr[j]) {
                unsigned char temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

