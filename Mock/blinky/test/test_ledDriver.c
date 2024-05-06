
#include "unity.h"
#include "ledDriver.h"
#include "mock_moduleA.h"
void setUp(void)
{
}

void tearDown(void)
{
}

void test_ledDriver_NeedToImplement(void)
{
   // TEST_IGNORE_MESSAGE("Need to Implement ledDriver");
}
void test_Main(void){
        TEST_ASSERT_EQUAL(MAIN(),-1);
        
}
void test_fooExpecterd_return_baz_if_bar_TRue(void){
    bar_ExpectAndReturn(1);
     TEST_ASSERT_EQUAL(foo(),1);

    
}
void test_fooExpecterd_return_baz_if_bar_false(void){
    bar_ExpectAndReturn(0);
     TEST_ASSERT_EQUAL(foo(),0);

    
}
