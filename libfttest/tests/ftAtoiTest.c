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
    int actual = atoi(arg1);

    if (expected != actual)
    {
        ret = 1;
        printIntFaultTestCase("ftAtoi", expected, actual);
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

    testFault |= ftAtoiTestCase("");
    testFault |= ftAtoiTestCase("0");
    testFault |= ftAtoiTestCase("-0");
    testFault |= ftAtoiTestCase("1");
    testFault |= ftAtoiTestCase("-1");
    testFault |= ftAtoiTestCase("-2147483648");
    testFault |= ftAtoiTestCase("2147483647");
    testFault |= ftAtoiTestCase(" a65 ");
    testFault |= ftAtoiTestCase("   6");
    testFault |= ftAtoiTestCase("   5  ");
    testFault |= ftAtoiTestCase("   -5145  ");
    testFault |= ftAtoiTestCase("5 cc iwi");
    testFault |= ftAtoiTestCase("   5.2947 cc iwi");
    testFault |= ftAtoiTestCase("   -5.2947 cc iwi");
    testFault |= ftAtoiTestCase("   ---5.2947 cc iwi");
    testFault |= ftAtoiTestCase("   -5.2947 cc iwi  ");
    testFault |= ftAtoiTestCase("   +0.2947 cc iwi");
    testFault |= ftAtoiTestCase("   +874569.2947 cc iwi");
    /* Тест-кейсы на переполнение не проверяем */
    /*testFault |= ftAtoiTestCase("9999999999999999999 cc iwi  ");
    testFault |= ftAtoiTestCase("-9999999999999999999 cc iwi");*/
    if (!testFault)
    {
        printSuccessTest("ftAtoi");
    }
}
