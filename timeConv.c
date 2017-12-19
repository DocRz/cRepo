/*||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\
                                                                                      ||||||}
-> File Name : timeConv.c
                                                                                      ||||||}
-> Creation Date : 19-12-2017
                                                                                      ||||||}
-> Last Modified : Tue Dec 19 23:16:59 2017
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

void reverse(char s[])
 {
     int i, j;
     char c;

     for (i = 0, j = strlen(s)-1; i<j; i++, j--) {
         c = s[i];
         s[i] = s[j];
         s[j] = c;
     }
 }

void itoa(int n, char s[])
 {
     int i, sign;

     if ((sign = n) < 0)  /* record sign */
         n = -n;          /* make n positive */
     i = 0;
     do {       /* generate digits in reverse order */
         s[i++] = n % 10 + '0';   /* get next digit */
     } while ((n /= 10) > 0);     /* delete it */
     if (sign < 0)
         s[i++] = '-';
     s[i] = '\0';
     reverse(s);
 }

char* timeConversion(char* s){
    char *stkc = malloc(sizeof(char) * 3);
    int stki;
    int c;

    if(s[8] == 'P' || s[8] == 'p'){
        s[8] = '\0';
        s[9] = '\0';

        c = 0;
        while (c < 2){
            stkc[c] = s[c];
            c++;
        }
        stkc[c] = '\0';
        stki = atoi(stkc) + 12;
        if(stki == 24)
            return(s);
        else{
            itoa(stki, stkc);
            c = 0;
            while (c < 2){
                s[c] = stkc[c];
                c++;
            }
        }
    }

    if(s[8] == 'A' || s[8] == 'a'){
        s[8] = '\0';
        s[9] = '\0';
        if(s[0] == '1' && s[1] == '2'){
            s[0] = '0';
            s[1] = '0';
        }
    }
    return(s);
}

int main() {
    char* s = (char *)malloc(512000 * sizeof(char));
    scanf("%s", s);
        int result_size;

char* result = timeConversion(s);
    printf("%s\n", result);
    return 0;
}

