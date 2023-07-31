/**
 * @file main.c
 * @author Ian, Chen 
 * Trimming strings
 * 
 * 
 * @version 0.1
 * @date 2023-07-31
 * 
 */

#include "Trim.h"

int main(){



    unsigned char* str = "     ssss     " ;

    Trim(str , 0);

    printf("\n%s\n" , str);

}