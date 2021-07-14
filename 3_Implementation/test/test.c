#include "unity.h"
#include "unity_internals.h"
#include "tictactoe.h"

	void setUp()
	{	}
	void tearDown()
	{	}
	void test_checkwin1(void);
	
	
	void test_checkwin1(void)
	{
  		TEST_ASSERT_EQUAL(-1, checkwin());
	}

                                 
           

	int main()
	{
	  	UNITY_BEGIN();
  	
	  	RUN_TEST(test_checkwin1);

  		return UNITY_END();
	}
