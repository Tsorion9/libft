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

/*! \fn         printFaultTestCase
 *  \b Назначение  \b : Печать сообщения с неуспешным прохождением теста \n
 *  \b Ограничения \b : Отсутствуют \n
 *
 *  \param[in] funcName Имя функции
 *  \param[in] expectedValue Ожидаемое значение
 *  \param[in] actualValue Фаутическое значение
 *
 */
void printFaultTestCase(const char *funcName, const char *expectedValue, const char *actualValue)
{
    fprintf(stdout, "%sFault test case in func %s : expected value: %s, actual value: %s%s\n",
            RED, funcName, expectedValue, actualValue, NONE_COLOR);
}
