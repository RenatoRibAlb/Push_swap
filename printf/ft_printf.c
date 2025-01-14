/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reribeir <reribeir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 07:10:14 by reribeir          #+#    #+#             */
/*   Updated: 2025/01/06 09:16:17 by reribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_push_swap.h"

static int	ft_printable(char c, va_list arguments)
{
	if (c == 'c')
		return (ft_printchar(va_arg(arguments, int)));
	else if (c == 's')
		return (ft_printstring(va_arg(arguments, char *)));
	else if (c == 'p')
		return (ft_printpointer(va_arg(arguments, void *)));
	else if (c == 'd' || c == 'i')
		return (ft_printnbr(va_arg(arguments, int)));
	else if (c == 'u')
		return (ft_printunsigned(va_arg(arguments, unsigned int)));
	else if (c == 'x')
		return (ft_printhex(va_arg(arguments,
					unsigned int), "0123456789abcdef"));
	else if (c == 'X')
		return (ft_printhex(va_arg(arguments,
					unsigned int), "0123456789ABCDEF"));
	else if (c == '%')
		return (ft_printchar('%'));
	return (0);
}

int	ft_printf(const char *c, ...)
{
	int		i;
	int		count;
	va_list	arguments;

	va_start(arguments, c);
	i = 0;
	count = 0;
	while (c[i] != '\0')
	{
		if (c[i] == '%')
			count += ft_printable(c[++i], arguments);
		else
			count += ft_printchar(c[i]);
		i++;
	}
	va_end(arguments);
	return (count);
}

int	ft_printnbr(long int c)
{
	char			str;
	long long		i;

	i = 0;
	if (c < 0)
	{
		c = -c;
		i += write(1, "-", 1);
	}
	if (c > 9)
	{
		i += ft_printnbr((c / 10));
		str = (c % 10 + '0');
		i += write (1, &str, 1);
	}
	if (c >= 0 && c <= 9)
	{
		str = (c % 10 + '0');
		i += write (1, &str, 1);
	}
	return (i);
}

int	ft_printunsigned(unsigned long int c)
{
	unsigned int	i;
	char			str;

	i = 0;
	if (c > 9)
	{
		i += ft_printnbr((c / 10));
		str = (c % 10 + '0');
		i += write (1, &str, 1);
	}
	if (c >= 0 && c <= 9)
	{
		str = (c % 10 + '0');
		i += write (1, &str, 1);
	}
	return (i);
}

/*int	main(void)
{
#include <stdio.h>
	char	*c = "lasanha";
	//char	d = 'a';
	printf("gosto de %s\n", c);
	ft_printf("%s", c);
}*/
