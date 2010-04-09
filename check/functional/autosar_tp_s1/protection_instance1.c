
/*Instance 1 of protection hook */

#include "embUnit.h"
#include "Os.h"

extern ProtectionReturnType protectiontypetoreturn;

/*test case:test the reaction of the system called with 
 an activation of a task*/
static void test_protection_instance1(void)
{
  
  SCHEDULING_CHECK_STEP(8);
	
  protectiontypetoreturn = PRO_TERMINATETASKISR;
  
}

/*create the test suite with all the test cases*/
TestRef AutosarTPTest_seq1_protection_instance1(void)
{
	EMB_UNIT_TESTFIXTURES(fixtures) {
		new_TestFixture("test_protecion_instance1",test_protection_instance1)
	};
	EMB_UNIT_TESTCALLER(AutosarTPTest,"AutosarTPTest_sequence1",NULL,NULL,fixtures);
	
	return (TestRef)&AutosarTPTest;
}

