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
 * @file <stats.h>
 * @brief <The header file for the statistic calculation program >
 *
 * This is the header file for the statistal program that will take an array
 * of chars and calculate values such as the mean, median, maximum and
 * minimum from it.  
 * @author <Mathew Xavier Earathu>
 * @date <07/05/2020 >
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/* Add Your Declarations and Function Comments here */
 /**
  * @brief function to print various statistical data of an array
  *
  * This function takes as an input an array and prints the statistical
  * data of the array such as the mean, median, minimum and maximum.
  *
  * @param array The array that is to be printed
  * @param length The unsigned int of the length of the array
  * @return void There will be no return for this function
  */
  void print_statistics(unsigned int size, unsigned char *array);

 /**
  * @brief function that sorts a given array
  *
  * This function takes in an array as an input and sorts it from
  * largest to smallest. The function will sort the input array
  * itself, not return a new array.
  *
  * @param array The array that is to be sorted
  * @param length The unsigned int length of the array that is to be sorted
  * @return void There will be no return for this function
  */
  void sort_array(unsigned int length, unsigned char *array);

 /**
  * @brief function to identify the median within an array of variables
  *
  * This function takes as its input an array of chars and identifies
  * the median within it. The function will return the unsigned char
  * that was identified as the median.
  *
  * @param array The array of which the median is to be identified
  * @param length The length of the array that was input
  * @return The unsigned char that is the median
  */
  unsigned char find_median(unsigned int length, unsigned char *array);

 /**
   * @brief function to calculate which is the mean of an array of numbers
   *
   * This function takes as its input an array of chars and identifies
   * the median within it. The function will return the unsigned char
   * that was identified as the mean.
   *
   * @param array The array of which the mean is to calculated
   * @param length The length of the array that was input
   * @return The unsigned char that is the mean
   */
   unsigned char find_mean(unsigned int length, unsigned char *array);

  /**
    * @brief function to calculate maximum within an array of numbers
    *
    * This function takes as its input an array of chars and identifies
    * which is the largest within the array. The function will return the
    * unsigned char that is the largest number.
    *
    * @param array The array from which the maximum is to be found
    * @param length The length of the input array
    * @return the unsigned char that is the maximum of the array
    */
    unsigned char find_maximum(unsigned int length, unsigned char *array);

  /*
   * @brief function to calculate minumum within an array of numbers
   *
   * This function takes as its input an array of chars and identifies
   * which is the smallest within the array. The function will return the
   * unsigned char that is the smallest number.
   *
   * @param array The array from which the maximum is to be found
   * @param length The length of the input array
   * @return the unsigned char that is the minimum of the array
   */
   unsigned char find_minimum(unsigned int length, unsigned char *array);

  /*
   * @brief function to print an array of given data and length
   *
   * This function takes in as its input an array and its length
   * and prints it out to the screen. The function will return void
   * once it is done printing.
   *
   * @param array The array that is to be printed
   * @param length The length of the array that is to be printed
   * @return void no value is returned
   */
   void print_array(unsigned int length, unsigned char *array);



#endif /* __STATS_H__ */
