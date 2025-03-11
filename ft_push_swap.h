/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_swap.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reribeir <reribeir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 07:02:50 by reribeir          #+#    #+#             */
/*   Updated: 2025/03/11 15:05:24 by reribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PUSH_SWAP_H
# define FT_PUSH_SWAP_H

# include <unistd.h>
# include <stdarg.h>
# include "./libft/libft.h"

typedef struct s_index
{
	long long	value;
	int	index;
}		t_index;

int push_swap(int c, char *v[]);

int	ft_printf(const char *c, ...);

int	ft_printchar(char c);

int	ft_printstring(char *c);

int	ft_printnbr(long int c);

int	ft_printhex(unsigned long int c, char *str);

int	ft_printunsigned(unsigned long int c);

int	ft_printpointer(void *addr);

#endif
