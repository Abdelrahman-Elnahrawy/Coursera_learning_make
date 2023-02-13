/*__________________File:data.h_____________________________________________________
                                      ___           ___           ___
 Author: Abdelrahman Selim           /\  \         /\  \         /\  \
                                    /::\  \       /::\  \       /::\  \
Created on:13 feb 2023             /:/\:\  \     /:/\:\  \     /:/\:\  \
                                  /::\ \:\  \   _\:\ \:\  \   /::\ \:\  \
 Version:01                      /:/\:\ \:\__\ /\ \:\ \:\__\ /:/\:\ \:\__\
                                 \/__\:\/:/  / \:\ \:\ \/__/ \/__\:\/:/  /
                                      \::/  /   \:\ \:\__\        \::/  /
                                      /:/  /     \:\/:/  /        /:/  /
 Brief :memory manipulation task     /:/  /       \::/  /        /:/  /
                                     \/__/         \/__/         \/__/
 _________________________________________________________________________________________*/

/****************************data.h****************************************
# Copyright (C) 2023 by Abdelrahman Selim - University of Colorado intro to embedded system course
#
# THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING 
# BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND 
# NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, 
# DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
# OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
#
*******************************data.h***************************************/

#ifndef DATA_H 
#define DATA_H
#include<stdint.h>
#include<stdlib.h>
#include<stddef.h>
#include<math.h>

#ifndef false
#define false 0
#endif

#ifndef true
#define true 1

/*=================================my_itoa===========================================
 * Func : my_itoa
 Reentrant   &   Preemptive
 * Args
    * INPUT  : int32_t * data   //the number u need to to convert
             : uint8_t * ptr    //the output string
             : uint32_t  base   //the base of the numbering system
    * Return : uint8_t * length //the length of the converted data
 * Brief :convert data from a standard integer type into an ASCII string
*********************************my_itoa*************************************************/
uint8_t my_itoa(int32_t data, uint8_t * ptr, uint32_t base);



/* ASCII-to-Integer needs to convert data back from an ASCII represented string into an integer type.

All operations need to be performed using pointer arithmetic, not array indexing

The character string to convert is passed in as a uint8_t * pointer (ptr).

The number of digits in your character set is passed in as a uint8_t integer (digits).

You should be able to support bases 2 to 16.

The converted 32-bit signed integer should be returned.

This function needs to handle signed data.

You may not use any string functions or libraries
 */
/*=================================my_atoi===========================================
 * Func : my_atoi
 Reentrant   &   Preemptive
 * Args
    * INPUT  : uint8_t * ptr        //the input string
             : uint8_t * digits     //the number of digits in the string
             : uint32_t  base       //the base of the numbering system
    * Return : uint8_t * data       //The converted 32-bit signed integer
 * Brief :Convert data from an ASCII represented string into an integer type
*********************************my_atoi*************************************************/
int32_t my_atoi(uint8_t * ptr, uint8_t digits, uint32_t base);
#endif
