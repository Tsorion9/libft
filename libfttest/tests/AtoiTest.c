#include "LibftTestCommon.h"

int ftAtoiTestCase(const char *arg1)
{
    int ret = 0;
    int expected = ft_atoi(arg1);
    char expectedStr[MAX_SIZE_FOR_ITOA];
    int actual = atoi(arg1);
    char actualStr[MAX_SIZE_FOR_ITOA];

    if (expected != actual)
    {
        ret = 1;
        sprintf(expectedStr, "%d", expected);
        sprintf(actualStr, "%d", actual);
        printFaultTestCase("ft_atoi", expectedStr, actualStr);
    }
    return (ret);
}

void ftAtoiTest(void)
{
    int testFault = 0; /* Признак ошибки одного из тест-кейсов */

    testFault |= ftAtoiTestCase("0");
    testFault |= ftAtoiTestCase("-0");
    testFault |= ftAtoiTestCase("1");
    testFault |= ftAtoiTestCase("-1");
    testFault |= ftAtoiTestCase("a5");
    if (!testFault)
    {
        printSuccessTest("ft_atoi");
    }
}
