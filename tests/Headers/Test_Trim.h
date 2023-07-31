#include <stdarg.h>
#include <stddef.h>
#include <setjmp.h>
#include <stdint.h>
#include <cmocka.h>

#include "../../Headers/Trim.h"


void Test_Trim_FrontSpace(void** State);
void Test_Trim_BackSpace(void** State);
void Test_Trim(void** State);