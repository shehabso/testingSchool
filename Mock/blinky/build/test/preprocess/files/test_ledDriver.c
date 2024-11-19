#include "mock_moduleA.h"
#include "src/ledDriver.h"
#include "C:/Ruby30-x64/lib/ruby/gems/3.0.0/gems/ceedling-0.31.1/vendor/unity/src/unity.h"


void setUp(void)

{

}



void tearDown(void)

{

}



void test_ledDriver_NeedToImplement(void)

{



}

void test_Main(void){

        UnityAssertEqualNumber((UNITY_INT)((MAIN())), (UNITY_INT)((-1)), (

       ((void *)0)

       ), (UNITY_UINT)(18), UNITY_DISPLAY_STYLE_INT);



}

void test_fooExpecterd_return_baz_if_bar_TRue(void){

    bar_CMockExpectAndReturn(22, 1);

     UnityAssertEqualNumber((UNITY_INT)((foo())), (UNITY_INT)((1)), (

    ((void *)0)

    ), (UNITY_UINT)(23), UNITY_DISPLAY_STYLE_INT);





}

void test_fooExpecterd_return_baz_if_bar_false(void){

    bar_CMockExpectAndReturn(28, 0);

     UnityAssertEqualNumber((UNITY_INT)((foo())), (UNITY_INT)((0)), (

    ((void *)0)

    ), (UNITY_UINT)(29), UNITY_DISPLAY_STYLE_INT);





}
