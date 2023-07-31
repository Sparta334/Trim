/**
 * @file main.c
 * @author Ian, Chen 
 * Trimming strings example
 * 
 * 
 * @version 1.0
 * @date 2023-07-31
 * 
 */

#include "Trim.h"

int main(){



    unsigned char* str =" dddd dddddddddd";
    Trim(str , LEFT);
    printf("%s",str);

    
}