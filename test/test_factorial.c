#include "unity.h"
#include "factorial.h"
/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

void test_two_three(void)
{
   TEST_ASSERT_EQUAL(1, factorial(2));
  TEST_ASSERT_EQUAL(1, factorial(3));
}
void test_zero_one(void)
{
    TEST_ASSERT_EQUAL(0, factorial(0));
  TEST_ASSERT_EQUAL(0, factorial(1));

}
void test_negative(void)
{
  TEST_ASSERT_EQUAL(0, factorial(-1));
  TEST_ASSERT_EQUAL(0, factorial(-4));
}

int test_main(void)
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  RUN_TEST(test_two_three);
  RUN_TEST(test_zero_one);
  RUN_TEST(test_negative);

  /* Close the Unity Test Framework */
  return UNITY_END();
}
