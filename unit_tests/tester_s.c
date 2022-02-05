/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tester_s.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andchris <andchris1987@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 22:45:01 by andchris          #+#    #+#             */
/*   Updated: 2021/12/11 23:01:11 by andchris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int main(void)
{
    char *s2 = "Mussum Ipsum, cacilds vidis litro abertis. Posuere libero varius. Nullam a nisl ut ante blandit hendrerit. Aenean sit amet nisi. Atirei o pau no gatis, per gatis num morreus.";

    printf("TEST1\n");
    printf("___printf:%s\n", "");
    ft_printf("ft_printf:%s\n\n", "");

    printf("TEST2\n");
    printf("___printf: %s\n", "");
    ft_printf("ft_printf: %s\n\n", "");

    printf("TEST3\n");
    printf("___printf:%s \n", "");
    ft_printf("ft_printf:%s \n\n", "");

    printf("TEST4\n");
    printf("___printf: %s \n", "");
    ft_printf("ft_printf: %s \n\n", "");

    printf("TEST5\n");
    printf("___printf: %s \n", "-");
    ft_printf("ft_printf: %s \n\n", "-");

    printf("TEST6\n");
    printf("___printf: %s %s \n", "", "-");
    ft_printf("ft_printf: %s %s \n\n", "", "-");

    printf("TEST7\n");
    printf("___printf: %s %s \n", " - ", "");
    ft_printf("ft_printf: %s %s \n\n", " - ", "");

    printf("TEST8\n");
    printf("___printf: %s %s %s %s %s \n", " - ", "", "4", "", s2);
    ft_printf("ft_printf: %s %s %s %s %s \n\n", " - ", "", "4", "", s2);

    printf("TEST9\n");
    printf("___printf: %s %s %s %s %s \n", " - ", "", "4", "", "2 ");
    ft_printf("ft_printf: %s %s %s %s %s \n\n", " - ", "", "4", "", "2 ");

    // printf("TEST10\n");
    // printf("___printf: NULL %s NULL \n", NULL);
    // ft_printf("ft_printf: NULL %s NULL \n\n", NULL);
}