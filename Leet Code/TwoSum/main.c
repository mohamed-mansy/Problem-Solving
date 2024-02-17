/*
 * main.c
 *
 *  Created on: Feb 16, 2024
 *      Author: Mohamed_Ayman
 */

#include <stdio.h>
#include <stdlib.h>

int* twoSum(int *nums, int numsSize , int target) {
    int i , j;
    int *arr =(int*)malloc(2 * sizeof(int));

    for(i = 0; i < numsSize-1; i++){
        for(j = i+1; j < numsSize; j++){
            if(nums[i] + nums[j] == target){
                arr[0] = i;
                arr[1] = j;
                return arr;
            }
        }

    }

    return arr;

}

int main(){
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	/*
	 * Given an array of integers nums and an integer target,
	 * write c function to sum two integer values from array to get the target
	 * for ex: I want to target = 9 so you go to array and see the elements of array
	 * to reach 9 ,,,
	 *
	 * */

	int arr[] = {2 , 7 , 11 ,15};

	twoSum(arr , 4 , 9);




	return 0;
}
