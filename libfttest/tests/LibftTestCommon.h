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
#include <strings.h>

#define SIZE_20 20        /*!< 20 байт */

void printSuccessTest(const char *funcName);
void printStringFaultTestCase(const char *funcName, const char *expectedValue,
                              const char *actualValue);
void printByteFaultTestCase(const char *funcName,
                            const void *expectedValue,
                            size_t expectedValueSize,
                            const void *actualValue,
                            size_t actualValueSize);
void printIntFaultTestCase(const char *funcName, int expectedValue, int actualValue);
#endif
