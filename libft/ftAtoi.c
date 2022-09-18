/*! \file       ftAtoi.c
 *
 *  \b Назначение  \b : В данном файле реализована библиотечная функция atoi \n
 *  \b Функции     \b : ftAtoi \n
 *  \b Ограничения \b : Отсутствуют \n
 *
 */

#include "libft.h"

/*! \fn         ftAtoi
 *  \b Назначение  \b : Конвертирует строку, на которую указывает параметр str,
 *                      в величину типа int (реализация библиотечной функции atoi) \n
 *  \b Ограничения \b : Отсутствуют \n
 *
 *  \param[in] str Строка для конвертации
 *  \return Сконвертированное число. 0 - строка неккоректна
 *
 */
int ftAtoi(const char *str)
{
    int res = 0;
    int sign = 1;
    int i = 0;

    while (str[i] == '\n' || str[i] == '\v' || str[i] == '\t' ||
           str[i] == '\r' || str[i] == '\f' || str[i] == ' ')
    {
        i++;
    }
    if (str[i] == '-')
    {
        sign = -1;
    }
    if (str[i] == '+' || str[i] == '-')
    {
        i++;
    }
    while (str[i] >= '0' && str[i] <= '9')
    {
        res = res * 10 + (int)str[i] - 48;
        i++;
    }
    return (res * sign);
}
