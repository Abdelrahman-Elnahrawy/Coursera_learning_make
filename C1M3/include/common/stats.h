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
#include <stdio.h>

/*************************************************************************************************
 *  GLOBAL CONSTANT MACROS
 ************************************************************************************************/
 #define ARR_SIZE  40

/*************************************************************************************************
 *  GLOBAL DATA PROTOTYPES
 ************************************************************************************************/

int arr[ARR_SIZE] = {   34, 201, 190, 154,   8, 194,   2,   6,
                       114, 88,   45,  76, 123,  87,  25,  23,
                       200, 122, 150, 90,   92,  87, 177, 244,
                       201,   6,  12,  60,   8,   2,   5,  67,
                         7,  87, 250, 230,  99,   3, 100,  90};

/**************************************************************************************************
 *  GLOBAL FUNCTION PROTOTYPES
 *************************************************************************************************/

/*************************************************************************************************/
/*+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/
/*===============================================================================================*/


/*=================================print_statistics===========================================
 * Func : print_statistics(int * array,int size)
 Reentrant   &   Preemptive
 * Args
    * INPUT  : int * array : array of int
             : int   size  : the size of the array 
    * Return : None
 * Brief :A function prints the statistics of the given  minimum & maximum & mean & median
*********************************print_statistics*************************************************/
void print_statistics(int * array,int size);

/*====================================print_array()===============================================
 * Func : print_array(int * array,int size)
 Reentrant   &   Preemptive
 * Args
    * INPUT  : int * array : array of int
             : int   size  : the size of the array 
    * Return : None
 * Brief :prints the given array to the screen
*************************************print_array()**********************************************/
void print_array(int * array,int size);


/*=================================== find_median() ==============================================
 * Func : find_median(int * array,int size)
 Reentrant   &   Preemptive
 * Args
    * INPUT  : int * array : array of int
             : int   size  : the size of the array 
    * Return : int : the median of the array
 * Brief :Given an array of data and a length, returns the median value
************************************ find_median() **********************************************/
int find_median(int * array,int size);



/*=================================== find_mean() ==============================================
 * Func : find_mean(int * array,int size)
 Reentrant   &   Preemptive
 * Args
    * INPUT  : int * array : array of int
             : int   size  : the size of the array 
    * Return : int : the mean (average) of the array
 * Brief :Given an array of data and a length, returns the mean
************************************ find_mean() **********************************************/
int find_mean(int * array,int size);


/*================================== find_maximum() ==============================================
 * Func : find_maximum(int * array,int size)
 Reentrant   &   Preemptive
 * Args
    * INPUT  : int * array : array of int
             : int   size  : the size of the array 
    * Return : int : the max of the array
 * Brief :Given an array of data and a length, returns the maximum
*********************************** find_maximum() **********************************************/
int find_maximum(int * array,int size);


/*================================= find_minimum() ==============================================
 * Func : find_minimum(int * array,int size)
 Reentrant   &   Preemptive
 * Args
    * INPUT  : int * array : array of int
             : int   size  : the size of the array 
    * Return : int : minimum of the array
 * Brief :Given an array of data and a length, returns the minimum
********************************** find_minimum() **********************************************/
int find_minimum(int * array,int size);

/*================================= sort_array() ==============================================
 * Func : sort_array(int * array,int size)
 Reentrant   &   Non - Preemptive
 * Args
    * INPUT  : int * array : array of int
             : int   size  : the size of the array 
    * Return : none
 * Brief :Given an array of data and a length, sorts the array from largest to smallest.  (The zeroth Element should be the largest value, and the last element (n-1) should be the smallest value. )
********************************** sort_array() **********************************************/
int sort_array(int * array,int size);


#endif
/*************************************************************************************************
 *  END OF FILE: 
 ************************************************************************************************/
