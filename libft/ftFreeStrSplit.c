/*! \file       ftFreeStrSplit.c
 *
 *  \b Назначение  \b : В данном файле реализована функция ftFreeStrSplit \n
 *  \b Функции     \b : ftFreeStrSplit \n
 *  \b Ограничения \b : Отсутствуют \n
 *
 */

#include "libft.h"

/*! \fn         ftFreeStrSplit
 *  \b Назначение  \b : Очищает динамически выделенную память массива строк \n
 *  \b Ограничения \b : Отсутствуют \n
 *
 *  \param[in] str Массив строк
 *
 */
void ftFreeStrSplit(char **str)
{
    size_t i = 0;

    if (str)
    {
        while (str[i])
        {
            free(str[i]);
            i++;
        }
        free(str);
    }
}
