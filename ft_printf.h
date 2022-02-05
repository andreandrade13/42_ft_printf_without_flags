/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andchris <andchris1987@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 15:01:24 by andchris          #+#    #+#             */
/*   Updated: 2022/01/23 20:33:31 by andchris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <stdarg.h>

//Prototypes

int	ft_printf(const char *format, ...);
int	printf_c(char c);
int	printf_str(char *str);
int	printf_di(int nb);
int	printf_u(unsigned int nb);
int	printf_pointer(unsigned long int pointer);
int	printf_hex(unsigned int nbr, char *base);
int	printf_percent(void);

#endif
