/*! \file       LibftTestCommon.h
 *
 *  \b Назначение  \b : В данном файле общие функции, макроопределения,
 *                      типы данных и т.д. для тестирования функций \n
 *  \b Функции     \b : printSuccessTest \n
 *  \b             \b : printFaultTestCase \n
 *  \b Ограничения \b : Отсутствуют \n
 *
 */

#ifndef LIBFT_TEST_COMMON_H
# define LIBFT_TEST_COMMON_H

#include "../../libft/includes/libft.h"
#include <stdio.h>
#include <stddef.h>

#define MAX_INT_DIGITS 9 /*!< Максимальное количество цифр в int числе */

void printSuccessTest(const char *funcName);
void printFaultTestCase(const char *funcName, const char *expectedValue, const char *actualValue);
#endif
