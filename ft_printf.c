/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwojtcza <mwojtcza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 17:30:30 by mwojtcza          #+#    #+#             */
/*   Updated: 2024/03/14 16:35:52 by mwojtcza         ###   ########.fr       */
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
				counter += ft_printfp(va_arg(args, void *));
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
	ft_printf("hello, %d, %c, %s, %x, %X\n", -9456, 'c', "asdasdasd", 15555555, 1234);
	printf("hello, %d, %c, %s, %x, %X\n", -9456, 'c', "asdasdasd", 15555555, 1234);
	return (0);
}
