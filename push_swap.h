/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reribeir <reribeir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 07:02:50 by reribeir          #+#    #+#             */
/*   Updated: 2025/04/10 12:59:27 by reribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdarg.h>
# include "./libft/libft.h"

typedef struct s_index
{
	long long	value;
	int	index;
}		t_index;

int push_swap(int c, char *v[]);

t_index	*get_line(char *params);

t_index	*sort_line(t_index *list);

int	ft_isnum(int c);

int	check_duplicate(char **params);

int	check_order(char **array);

void	free_renew(char **renew1, char *renew2);

#endif
