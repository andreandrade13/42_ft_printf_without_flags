/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tester_pointer.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andchris <andchris1987@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 21:44:36 by andchris          #+#    #+#             */
/*   Updated: 2021/12/12 12:04:13 by andchris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"
#define LONG_MIN 9223372036854775808
#define LONG_MAX 9223372036854775807
#define INT_MIN 2147483648
#define INT_MAX 2147483647
#define ULONG_MAX 18446744073709551615
#define ULONG_MIN 1

int main(void)
{
    printf("TEST1\n");
    // printf(" %p ", -1);
    // printf("\n");
    ft_printf(" %p \n", -1);
    printf("\n");

    printf("TEST2\n");
    // printf(" %p ", 1);
    // printf("\n");
    ft_printf(" %p \n", 1);
    printf("\n");

    printf("TEST3\n");
    // printf(" %p ", 1);
    // printf("\n");
    ft_printf(" %p \n", 15);
    printf("\n");

    printf("TEST4\n");
    // printf(" %p ", 1);
    // printf("\n");
    ft_printf(" %p \n", 16);
    printf("\n");

    printf("TEST5\n");
    // printf(" %p ", 1);
    // printf("\n");
    ft_printf(" %p \n", 17);
    printf("\n");

    printf("TEST6\n");
    // printf(" %p ", 1);
    // printf("\n");
    ft_printf(" %p %p \n", LONG_MIN, LONG_MAX);
    printf("\n");

    printf("TEST7\n");
    // printf(" %p ", 1);
    // printf("\n");
    ft_printf(" %p %p \n", INT_MIN, INT_MAX);
    printf("\n");

    printf("TEST8\n");
    // printf(" %p ", 1);
    // printf("\n");
    ft_printf(" %p %p \n", ULONG_MAX, ULONG_MIN);
    printf("\n");

    printf("TEST9\n");
    // printf(" %p ", 1);
    // printf("\n");
    ft_printf(" %p %p \n", 0, 0);
    printf("\n");
}