#include<stdio.h>
#include"my_strcpy.h"

int main()
{
    char source[] = "gaurav gupta CS201033";
    char destination[25];
    
    printf("%s\n", sgs_clib_strcpy(destination, source));
 
    return 0;
}