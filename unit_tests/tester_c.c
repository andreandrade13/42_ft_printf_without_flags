/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tester_c.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andchris <andchris1987@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 22:31:45 by andchris          #+#    #+#             */
/*   Updated: 2021/12/11 22:43:38 by andchris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int main(void)
{
    printf("TEST1\n");
    printf("___printf: %c\n", '0');
    ft_printf("ft_printf: %c\n\n", '0');
    
    printf("TEST2\n");
    printf("___printf: %c \n", '0');
    ft_printf("ft_printf: %c \n\n", '0');

    printf("TEST3\n");
    printf("___printf: %c \n", '0' - 256);
    ft_printf("ft_printf: %c \n\n", '0' - 256);

    printf("TEST4\n");
    printf("___printf: %c \n", '0' + 256);
    ft_printf("ft_printf: %c \n\n", '0' - 256);

    printf("TEST5\n");
    printf("___printf: %c %c %c \n", '0', '0', '1');
    ft_printf("ft_printf: %c %c %c \n\n", '0', '0', '1');

    printf("TEST6\n");
    printf("___printf: %c %c %c \n", ' ', ' ', ' ');
    ft_printf("ft_printf: %c %c %c \n\n", ' ', ' ', ' ');

    printf("TEST7\n");
    printf("___printf: %c %c %c \n", '1', '2', '3');
    ft_printf("ft_printf: %c %c %c \n\n", '1', '2', '3');

    printf("TEST8\n");
    printf("___printf: %c %c %c \n", '2', '1', '0');
    ft_printf("ft_printf: %c %c %c \n\n", '2', '1', '0');

    printf("TEST9\n");
    printf("___printf: %c %c %c \n", '0', '1', '2');
    ft_printf("ft_printf: %c %c %c \n\n", '0', '1', '2');
}