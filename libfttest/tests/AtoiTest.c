/*! \file       AtoiTest.c
 *
 *  \b Назначение  \b : В данном файле реализованы функции тестирования ftAtoi \n
 *  \b Функции     \b : ftAtoiTestCase \n
 *  \b             \b : ftAtoiTest \n
 *  \b Ограничения \b : Отсутствуют \n
 *
 */

#include "LibftTestCommon.h"

/*! \fn         ftAtoiTestCase
 *  \b Назначение  \b : Тест функции ftAtoi с определенным значением \n
 *  \b Ограничения \b : Отсутствуют \n
 *
 *  \param[in] arg1 Аргумент, который будет проверяться в функции ftAtoi
 *  \return 0 - тест пройдет, 1 - тест не пройден
 *
 */
int ftAtoiTestCase(const char *arg1)
{
    int ret = 0;
    int expected = ftAtoi(arg1);
    char expectedStr[MAX_INT_DIGITS + 1];
    int actual = atoi(arg1);
    char actualStr[MAX_INT_DIGITS + 1];

    if (expected != actual)
    {
        ret = 1;
        sprintf(expectedStr, "%d", expected);
        sprintf(actualStr, "%d", actual);
        printFaultTestCase("ftAtoi", expectedStr, actualStr);
    }
    return (ret);
}

/*! \fn         ftAtoiTest
 *  \b Назначение  \b : Вызовы всех тест-кейсов функции ftAtoi \n
 *  \b Ограничения \b : Отсутствуют \n
 *
 */
void ftAtoiTest(void)
{
    int testFault = 0; /*!< Признак ошибки одного из тест-кейсов */

    testFault |= ftAtoiTestCase("0");
    testFault |= ftAtoiTestCase("-0");
    testFault |= ftAtoiTestCase("1");
    testFault |= ftAtoiTestCase("-1");
    testFault |= ftAtoiTestCase("a5");
    if (!testFault)
    {
        printSuccessTest("ftAtoi");
    }
}
