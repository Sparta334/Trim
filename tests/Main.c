
/**
 * @file Main.c
 * @author Ian.Chen
 * @brief Unit test for the library.
 * @version 0.1
 * @date 2023-07-03
 *
 * @copyright Copyright (c) 2023
 *
 */

#include "./Headers/Test_Trim.h"

const struct CMUnitTest tests[] = {

    cmocka_unit_test(Test_Trim_FrontSpace),
    cmocka_unit_test(Test_Trim_BackSpace),

    cmocka_unit_test(Test_Trim),
    

};

int main(){

    return cmocka_run_group_tests(tests, NULL, NULL);

}