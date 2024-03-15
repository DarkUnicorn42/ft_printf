/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwojtcza <mwojtcza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 17:30:30 by mwojtcza          #+#    #+#             */
/*   Updated: 2024/03/15 15:36:24 by mwojtcza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static int	ft_printcases(const char *f, va_list args)
{
	int		counter;

	counter = 0;
	while (*f != 0)
	{
		if (*f == '%')
		{
			f++;
			if (*f == 'c' || *f == '%')
				counter += ft_printfc(va_arg(args, int));
			if (*f == 's')
				counter += ft_printfstr(va_arg(args, const char *));
			if (*f == 'p')
				counter += ft_printfp(va_arg(args, unsigned long long));
			if (*f == 'd' || *f == 'i' || *f == 'u')
				counter += ft_printfi(va_arg(args, int));
			if (*f == 'x' || *f == 'X')
				counter += ft_printfxx(va_arg(args, unsigned int), f);
		}
		else
			counter += write(1, f, 1);
		f++;
	}
	return (counter);
}

int	ft_printf(const char *f, ...)
{
	int		counter;
	va_list	args;

	va_start (args, f);
	counter = 0;
	counter += ft_printcases(f, args);
	va_end(args);
	return (counter);
}

int	main(void)
{
/*
    ft_printf("c %c\n", 'A');
    printf("c OG %c\n", 'A');
    ft_printf("s %s\n", "Hello, world!");
    printf("s OG %s\n", "Hello, world!");
    ft_printf("p %p\n", (void *)0x12345678);
	printf("p OG %p\n", (void *)0x12345678);
    ft_printf("d %d\n", 123);
    printf("d OG %d\n", 123);
    ft_printf("i %i\n", -456);
    printf("i OG %i\n", -456);
    ft_printf("u %u\n", 789);
    printf("u OG %u\n", 789);
    ft_printf("x %x\n", 0xABCD);
    printf("x OG %x\n", 0xABCD);
    ft_printf("X %X\n", 0xEF01);
    printf("X OG %X\n", 0xEF01);
    ft_printf("%%\n");
    printf("OG %%\n");
*/
//	ft_printf("hello, %d, %c, %s, %x, %X\n", -9456, 'c', "asdasdasd", 15555555, 1234);
//	printf("hello, %d, %c, %s, %x, %X\n", -9456, 'c', "asdasdasd", 15555555, 1234);
    // Testing NULL pointer
    ft_printf("Testing NULL pointer: %p\n", NULL);
    printf("Original printf: %p\n", NULL);
    
    // Testing empty string
    ft_printf("Testing empty string: %s\n", " ");
    printf("Original printf: %s\n", " ");

    // Testing negative number
    ft_printf("Testing negative number: %d\n", -2147483647);
    printf("Original printf: %d\n", -2147483647);
    
    // Testing unsigned integer
    ft_printf("Testing unsigned integer: %u\n", 429496729);
    printf("Original printf: %u\n", 429496729);
    
    // Testing uppercase hexadecimal
    ft_printf("Testing uppercase hexadecimal: %X\n", 0xABCD);
    printf("Original printf: %X\n", 0xABCD);
    
    // Testing lowercase hexadecimal
    ft_printf("Testing lowercase hexadecimal: %x\n", 0xEF01);
    printf("Original printf: %x\n", 0xEF01);
    
    // Testing percent sign
    ft_printf("Testing percent sign: %%\n");
    printf("Original printf: %%\n");
	return (0);
}
