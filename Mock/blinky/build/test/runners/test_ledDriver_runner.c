/* AUTOGENERATED FILE. DO NOT EDIT. */

/*=======Automagically Detected Files To Include=====*/
#include "unity.h"
#include "cmock.h"
#include "mock_moduleA.h"

int GlobalExpectCount;
int GlobalVerifyOrder;
char* GlobalOrderError;

/*=======External Functions This Runner Calls=====*/
extern void setUp(void);
extern void tearDown(void);
extern void test_ledDriver_NeedToImplement(void);
extern void test_Main(void);
extern void test_fooExpecterd_return_baz_if_bar_TRue(void);
extern void test_fooExpecterd_return_baz_if_bar_false(void);


/*=======Mock Management=====*/
static void CMock_Init(void)
{
  GlobalExpectCount = 0;
  GlobalVerifyOrder = 0;
  GlobalOrderError = NULL;
  mock_moduleA_Init();
}
static void CMock_Verify(void)
{
  mock_moduleA_Verify();
}
static void CMock_Destroy(void)
{
  mock_moduleA_Destroy();
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
  UnityBegin("test_ledDriver.c");
  run_test(test_ledDriver_NeedToImplement, "test_ledDriver_NeedToImplement", 13);
  run_test(test_Main, "test_Main", 17);
  run_test(test_fooExpecterd_return_baz_if_bar_TRue, "test_fooExpecterd_return_baz_if_bar_TRue", 21);
  run_test(test_fooExpecterd_return_baz_if_bar_false, "test_fooExpecterd_return_baz_if_bar_false", 27);

  CMock_Guts_MemFreeFinal();
  return UnityEnd();
}