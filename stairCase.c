/*||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\
                                                                                      ||||||}
-> File Name : stairCase.c
                                                                                      ||||||}
-> Creation Date : 21-12-2017
                                                                                      ||||||}
-> Last Modified : Thu Dec 21 20:45:00 2017
                                                                                      ||||||}
-> Created By : >>>  {drRz}  <<<                                                      ||||||}
                                                                                      ||||||}
/||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||*/

#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n;
    int space;
    int hash;
    int c;
    int c2;
    scanf("%d",&n);
    c = 0;
    c2 = n;
    while(c < n)
    {
        space = c2 - 1;
        hash = c + 1;
        while(space > 0)
        {
            printf(" ");
            space--;
        }
        while(hash > 0)
        {
            printf("#");
            hash--;
        }
        printf("\n");
        c++;
        c2--;
    }
    return 0;
}

