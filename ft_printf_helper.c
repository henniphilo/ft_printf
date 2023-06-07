/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_helper.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwiemann <hwiemann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 15:33:27 by hwiemann          #+#    #+#             */
/*   Updated: 2023/06/06 21:14:04 by hwiemann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

size_t    ft_wrt_char(int c)
{
    write(1, &c, 1);
    return(1);
}

size_t ft_wrt_str(char *s)
{
    size_t  i;

    if (s == NULL)
    return (0);
    i = 0;
    while (*s)
    {
        write(1, s++, 1);
        i++;
    }
    return (i);
}

size_t ft_wrt_base_ptr(va_arg(ap, int))
{
    unsigned long long  lnbr;
    unsigned int    base_len;
    size_t  i;

    
}

size_t ft_wrt_base_nbr(int nbr, char *base)
{
    int base_len;
    long    lnbr;
    size_t  i;

    base_len = ft_strlen(base);
    lnbr = nbr;
    i = 0;
    if (lnbr < 0)
    {
        i += ft_wrt_char('-');
        lnbr *= -1;
    }
    if (lnbr >= base_len)
        i += ft_wrt_base_nbr(lnbr / base_len, base);
        i += ft_wrt_char(base[lnbr % base_len]);
    return (i);
}

size_t ft_wrt_base_unsnbr(va_arg(ap, unsigned int))

