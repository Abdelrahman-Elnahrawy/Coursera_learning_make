/*__________________File:Stats.h_____________________________________________________
                                      ___           ___           ___
 Author: Abdelrahman Selim           /\  \         /\  \         /\  \
                                    /::\  \       /::\  \       /::\  \
Created on:26 jan 2023             /:/\:\  \     /:/\:\  \     /:/\:\  \
                                  /::\ \:\  \   _\:\ \:\  \   /::\ \:\  \
 Version:01                      /:/\:\ \:\__\ /\ \:\ \:\__\ /:/\:\ \:\__\
                                 \/__\:\/:/  / \:\ \:\ \/__/ \/__\:\/:/  /
                                      \::/  /   \:\ \:\__\        \::/  /
                                      /:/  /     \:\/:/  /        /:/  /
 Brief :array mediocre stuff         /:/  /       \::/  /        /:/  /
                                     \/__/         \/__/         \/__/
 _________________________________________________________________________________________*/

#ifndef __STATS_H__
#define __STATS_H__

/************************************************************************************************
 * INCLUDES
 ***********************************************************************************************/

#include <stdint.h>
/*************************************************************************************************
 *  GLOBAL CONSTANT MACROS
 ************************************************************************************************/
 #define ARR_SIZE  40

/*************************************************************************************************
 *  GLOBAL DATA PROTOTYPES
 ************************************************************************************************/


/**************************************************************************************************
 *  GLOBAL FUNCTION PROTOTYPES
 *************************************************************************************************/

/*************************************************************************************************/
/*+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/
/*===============================================================================================*/


/*=================================print_statistics===========================================
 * Func : print_statistics(uint8_t * array,uint8_t size)
 Reentrant   &   Preemptive
 * Args
    * INPUT  : uint8_t * array : array of int
             : uint8_t   size  : the size of the array 
    * Return : None
 * Brief :A function prints the statistics of the given  minimum & maximum & mean & median
*********************************print_statistics*************************************************/
void print_statistics(uint8_t * array,uint8_t size);

/*====================================print_array()===============================================
 * Func : print_array(uint8_t * array,uint8_t size)
 Reentrant   &   Preemptive
 * Args
    * INPUT  : uint8_t * array : array of int
             : uint8_t   size  : the size of the array 
    * Return : None
 * Brief :prints the given array to the screen
*************************************print_array()**********************************************/
void print_array(uint8_t * array,uint8_t size);


/*=================================== find_median() ==============================================
 * Func : find_median(uint8_t * array,uint8_t size)
 Reentrant   &   Preemptive
 * Args
    * INPUT  : uint8_t * array : array of int
             : uint8_t   size  : the size of the array 
    * Return : uint8_t : the median of the array
 * Brief :Given an array of data and a length, returns the median value
************************************ find_median() **********************************************/
uint8_t find_median(uint8_t * array,uint8_t size);



/*=================================== find_mean() ==============================================
 * Func : find_mean(uint8_t * array,uint8_t size)
 Reentrant   &   Preemptive
 * Args
    * INPUT  : uint8_t * array : array of int
             : uint8_t   size  : the size of the array 
    * Return : uint8_t : the mean (average) of the array
 * Brief :Given an array of data and a length, returns the mean
************************************ find_mean() **********************************************/
uint8_t find_mean(uint8_t * array,uint8_t size);


/*================================== find_maximum() ==============================================
 * Func : find_maximum(uint8_t * array,uint8_t size)
 Reentrant   &   Preemptive
 * Args
    * INPUT  : uint8_t * array : array of int
             : uint8_t   size  : the size of the array 
    * Return : uint8_t : the max of the array
 * Brief :Given an array of data and a length, returns the maximum
*********************************** find_maximum() **********************************************/
uint8_t find_maximum(uint8_t * array,uint8_t size);


/*================================= find_minimum() ==============================================
 * Func : find_minimum(uint8_t * array,uint8_t size)
 Reentrant   &   Preemptive
 * Args
    * INPUT  : uint8_t * array : array of int
             : uint8_t   size  : the size of the array 
    * Return : uint8_t : minimum of the array
 * Brief :Given an array of data and a length, returns the minimum
********************************** find_minimum() **********************************************/
uint8_t find_minimum(uint8_t * array,uint8_t size);

/*================================= sort_array() ==============================================
 * Func : sort_array(uint8_t * array,uint8_t size)
 Reentrant   &   Non - Preemptive
 * Args
    * INPUT  : uint8_t * array : array of int
             : uint8_t   size  : the size of the array 
    * Return : none
 * Brief :Given an array of data and a length, sorts the array from largest to smallest.  (The zeroth Element should be the largest value, and the last element (n-1) should be the smallest value. )
********************************** sort_array() **********************************************/
uint8_t* sort_array(uint8_t * array,uint8_t size);


#endif
/*************************************************************************************************
 *  END OF FILE: 
 ************************************************************************************************/
