#ifndef LIBFT_TEST_COMMON_H
# define LIBFT_TEST_COMMON_H

#include "../../libft/includes/libft.h"
#include <stdio.h>

#define MAX_SIZE_FOR_ITOA 18

void printSuccessTest(const char *funcName);
void printFaultTestCase(const char *funcName, const char *expectedValue, const char *actualValue);
#endif
