
//#include <stdlib.h>
#include "unity.h"
#include "module_under_test.h"
#include "mock_module_A.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void test_module_under_test_NeedToImplement(void)
{
  //  TEST_IGNORE_MESSAGE("Need to Implement module_under_test");
}

void test_module_under_test_call_bar(void){
  //  bar_ExpectAndReturn(1);
   // TEST_ASSERT_EQUAL(foo(),1);

}
void test_module_under_test_not_call_bar(void){
   // bar_ExpectAndReturn(0);
   // TEST_ASSERT_EQUAL(foo(),0);
}

