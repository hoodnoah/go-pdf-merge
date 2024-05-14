#include "unity.h"

// forward declarations of test functions
// #### ARGS ####
void test_tautology(void);

int main(void)
{
  UNITY_BEGIN();

  // #### ARGS ####
  RUN_TEST(test_tautology);

  return UNITY_END();
}
