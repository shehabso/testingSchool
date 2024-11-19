
#include "unity.h"
#include "simple_module.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void test_simple_module_NeedToImplement(void)
{
  //  TEST_IGNORE_MESSAGE("Need to Implement simple_module");
}


void test_sum_operation (void){
    TEST_ASSERT_EQUAL(11,sum(5,6));
   
}

void test_sub_operation(void)
{
    TEST_ASSERT_EQUAL(-1,sub(5,6));
}

void test_mul_operation(void)
{
     TEST_ASSERT_EQUAL(30,mul(5,6));
}

void test_divsion_operation(void)
{
    TEST_ASSERT_EQUAL(0,div(5,6));
}
void test_main_operation(void)
{
    TEST_ASSERT_EQUAL_INT16(11,operation('+',5,6));
}

void test_main_operation12(void)
{
    TEST_ASSERT_EQUAL_INT16(12,operation('+',6,6));
}

