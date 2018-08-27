/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-

* File Name : plusMin.c

* Creation Date : 19-12-2017

* Last Modified : Tue Dec 19 18:16:53 2017

* Created By :

_._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._.*/

#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){

    /* Initilialize */

    int *arr = malloc(sizeof(int) * 5);
    for(int arr_i = 0; arr_i < 5; arr_i++)
       scanf("%d",&arr[arr_i]);

    /* Find biggest number */

    long small = arr[0];
    for(int i = 1; i < 5; i++){
        if(arr[i] < arr[i - 1] && arr[i] <= small)
            small = arr[i];
    }

    /* Find smallest number */

    long big = arr[0];
    for(int i = 1; i < 5; i++){
        if(arr[i] > arr[i + 1] && arr[i] >= big)
            big = arr[i];
    }

    /* Calculate total sum & output results */

    long c = 0;
    for(int i = 0; i < 5; i++)
       c = c + arr[i];
    printf("%ld %ld\n", c - small, c - big);
    return 0;
}

