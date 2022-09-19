/*! \file       LibftTestCommon.c
 *
 *  \b Назначение  \b : В данном файле реализованы общие функции для тестирования функций \n
 *  \b Функции     \b : ftAtoiTestCase \n
 *  \b             \b : ftAtoiTest \n
 *  \b Ограничения \b : Отсутствуют \n
 *
 */

#include "LibftTestCommon.h"

const char *NONE_COLOR = "\033[m";   /*!< Нет цвета */
const char *GREEN = "\033[0;32;32m"; /*!< Красный цвет */
const char *RED = "\033[0;32;31m";   /*!< Зеленый цвет */

size_t MAX_INT_DIGITS = 10;   /*!< Максимальное количество знаков (символов) в int числе */

/*! \fn         printSuccessTest
 *  \b Назначение  \b : Печать сообщения с успешным прохождением теста \n
 *  \b Ограничения \b : Отсутствуют \n
 *
 *  \param[in] funcName Имя функции
 *
 */
void printSuccessTest(const char *funcName)
{
    fprintf(stdout, "%sSuccess : %s%s\n", GREEN, funcName, NONE_COLOR);
}

/*! \fn         printStringFaultTestCase
 *  \b Назначение  \b : Печать сообщения с неуспешным прохождением теста,
 *                      когда ожидаемое и фактическое значения - строки \n
 *  \b Ограничения \b : Отсутствуют \n
 *
 *  \param[in] funcName Имя функции
 *  \param[in] expectedValue Ожидаемое значение
 *  \param[in] actualValue Фактическое значение
 *
 */
void printStringFaultTestCase(const char *funcName, const char *expectedValue,
                              const char *actualValue)
{
    fprintf(stdout, "%sFault test case in func %s : expected value: %s, actual value: %s%s\n",
            RED, funcName, expectedValue, actualValue, NONE_COLOR);
}

/*! \fn         printIntFaultTestCase
 *  \b Назначение  \b : Печать сообщения с неуспешным прохождением теста,
 *                      когда ожидаемое и фактическое значения - целые числа \n
 *  \b Ограничения \b : Отсутствуют \n
 *
 *  \param[in] funcName Имя функции
 *  \param[in] expectedValue Ожидаемое значение
 *  \param[in] actualValue Фактическое значение
 *
 */
void printIntFaultTestCase(const char *funcName, int expectedValue, int actualValue)
{
    char expectedStr[MAX_INT_DIGITS + 1];
    char actualStr[MAX_INT_DIGITS + 1];

    sprintf(expectedStr, "%d", expectedValue);
    sprintf(actualStr, "%d", actualValue);
    fprintf(stdout, "%sFault test case in func %s : expected value: %s, actual value: %s%s\n",
            RED, funcName, expectedStr, actualStr, NONE_COLOR);
}

/*! \fn         printByteFaultTestCase
 *  \b Назначение  \b : Печать сообщения в виде байтов с неуспешным прохождением теста \n
 *  \b Ограничения \b : Отсутствуют \n
 *
 *  \param[in] funcName Имя функции
 *  \param[in] expectedValue Ожидаемое значение
 *  \param[in] expectedValueSize Размер ожидаемого значения в байтах
 *  \param[in] actualValue Фактическое значение
 *  \param[in] actualValueSize Размер фактического значения в байтах
 *
 */
void printByteFaultTestCase(const char *funcName, const void *expectedValue, size_t expectedValueSize,
                            const void *actualValue, size_t actualValueSize)
{
    const char *expectedValueChar = (char*)expectedValue;
    const char *actualValueChar = (char*)actualValue;
    size_t i = 0;

    fprintf(stdout, "%sFault test case in func %s : expected value: ", RED, funcName);
    while (i < expectedValueSize)
    {
        fprintf(stdout, "%02X", expectedValueChar[i]);
        i++;
    }
    fprintf(stdout, ", actual value: ");
    i = 0;
    while (i < actualValueSize)
    {
        fprintf(stdout, "%02X", actualValueChar[i]);
        i++;
    }
    fprintf(stdout, "%s\n", NONE_COLOR);
}
