/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwiemann <hwiemann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 16:16:54 by hwiemann          #+#    #+#             */
/*   Updated: 2023/06/05 11:37:57 by hwiemann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int ft_printf(const char *format, )
{
    va_list args;
    va_start(args, format);
    int c;
    char *str;

    while (*format)
    {
        if (*format == '%')
        {
            format++;
            if (*format == 'c')
            {
                c = va_arg(args, int);
                write(1, &c, 1);
            }
            else if (*format == 's')
            {
                *str = va_arg(args, char *);
                write(1, str, strlen(str));
            }
            else if (*format == 'p')
        }
        else
        {

        }
    format ++;
    }
    va_end(args);
    return(NULL);
}
