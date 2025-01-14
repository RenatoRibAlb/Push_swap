/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reribeir <reribeir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 08:08:23 by reribeir          #+#    #+#             */
/*   Updated: 2025/01/06 09:16:13 by reribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_push_swap.h"

int	ft_printchar(char c)
{
	return (write (1, &c, 1));
}

int	ft_printhex(unsigned long int c, char *str)
{
	int		i;

	i = 0;
	if (c >= 16)
		i += ft_printhex((c / 16), str);
	i += ft_printchar(str[c % 16]);
	return (i);
}

int	ft_printpointer(void *addr)
{
	unsigned long	n;
	int				i;

	n = (unsigned long)addr;
	i = 0;
	if (!addr)
		return (ft_printstring("(nil)"));
	i += write (1, "0x", 2);
	i += ft_printhex(n, "0123456789abcdef");
	return (i);
}

int	ft_printstring(char *c)
{
	int	i;
	int	count;

	count = 0;
	i = 0;
	if (!c)
		return (ft_printstring("(null)"));
	while (c[i] != '\0')
	{
		count += write(1, &c[i], 1);
		i++;
	}
	return (ft_strlen(c));
}
