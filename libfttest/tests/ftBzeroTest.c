/*! \file       ftBzeroTest.c
 *
 *  \b Назначение  \b : В данном файле реализованы функции тестирования ftBzero \n
 *  \b Функции     \b : ftBzetoTestCase \n
 *  \b             \b : ftBzeroTest \n
 *  \b Ограничения \b : Отсутствуют \n
 *
 */

#include "LibftTestCommon.h"

/*! \fn         ftBzeroTestCase
 *  \b Назначение  \b : Тест функции ftBzero с определенными значениями \n
 *  \b Ограничения \b : Отсутствуют \n
 *
 *  \param[in] arg1 Первый аргумент, который будет проверяться в функции ftBzero
 *  \param[in] arg2 Второй аргумент, который будет проверяться в функции ftBzero
 *  \param[in] arg1Size Размер arg1 в байтах
 *  \return 0 - тест пройдет, 1 - тест не пройден
 *
 */
int ftBzeroTestCase(void *arg1, const size_t arg2, size_t arg1Size)
{
    int ret = 0;
    ftBzero(arg1, arg2);
    char actualBuf[arg1Size];
    memcpy(actualBuf, arg1, arg1Size);
    bzero(actualBuf, arg2);

    if (memcmp(arg1, actualBuf, arg1Size))
    {
        ret = 1;
        printByteFaultTestCase("ftBzero", arg1, arg1Size, actualBuf, arg1Size);
    }
    return (ret);
}

/*! \fn         ftBzeroTest
 *  \b Назначение  \b : Вызовы всех тест-кейсов функции ftBzero \n
 *  \b Ограничения \b : Отсутствуют \n
 *
 */
void ftBzeroTest(void)
{
    int testFault = 0; /*!< Признак ошибки одного из тест-кейсов */

    /* Подготовка аргументов необходима перед каждым тест-кейсом */
    char buf[SIZE_20];
    memcpy(buf, "abcdefghijklmnopqrs", SIZE_20);
    testFault |= ftBzeroTestCase(buf, 0, SIZE_20);

    memcpy(buf, "abcdefghijklmnopqrs", SIZE_20);
    testFault |= ftBzeroTestCase(buf, 2, SIZE_20);

    memcpy(buf, "abcdefghijklmnopqrs", SIZE_20);
    testFault |= ftBzeroTestCase(buf, 10, SIZE_20);

    memcpy(buf, "abcdefghijklmnopqrs", SIZE_20);
    testFault |= ftBzeroTestCase(buf, SIZE_20, SIZE_20);

    if (!testFault)
    {
        printSuccessTest("ftBzero");
    }
}
