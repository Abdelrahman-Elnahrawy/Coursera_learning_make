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

int32_t my_atoi(uint8_t * ptr, uint8_t digits, uint32_t base){
    int32_t integer=0;
    uint8_t negative = false;
    
    // checking for negative sign
    if (*ptr == '-'){
        digits--;
        negative =true;
        ptr =ptr+1;}
    
    for (uint8_t i=0;*(ptr+i)!=0;i++){ // looping on the string till reach the null terminator
    if((*(ptr+i)-'0')>9){ // if the number given is more than the numbering system A,F,C  etc
         integer+=(*(ptr+i)-'A'+10)*(int)pow(base,(digits-i-1)) ;
 //printf("i:%ld,power value:%-5d,ptr value:%ld,integer value:%ld\n",i,(int)pow(base,(digits-i-1)),((*(ptr+i))-'A'+10),integer);
    }
    else{
           // printf("else INTEGER:%d\n",integer);
     integer+=(*(ptr+i)-'0')*(int)pow(base,(digits-i-1)) ;  }
     
     //printf("i:%ld,power value:%-5d,",i,pow(base,i));
     //printf("ptr value:%d,",(int)((*(ptr+i))-'0'));
     //printf("integer value:%ld\n",integer);
    }
    //printf("integer after the for loop:%ld\n",integer);
    if(negative){integer=-integer;}
    return integer;
}
