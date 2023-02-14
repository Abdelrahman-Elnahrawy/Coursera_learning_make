/*__________________File:Stats.c_____________________________________________________
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





// Online C compiler to run C program online

#include "stats.h"





/*************************************************************************************************
 *  GLOBAL DATA PROTOTYPES
 ************************************************************************************************/

void print_array(uint8_t * array,uint8_t size){
#ifdef DVERBOSE
	for (uint8_t i=0 ;i<size ; i++){ 
	PRINTF("%d",array[i]);
	if (i<size -1)
	PRINTF(" , ");
else PRINTF("}");
	}
	PRINTF("\n");
#endif
}


uint8_t* sort_array(uint8_t * array,uint8_t size){
static	uint8_t sorted_arr[ARR_SIZE] ;
for (uint8_t i=0; i<size ; i++)
sorted_arr[i]=array[i];
	uint8_t temp_val;
	for (uint8_t n=0; n<size ; n ++){
	for (uint8_t i=n; i<size ; i ++){
		if (sorted_arr[n]>sorted_arr[i]){
		    temp_val=sorted_arr[i];
		    sorted_arr[i]=sorted_arr[n];
		    sorted_arr[n]=temp_val;
		}
	}
	}

	return sorted_arr;
}


uint8_t find_mean(uint8_t * array,uint8_t size){
	uint32_t sum =0;
	for (uint8_t i =0 ; i<size ;i++)
	{ sum+=array[i];}
	return (sum/size);
}

uint8_t find_maximum(uint8_t * array,uint8_t size){
	  uint8_t maxval= array[0];
	for (uint8_t i =0 ; i<size ;i++)
	{
	    if (maxval<array[i]){
	        maxval = array[i];
	    }
	}
	return maxval;
}

uint8_t find_minimum(uint8_t * array,uint8_t size){
    uint8_t minval= array[0];
	for (uint8_t i =0 ; i<size ;i++)
	{
	    if (minval>array[i]){
	        minval = array[i];
	    }
	}
	return minval;
}
uint8_t find_median(uint8_t * array,uint8_t size){
	return sort_array(array,size)[size/2]; // sorting the area then get the middle number in it !!
	
}

void print_statistics(uint8_t * array,uint8_t size){
print_array(array,size);
#ifdef DVERBOSE
	PRINTF("The mean is : %d , the median is: %d , the maximum is : %d , the minimuim is : %d",find_mean(array,size),find_median(array,size),	find_maximum( array,size), find_minimum(array, size));
#endif
}



/*************************************************************************************************
 *  END OF FILE: Stats.c
 ************************************************************************************************/
