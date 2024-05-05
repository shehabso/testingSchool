#include "src/simple_module.h"
#include "C:/Ruby30-x64/lib/ruby/gems/3.0.0/gems/ceedling-0.31.1/vendor/unity/src/unity.h"








void setUp(void)

{

}



void tearDown(void)

{

}



void test_simple_module_NeedToImplement(void)

{



}





void test_sum_operation (void){

    UnityAssertEqualNumber((UNITY_INT)((11)), (UNITY_INT)((sum(5,6))), (

   ((void *)0)

   ), (UNITY_UINT)(22), UNITY_DISPLAY_STYLE_INT);



}



void test_sub_operation(void)

{

    UnityAssertEqualNumber((UNITY_INT)((-1)), (UNITY_INT)((sub(5,6))), (

   ((void *)0)

   ), (UNITY_UINT)(28), UNITY_DISPLAY_STYLE_INT);

}



void test_mul_operation(void)

{

     UnityAssertEqualNumber((UNITY_INT)((30)), (UNITY_INT)((mul(5,6))), (

    ((void *)0)

    ), (UNITY_UINT)(33), UNITY_DISPLAY_STYLE_INT);

}



void test_divsion_operation(void)

{

    UnityAssertEqualNumber((UNITY_INT)((0)), (UNITY_INT)((div(5,6))), (

   ((void *)0)

   ), (UNITY_UINT)(38), UNITY_DISPLAY_STYLE_INT);

}

void test_main_operation(void)

{

    UnityAssertEqualNumber((UNITY_INT)(UNITY_INT16)((11)), (UNITY_INT)(UNITY_INT16)((operation('+',5,6))), (

   ((void *)0)

   ), (UNITY_UINT)(42), UNITY_DISPLAY_STYLE_INT16);

}
