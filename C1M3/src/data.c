/*__________________File:data.c_____________________________________________________
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

/****************************data.c****************************************
# Copyright (C) 2023 by Abdelrahman Selim - University of Colorado intro to embedded system course
#
# THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING 
# BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND 
# NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, 
# DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
# OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
#
*******************************data.c***************************************/

#include "data.h"


uint8_t my_itoa(int32_t data, uint8_t * ptr, uint32_t base){
    uint8_t  length=0;             // intializing the array as length =1 due to the null terminator /0
    uint8_t negative = false ;     // negative flag true if data is negative
    if (data <0){
        data = abs(data);
        negative =true ;
        *ptr = '-'; // making the first value a negative sign
        ptr+=1; // shifting the pointer to the next array cell
    }

    for (int32_t i=data;i>0;i/=base){
        length++;
    }
     uint8_t i=length-1;
    while(data>0){
        if (base > 10&&data%base>9){
         *(ptr+i)=(data%base+'A'-10);
        }
      else{
      *(ptr+i)=(data%base+'0');
}
      i--;
      data/=base;
    }
    *(ptr+length)=0;
    length++; // adding the length of the null terminator
    if(negative){length++;} // ading the length of the negative sign
    return length; 

}


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


// Online C compiler to run C program online
#include <stdio.h>
#include <stdint.h>
#include<stdint.h>
#include<stdlib.h>
#include<stddef.h>
#include<math.h>
#define len  10
#ifndef false
#define false 0
#endif
#ifndef true
#define true 1
#endif
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
int32_t my_atoi(uint8_t * ptr, uint8_t digits, uint32_t base){
    int32_t integer=0;
    uint8_t negative = false;
    if (*ptr == '-'){
        negative =true;
        ptr =ptr+1;
    }
    printf("INTEGER:%d\n",integer);
    for (uint8_t i=0;*(ptr+i)!=0;i++){
    if((*(ptr+i)-'0')>9){
         integer=(*(ptr+i)-'A'+10)*(int)pow(base,(digits-i-1)) ;
 printf("i:%ld,power value:%d,ptr value:%ld,integer value:%ld\n",i,(int)pow(base,(digits-i-1)),(*(ptr+i))-'A'+10,integer);
    }
    else{
     integer+=(*(ptr+i)-'0')*(int)pow(base,(digits-i-1)) ;  }
    // printf("i:%ld,power value:%d,ptr value:%ld,integer value:%ld\n",i,(int)pow(base,i),(*(ptr+i))-'0',integer);
    }
    
    if(negative){integer=-integer;}
    return integer;
}
    

int main() {
char str[]={'-','F','F','F',0};
  int32_t x =  my_atoi(str,3,16);
printf("string:%s___ integer:%d",str,x);
    return 0;
}
