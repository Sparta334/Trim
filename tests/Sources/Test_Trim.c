#include "../Headers/Test_Trim.h"

void Test_Trim_FrontSpace(void **State)
{

    char str[]= "                                       rr               yy             hh";

    Trim(str , 0);

    assert_string_equal(str , "rr               yy             hh");


}

void Test_Trim_BackSpace(void **State)
{

     unsigned char str[] = "rr          yy             hh                    ";
     Trim(str , 1);
      assert_string_equal(str , "rr          yy             hh");


}

void Test_Trim(void **State)
{

     unsigned char str[] = "                     rr               yy             hh                    ";
    
    Trim(str , 0);
    assert_string_equal(str , "rr               yy             hh                    ");

     Trim(str , 1);
     assert_string_equal(str , "rr               yy             hh");


    Trim(str , 1);
    assert_string_equal(str , "rr               yy             hh");
}
void Test_Trim_OnlySpace(void **State)
{

    
     unsigned char str[] = "                      ";
    
    Trim(str , 1);
    assert_string_equal(str , "\0");

    Trim(str , 0);
    assert_string_equal(str , "\0");
}
