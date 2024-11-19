/* AUTOGENERATED FILE. DO NOT EDIT. */

/*=======Automagically Detected Files To Include=====*/
#include "unity.h"

int GlobalExpectCount;
int GlobalVerifyOrder;
char* GlobalOrderError;

/*=======External Functions This Runner Calls=====*/
extern void setUp(void);
extern void tearDown(void);
extern void test_simple_module_NeedToImplement(void);
extern void test_sum_operation (void);
extern void test_sub_operation(void);
extern void test_mul_operation(void);
extern void test_divsion_operation(void);
extern void test_main_operation(void);
extern void test_main_operation12(void);


/*=======Mock Management=====*/
static void CMock_Init(void)
{
  GlobalExpectCount = 0;
  GlobalVerifyOrder = 0;
  GlobalOrderError = NULL;
}
static void CMock_Verify(void)
{
}
static void CMock_Destroy(void)
{
}

/*=======Test Reset Options=====*/
void resetTest(void);
void resetTest(void)
{
  tearDown();
  CMock_Verify();
  CMock_Destroy();
  CMock_Init();
  setUp();
}
void verifyTest(void);
void verifyTest(void)
{
  CMock_Verify();
}

/*=======Test Runner Used To Run Each Test=====*/
static void run_test(UnityTestFunction func, const char* name, UNITY_LINE_TYPE line_num)
{
    Unity.CurrentTestName = name;
    Unity.CurrentTestLineNumber = line_num;
#ifdef UNITY_USE_COMMAND_LINE_ARGS
    if (!UnityTestMatches())
        return;
#endif
    Unity.NumberOfTests++;
    UNITY_CLR_DETAILS();
    UNITY_EXEC_TIME_START();
    CMock_Init();
    if (TEST_PROTECT())
    {
        setUp();
        func();
    }
    if (TEST_PROTECT())
    {
        tearDown();
        CMock_Verify();
    }
    CMock_Destroy();
    UNITY_EXEC_TIME_STOP();
    UnityConcludeTest();
}

/*=======MAIN=====*/
int main(void)
{
  UnityBegin("test_simple_module.c");
  run_test(test_simple_module_NeedToImplement, "test_simple_module_NeedToImplement", 13);
  run_test(test_sum_operation , "test_sum_operation ", 19);
  run_test(test_sub_operation, "test_sub_operation", 24);
  run_test(test_mul_operation, "test_mul_operation", 29);
  run_test(test_divsion_operation, "test_divsion_operation", 34);
  run_test(test_main_operation, "test_main_operation", 38);
  run_test(test_main_operation12, "test_main_operation12", 43);

  return UnityEnd();
}
