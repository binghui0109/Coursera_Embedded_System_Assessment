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
 * @file stats.h 
 * @brief Header file for application assignment
 *
 * This file contains function declarations for functions to process data for an embedded system
 * application.
 *
 * @date 2024-06-12
 * @authorex Bing Hui Lai
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/**
 * @brief Prints the statistics of an array including minimum, maximum, mean, and median.
 *
 * This function prints the minimum, maximum, mean, and median of the array provided.
 *
 * @param arr The array of unsigned char data
 * @param length The length of the array
 */
void print_statistics(unsigned char arr[], int length);

/**
 * @brief Prints the array to the screen.
 *
 * Given an array of data and a length, this function prints the array to the screen.
 *
 * @param arr The array of unsigned char data
 * @param length The length of the array
 */
void print_array(unsigned char arr[], int length);

/**
 * @brief Returns the median value of the array.
 *
 * Given an array of data and a length, this function returns the median value.
 * The array is sorted before the median is found.
 *
 * @param arr The array of unsigned char data
 * @param length The length of the array
 *
 * @return The median value of the array
 */
float find_median(unsigned char arr[], int length);

/**
 * @brief Returns the mean value of the array.
 *
 * Given an array of data and a length, this function returns the mean value.
 *
 * @param arr The array of unsigned char data
 * @param length The length of the array
 *
 * @return The mean value of the array
 */
float find_mean(unsigned char arr[], int length);

/**
 * @brief Returns the maximum value of the array.
 *
 * Given an array of data and a length, this function returns the maximum value.
 *
 * @param arr The array of unsigned char data
 * @param length The length of the array
 *
 * @return The maximum value of the array
 */
unsigned char find_maximum(unsigned char arr[], int length);

/**
 * @brief Returns the minimum value of the array.
 *
 * Given an array of data and a length, this function returns the minimum value.
 *
 * @param arr The array of unsigned char data
 * @param length The length of the array
 *
 * @return The minimum value of the array
 */
unsigned char find_minimum(unsigned char arr[], int length);

/**
 * @brief Sorts the array from largest to smallest.
 *
 * Given an array of data and a length, this function sorts the array from largest to smallest.
 * The zeroth element should be the largest value, and the last element (n-1) should be the smallest value.
 *
 * @param arr The array of unsigned char data
 * @param length The length of the array
 */
void sort_array(unsigned char arr[], int length);

#endif /* __STATS_H__ */
