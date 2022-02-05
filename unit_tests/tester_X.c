/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tester_X.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andchris <andchris1987@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 00:18:57 by andchris          #+#    #+#             */
/*   Updated: 2021/12/12 00:33:04 by andchris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"
#define INT_MAX 2147483647
#define INT_MIN 2147483648
#define LONG_MAX 4294967295
#define LONG_MIN 0
#define UINT_MAX 4294967295
#define ULONG_MAX 4294967295

int main(void)
{
    printf("TEST1\n");
    printf("___printf: %X \n", 0);
    ft_printf("ft_printf: %X \n\n", 0);

    printf("TEST2\n");
    printf("___printf: %X \n", -1);
    ft_printf("ft_printf: %X \n\n", -1);

    printf("TEST3\n");
    printf("___printf: %X \n", 1);
    ft_printf("ft_printf: %X \n\n", 1);

    printf("TEST4\n");
    printf("___printf: %X \n", 9);
    ft_printf("ft_printf: %X \n\n", 9);

    printf("TEST5\n");
    printf("___printf: %X \n", 10);
    ft_printf("ft_printf: %X \n\n", 10);

    printf("TEST6\n");
    printf("___printf: %X \n", 11);
    ft_printf("ft_printf: %X \n\n", 11);

    printf("TEST7\n");
    printf("___printf: %X \n", 15);
    ft_printf("ft_printf: %X \n\n", 15);

    printf("TEST8\n");
    printf("___printf: %X \n", 16);
    ft_printf("ft_printf: %X \n\n", 16);

    printf("TEST9\n");
    printf("___printf: %X \n", 17);
    ft_printf("ft_printf: %X \n\n", 17);

    printf("TEST10\n");
    printf("___printf: %X \n", 99);
    ft_printf("ft_printf: %X \n\n", 99);

    printf("TEST11\n");
    printf("___printf: %X \n", 100);
    ft_printf("ft_printf: %X \n\n", 100);

    printf("TEST12\n");
    printf("___printf: %X \n", 101);
    ft_printf("ft_printf: %X \n\n", 101);

    printf("TEST13\n");
    printf("___printf: %X \n", -9);
    ft_printf("ft_printf: %X \n\n", -9);

    printf("TEST14\n");
    printf("___printf: %X \n", -10);
    ft_printf("ft_printf: %X \n\n", -10);

    printf("TEST15\n");
    printf("___printf: %X \n", -11);
    ft_printf("ft_printf: %X \n\n", -11);

    printf("TEST16\n");
    printf("___printf: %X \n", -14);
    ft_printf("ft_printf: %X \n\n", -14);

    printf("TEST17\n");
    printf("___printf: %X \n", -15);
    ft_printf("ft_printf: %X \n\n", -15);

    printf("TEST18\n");
    printf("___printf: %X \n", -16);
    ft_printf("ft_printf: %X \n\n", -16);

    printf("TEST19\n");
    printf("___printf: %X \n", -99);
    ft_printf("ft_printf: %X \n\n", -99);

    printf("TEST20\n");
    printf("___printf: %X \n", -100);
    ft_printf("ft_printf: %X \n\n", -100);

    printf("TEST21\n");
    printf("___printf: %X \n", -101);
    ft_printf("ft_printf: %X \n\n", -101);

    printf("TEST22\n");
    printf("___printf: %X \n", INT_MAX);
    ft_printf("ft_printf: %X \n\n", INT_MAX);

    printf("TEST23\n");
    printf("___printf: %X \n", INT_MIN);
    ft_printf("ft_printf: %X \n\n", INT_MIN);

    printf("TEST24\n");
    printf("___printf: %X \n", LONG_MAX);
    ft_printf("ft_printf: %X \n\n", LONG_MAX);

    printf("TEST25\n");
    printf("___printf: %X \n", LONG_MIN);
    ft_printf("ft_printf: %X \n\n", LONG_MIN);

    printf("TEST26\n");
    printf("___printf: %X \n", UINT_MAX);
    ft_printf("ft_printf: %X \n\n", UINT_MAX);

    printf("TEST27\n");
    printf("___printf: %X \n", ULONG_MAX);
    ft_printf("ft_printf: %X \n\n", ULONG_MAX);

    printf("TEST28\n");
    printf("___printf: %X \n", 9223372036854775807LL);
    ft_printf("ft_printf: %X \n\n", 9223372036854775807LL);

    printf("TEST29\n");
    printf("___printf: %X %X %X %X %X %X %X\n", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
    ft_printf("ft_printf: %X %X %X %X %X %X %X\n\n", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);

    printf("TEST30\n");
    printf("___printf: %X \n", -42);
    ft_printf("ft_printf: %X \n\n", -42);

    printf("TEST31\n");
    printf("___printf: %X \n", 42);
    ft_printf("ft_printf: %X \n\n", -42);
}