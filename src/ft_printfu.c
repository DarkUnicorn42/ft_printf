/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printfu.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwojtcza <mwojtcza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 15:50:47 by mwojtcza          #+#    #+#             */
/*   Updated: 2024/03/16 17:57:12 by mwojtcza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

static int	ft_countstr(unsigned int n)
{
	int	count;

	count = 0;
	if (n == 0)
		count++;
	while (n != 0)
	{
		n /= 10;
		count++;
	}
	return (count);
}

static char	*ft_uitoa(unsigned int n)
{
	int				i;
	char			*str;

	i = ft_countstr(n);
	str = (char *)malloc((sizeof(char) * (i + 1)));
	str[i--] = '\0';
	if (!str)
		return (0);
	while (n != 0)
	{
		str[i--] = (n % 10) + '0';
		n /= 10;
	}
	return (str);
}

int	ft_printfu(unsigned int n)
{
	size_t	i;
	char	*str;

	i = 0;
	str = ft_uitoa(n);
	while (i < ft_strlen(str))
	{
		write(1, &str[i], 1);
		i++;
	}
	return (i);
}
