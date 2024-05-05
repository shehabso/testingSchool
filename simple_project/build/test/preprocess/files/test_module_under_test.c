#include "build/test/mocks/mock_module_A.h"
#include "src/module_under_test.h"
#include "C:/Ruby30-x64/lib/ruby/gems/3.0.0/gems/ceedling-0.31.1/vendor/unity/src/unity.h"






void setUp(void)

{

}



void tearDown(void)

{

}



void test_module_under_test_NeedToImplement(void)

{



}



void test_module_under_test_call_bar(void){

    bar_CMockExpectAndReturn(21, 1);

    unsigned char res =foo();

    UnityAssertEqualNumber((UNITY_INT)((res)), (UNITY_INT)((1)), (

   ((void *)0)

   ), (UNITY_UINT)(23), UNITY_DISPLAY_STYLE_INT);



}

void test_module_under_test_not_call_bar(void){





}
