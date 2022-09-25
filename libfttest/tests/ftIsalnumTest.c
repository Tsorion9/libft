/*! \file       ftIsalnumTest.c
 *
 *  \b Назначение  \b : В данном файле реализованы функции тестирования ftIsalnum \n
 *  \b Функции     \b : ftIsalnumTestCase \n
 *  \b             \b : ftIsalnumTest \n
 *  \b Ограничения \b : Отсутствуют \n
 *
 */

#include "LibftTestCommon.h"

/*! \fn         ftIsalnumTestCase
 *  \b Назначение  \b : Тест функции ftIsalnum с определенным значением \n
 *  \b Ограничения \b : Отсутствуют \n
 *
 *  \param[in] arg1 Аргумент, который будет проверяться в функции ftIsalnum
 *  \return 0 - тест пройдет, 1 - тест не пройден
 *
 */
int ftIsalnumTestCase(int arg1)
{
    int ret = 0;
    int expected = ftIsalnum(arg1);
    int actual = isalnum(arg1);

    /* Т.к. в случае, если arg1 является буквой или цифрой,
     * isalnum возвращает неопределенное ненулевое значение */
    if (expected && actual)
    {
        expected = actual;
    }
    if (expected != actual)
    {
        ret = 1;
        printIntFaultTestCase("ftIsalnum", expected, actual);
    }
    return (ret);
}

/*! \fn         ftIsalnumTest
 *  \b Назначение  \b : Вызовы всех тест-кейсов функции ftIsalnum \n
 *  \b Ограничения \b : Отсутствуют \n
 *
 */
void ftIsalnumTest(void)
{
    int testFault = 0; /*!< Признак ошибки одного из тест-кейсов */

    testFault |= ftIsalnumTestCase(0);
    testFault |= ftIsalnumTestCase(-15);
    testFault |= ftIsalnumTestCase(128);
    testFault |= ftIsalnumTestCase('0');
    testFault |= ftIsalnumTestCase('5');
    testFault |= ftIsalnumTestCase('9');
    testFault |= ftIsalnumTestCase('A');
    testFault |= ftIsalnumTestCase('T');
    testFault |= ftIsalnumTestCase('Z');
    testFault |= ftIsalnumTestCase('a');
    testFault |= ftIsalnumTestCase('t');
    testFault |= ftIsalnumTestCase('z');
    if (!testFault)
    {
        printSuccessTest("ftIsalnum");
    }
}
