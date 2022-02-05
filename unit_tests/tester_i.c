/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tester_i.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andchris <andchris1987@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 00:01:33 by andchris          #+#    #+#             */
/*   Updated: 2021/12/12 11:36:52 by andchris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"
#define INT_MAX 2147483647
#define INT_MIN -2147483648
#define LONG_MAX -1
#define LONG_MIN 0
#define UINT_MAX -1
#define ULONG_MAX -1

int main(void)
{
    printf("TEST1\n");
    printf("___printf: %i \n", 0);
    ft_printf("ft_printf: %i \n\n", 0);

    printf("TEST2\n");
    printf("___printf: %i \n", -1);
    ft_printf("ft_printf: %i \n\n", -1);

    printf("TEST3\n");
    printf("___printf: %i \n", 1);
    ft_printf("ft_printf: %i \n\n", 1);

    printf("TEST4\n");
    printf("___printf: %i \n", 9);
    ft_printf("ft_printf: %i \n\n", 9);

    printf("TEST5\n");
    printf("___printf: %i \n", 10);
    ft_printf("ft_printf: %i \n\n", 10);

    printf("TEST6\n");
    printf("___printf: %i \n", 11);
    ft_printf("ft_printf: %i \n\n", 11);

    printf("TEST7\n");
    printf("___printf: %i \n", 15);
    ft_printf("ft_printf: %i \n\n", 15);

    printf("TEST8\n");
    printf("___printf: %i \n", 16);
    ft_printf("ft_printf: %i \n\n", 16);

    printf("TEST9\n");
    printf("___printf: %i \n", 17);
    ft_printf("ft_printf: %i \n\n", 17);

    printf("TEST10\n");
    printf("___printf: %i \n", 99);
    ft_printf("ft_printf: %i \n\n", 99);

    printf("TEST11\n");
    printf("___printf: %i \n", 100);
    ft_printf("ft_printf: %i \n\n", 100);

    printf("TEST12\n");
    printf("___printf: %i \n", 101);
    ft_printf("ft_printf: %i \n\n", 101);

    printf("TEST13\n");
    printf("___printf: %i \n", -9);
    ft_printf("ft_printf: %i \n\n", -9);

    printf("TEST14\n");
    printf("___printf: %i \n", -10);
    ft_printf("ft_printf: %i \n\n", -10);

    printf("TEST15\n");
    printf("___printf: %i \n", -11);
    ft_printf("ft_printf: %i \n\n", -11);

    printf("TEST16\n");
    printf("___printf: %i \n", -14);
    ft_printf("ft_printf: %i \n\n", -14);

    printf("TEST17\n");
    printf("___printf: %i \n", -15);
    ft_printf("ft_printf: %i \n\n", -15);

    printf("TEST18\n");
    printf("___printf: %i \n", -16);
    ft_printf("ft_printf: %i \n\n", -16);

    printf("TEST19\n");
    printf("___printf: %i \n", -99);
    ft_printf("ft_printf: %i \n\n", -99);

    printf("TEST20\n");
    printf("___printf: %i \n", -100);
    ft_printf("ft_printf: %i \n\n", -100);

    printf("TEST21\n");
    printf("___printf: %i \n", -101);
    ft_printf("ft_printf: %i \n\n", -101);

    printf("TEST22\n");
    printf("___printf: %i \n", INT_MAX);
    ft_printf("ft_printf: %i \n\n", INT_MAX);

    printf("TEST23\n");
    printf("___printf: %i \n", INT_MIN);
    ft_printf("ft_printf: %i \n\n", INT_MIN);

    printf("TEST24\n");
    printf("___printf: %i \n", LONG_MAX);
    ft_printf("ft_printf: %i \n\n", LONG_MAX);

    printf("TEST25\n");
    printf("___printf: %i \n", LONG_MIN);
    ft_printf("ft_printf: %i \n\n", LONG_MIN);

    printf("TEST26\n");
    printf("___printf: %i \n", UINT_MAX);
    ft_printf("ft_printf: %i \n\n", UINT_MAX);

    printf("TEST27\n");
    printf("___printf: %i \n", ULONG_MAX);
    ft_printf("ft_printf: %i \n\n", ULONG_MAX);

    printf("TEST28\n");
    printf("___printf: %i \n", 9223372036854775807LL);
    ft_printf("ft_printf: %i \n\n", 9223372036854775807LL);

    printf("TEST29\n");
    printf("___printf: %i %i %i %i %i %i %i\n", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
    ft_printf("ft_printf: %i %i %i %i %i %i %i\n\n", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
}