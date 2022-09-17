#include "LibftTestCommon.h"

const char *NONE_COLOR = "\033[m";
const char *GREEN = "\033[0;32;32m";
const char *RED = "\033[0;32;31m";

void printSuccessTest(const char *funcName)
{
    fprintf(stdout, "%sSuccess : %s%s\n", GREEN, funcName, NONE_COLOR);
}

void printFaultTestCase(const char *funcName, const char *expectedValue, const char *actualValue)
{
    fprintf(stdout, "%sFault test case in func %s : expected value: %s, actual value: %s%s\n",
            RED, funcName, expectedValue, actualValue, NONE_COLOR);
}
