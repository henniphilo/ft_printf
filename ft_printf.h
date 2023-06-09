/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwiemann <hwiemann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 15:51:46 by hwiemann          #+#    #+#             */
/*   Updated: 2023/06/07 15:07:47 by hwiemann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef    FT_PRINTF_H
# define    FT_PRINTF_H

# include "./libft/libft.h"
# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>

# define DEC_BASE "0123456789"
# define HEX_BASE_UP "0123456789ABCDEF"
# define HEX_BASE_LOW "0123456789abcdef"
# define POINTER_PREFIX "0x"

int ft_printf(const char *format, ... );
size_t    ft_wrt_char(int c);
size_t ft_wrt_str(char *s);
size_t ft_wrt_base_nbr(int nbr, char *base);
size_t ft_wrt_base_unsnbr(unsigned int nbr, char *base);
size_t ft_wrt_base_ptr(void *ptr, char *base, int first_flag);

#endif
