/******************************************************************************

Programming Skills Challenge Siemens.
Question 11 - Make a program in C/C++ or Java language that reverses a string
informed by the user without using any temporary variable, buffer or any
pre-existing function or method for this.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int ini;
    int end;
    int len;
    char str1[100];
   
    //Input data
    printf("Enter the string to be reversed : ");
    scanf("%s", str1);
    
    printf("str before reverse = %s\n",  str1); 
    ini=0;
    end=strlen(str1)-1;
    len=strlen(str1);
    
    while(ini<end){
       //reverse_string(str1,ini,end);
       str1[len] = str1[ini];
       str1[ini] = str1[end];
       str1[end] = str1[len];
   
        ini++;
        end--;
    }
   str1[len] = '\0';
    printf("str after reverse = %s\n ",  str1); 
    
        return 0; 
    
} 