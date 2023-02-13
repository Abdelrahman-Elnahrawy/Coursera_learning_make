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

void print_array(int * array,int size);
void print_statistics(int * array,int size);


int main() {


/*************************************************************************************************
 *  GLOBAL DATA PROTOTYPES
 ************************************************************************************************/

void print_array(int * array,int size){
#ifdef DVERBOSE
	for (int i=0 ;i<size ; i++){ 
	PRINTF("%d",array[i]);
	if (i<size -1)
	PRINTF(" , ");
else PRINTF("}");
	}
	PRINTF("\n");
#endif
}


int* sort_array(int * array,int size){
static	int sorted_arr[ARR_SIZE] ;
for (int i=0; i<size ; i++)
sorted_arr[i]=array[i];
	int temp_val;
	for (int n=0; n<size ; n ++){
	for (int i=n; i<size ; i ++){
		if (sorted_arr[n]>sorted_arr[i]){
		    temp_val=sorted_arr[i];
		    sorted_arr[i]=sorted_arr[n];
		    sorted_arr[n]=temp_val;
		}
	}
	}

	return sorted_arr;
}


int find_mean(int * array,int size){
	long int sum =0;
	for (int i =0 ; i<size ;i++)
	{ sum+=array[i];}
	return (sum/size);
}

int find_maximum(int * array,int size){
	  int maxval= array[0];
	for (int i =0 ; i<size ;i++)
	{
	    if (maxval<array[i]){
	        maxval = array[i];
	    }
	}
	return maxval;
}

int find_minimum(int * array,int size){
    int minval= array[0];
	for (int i =0 ; i<size ;i++)
	{
	    if (minval>array[i]){
	        minval = array[i];
	    }
	}
	return minval;
}
int find_median(int * array,int size){
	return sort_array(array,size)[size/2]; // sorting the area then get the middle number in it !!
	
}

void print_statistics(int * array,int size){
print_array(array,size);
#ifdef DVERBOSE
	PRINTF("The mean is : %d , the median is: %d , the maximum is : %d , the minimuim is : %d",find_mean(array,size),find_median(array,size),	find_maximum( array,size), find_minimum(array, size));
#endif
}


print_statistics(arr,ARR_SIZE);
    return 0;
}
/*************************************************************************************************
 *  END OF FILE: Stats.c
 ************************************************************************************************/
