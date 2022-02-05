/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_percent.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andchris <andchris1987@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 00:33:37 by andchris          #+#    #+#             */
/*   Updated: 2021/12/12 00:36:33 by andchris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int main(void)
{
    printf("TEST1\n");
    printf("___printf: %% \n");
    ft_printf("ft_printf: %%\n\n");

    printf("TEST2\n");
    printf("___printf: %%%% \n");
    ft_printf("ft_printf: %%%% \n\n");

    printf("TEST3\n");
    printf("___printf: %% %% %% \n");
    ft_printf("ft_printf: %% %% %% \n\n");

    printf("TEST4\n");
    printf("___printf: %%  %%  %% \n");
    ft_printf("ft_printf: %%  %%  %% \n\n");

    printf("TEST5\n");
    printf("___printf: %%   %%   %% \n");
    ft_printf("ft_printf: %%   %%   %% \n\n");

    printf("TEST6\n");
    printf("___printf:%%\n");
    ft_printf("ft_printf:%%\n\n");

    printf("TEST7\n");
    printf("___printf:%% %%\n");
    ft_printf("ft_printf:%% %%\n\n");
}