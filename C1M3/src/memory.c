/*__________________File:memory.c_____________________________________________________
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

/****************************memory.c****************************************
# Copyright (C) 2023 by Abdelrahman Selim - University of Colorado intro to embedded system course
#
# THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING 
# BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND 
# NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, 
# DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
# OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
#
*******************************memory.c***************************************/
#include "memory.h"

/***********************************************************
 Function Definitions
***********************************************************/
void set_value(char * ptr, unsigned int index, char value){
  ptr[index] = value;
}

void clear_value(char * ptr, unsigned int index){
  set_value(ptr, index, 0);
}

char get_value(char * ptr, unsigned int index){
  return ptr[index];
}

void set_all(char * ptr, char value, unsigned int size){
  unsigned int i;
  for(i = 0; i < size; i++) {
    set_value(ptr, i, value);
  }
}

void clear_all(char * ptr, unsigned int size){
  set_all(ptr, 0, size);
}


uint8_t * my_memmove(uint8_t * src, uint8_t * dst, size_t length){
      for (uint8_t i;i<length;i++){
*(dst+(i*sizeof(uint8_t))) =*(src+(i*sizeof(uint8_t))); // asigning the value to its specific adress
}
return dst;
}


uint8_t * my_memcopy(uint8_t * src, uint8_t * dst, size_t length){
      for (uint8_t i;i<length;i++){
*(dst+(i*sizeof(uint8_t))) =*(src+(i*sizeof(uint8_t))); // asigning the value to its specific adress
}
return dst;
}

uint8_t * my_memset(uint8_t * src, size_t length, uint8_t value){

      for (uint8_t i;i<length;i++){
*(src+(i*sizeof(uint8_t))) =value; // asigning the value to its specific adress
}
return src;
}




uint8_t * my_memzero(uint8_t * src, size_t length){

      for (uint8_t i;i<length;i++){
*(src+(i*sizeof(uint8_t))) = 0; // asigning the value to its specific adress
}
return src;
}



uint8_t * my_reverse(uint8_t * src, size_t length){
    uint8_t temp;
      for (uint8_t i =0;i<(length/2);i++){
    temp = *(src+((i)*sizeof(uint8_t)));
*(src+(i*sizeof(uint8_t)))=*(src+((length-i-1)*sizeof(uint8_t)));
*(src+((length-i-1)*sizeof(uint8_t))) =temp;
}
return src;
}

int32_t * reserve_words(size_t length){
  return malloc(length *sizeof(size_t));
}

void free_words(int32_t * src){
    return free(src);
}
