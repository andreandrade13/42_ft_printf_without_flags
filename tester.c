/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tester.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andchris <andchris1987@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 18:24:34 by andchris          #+#    #+#             */
/*   Updated: 2021/12/12 11:36:12 by andchris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int main(void)
{
    //TEST DIRECTLY ON HANDLERS
    // printf("Do: cspdiuxX%%\n");
    // printf("Done: cspdiuxX%%\n");
    // printf("TODO: \\o/\n");
    // printf("Bonus: Flags 0%%\n\n\n");


    // printf("*****PRINTF_C HANDLER*****\n");

    // char a = 'a';
    // char b = '2';
    // printf("Expected: a\n");
    // printf("Result: \n");
    // printf_c(a);
    // printf("\n");
    // printf("Expected: 2\n");
    // printf("Result: \n");
    // printf_c(b);
    // printf("\n\n");


    // printf("*****PRINTF_PERCENT HANDLER*****\n");
    // printf("Expected: %%\n");
    // printf("Result: \n");
    // printf_percent();
    // printf("\n\n");


    // printf("*****PRINTF_STR HANDLER*****\n");
    // char *str = "andre";
    // printf("Expected: andre\n");
    // printf("Result: \n");
    // printf_str(str);
    // printf("\n\n");

    // printf("*****PRINTF_DI HANDLER*****\n");
    // int nb = 5;
    // printf("Expected: 5\n");
    // printf("Result: \n");
    // printf_di(nb);
    // printf("\n\n");


    // printf("*****PRINTF_HEX HANDLER*****\n");
    // int nbd = 10;
    // printf("Expected: A\n");
    // printf("Result: \n");
    // printf_hex(nbd, "0123456789ABCDEF");
    // printf("\n\n");


    // printf("*****PRINTF_U HANDLER*****\n");
    // int nbe = 215;
    // printf("Expected: 215\n");
    // printf("Result: \n");
    // printf_u(nbe);
    // printf("\n\n");


    // printf("*****PRINTF_POINTER HANDLER*****\n");
    // long int point = 2147483648;
    // printf("Expected: 0x8000000\n");
    // printf("Result: \n");
    // printf_pointer(point);
    // printf("\n\n");


    printf("*****FT_PRINTF TESTER!!!!!!!!*****\n\n");
    char a1 = 'y';
    printf("Test for CHAR\n");
    ft_printf("Result: %c", a1);
    printf("\n\n");

    char *a2 = "hello world";
    printf("Test for STRING\n");
    ft_printf("Result: %s", a2);
    printf("\n\n");

    long int a3 = 2147483648;
    printf("Test for POINTER\n");
    ft_printf("Result: %p", a3);
    printf("\n\n");

    int a4 = 25;
    printf("Test for DIGIT\n");
    ft_printf("Result: %d", a4);
    printf("\n\n");

    int a5 = 9999;
    printf("Test for INTEGER\n");
    ft_printf("Result: %i", a5);
    printf("\n\n");
    
    unsigned int a6 = 123456789;
    printf("Test for UNSIGNED INTEGER\n");
    ft_printf("Result: %i", a6);
    printf("\n\n");

    unsigned int a7 = 175564079;
    printf("Test for hexadecimal\n");
    ft_printf("Result: %x", a7, "0123456789abcdef");
    printf("\n\n");

    unsigned int a8 = 175564079;
    printf("Test for HEXADECIMAL\n");
    ft_printf("Result: %X", a8, "0123456789ABCDEF");
    printf("\n\n");

    printf("Test for PERCENT SIGN\n");
    ft_printf("Result: %%");
    printf("\n\n");
}