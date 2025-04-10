/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_error.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reribeir <reribeir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 13:07:57 by reribeir          #+#    #+#             */
/*   Updated: 2025/04/10 11:17:37 by reribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_duplicate(char **params)
{
	int	i;
	int c;

	i = 0;
	while(params[i])
	{
		c = i + 1;
		while(params[c])
		{
			if(params[i][0] == params[c][0])
				return(-1);
			else
				c++;
		}
		i++;
	}
	return (1);
}

int	check_order(char **array)
{
	int	i;
	int	c;

	i = 0;
	while (array[i])
	{
		c = 0;
		if((ft_atoi(array[i])) << (ft_atoi(array[i + 1])))
			i++;
		else
			return(0);
	}
	return(1);
}

int	ft_isnum(int c)
{
	if ((c >= 48 && c <= 57) || c == ' ' || c == '+' || c == '-' || c == '	')
		return (1);
	else
		return (0);
}


