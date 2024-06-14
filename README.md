# Embedded Systems Statistics Project

## Project Overview

This project is designed to analyze an array of unsigned char data. The program calculates various statistical metrics including the mean and median. It also provides functionalities to sort the array and print its contents.

## Author

**Lai Bing Hui**  

## Date

June 13, 2024

## Project Details

### Functions Implemented

1. **sort_array**: Sorts the array in descending order.
2. **find_median**: Calculates the median of the array.
3. **find_mean**: Calculates the mean of the array.
4. **print_array**: Prints the elements of the array.

### Function Descriptions

- **sort_array(unsigned char arr[], int length)**
  - Sorts the array in descending order.
  - Parameters:
    - `arr`: The array to be sorted.
    - `length`: The length of the array.
  
- **find_median(unsigned char arr[], int length)**
  - Calculates the median value of the array.
  - Parameters:
    - `arr`: The array from which to find the median.
    - `length`: The length of the array.
  - Returns:
    - The median value as a float.
  
- **find_mean(unsigned char arr[], int length)**
  - Calculates the mean value of the array.
  - Parameters:
    - `arr`: The array from which to find the mean.
    - `length`: The length of the array.
  - Returns:
    - The mean value as a float.
  
- **print_array(unsigned char arr[], int length)**
  - Prints the elements of the array.
  - Parameters:
    - `arr`: The array to be printed.
    - `length`: The length of the array.

## How to Compile and Run

### Requirements

- GCC compiler (for Linux/macOS) or MinGW (for Windows).

### Compilation

1. Save the C source code in a file named `stats.c`.
2. Open a terminal or command prompt and navigate to the directory containing `stats.c`.
3. Compile the code using GCC:

   ```bash
   gcc stats.c -o stats.out
