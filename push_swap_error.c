/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_error.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reribeir <reribeir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 13:07:57 by reribeir          #+#    #+#             */
/*   Updated: 2025/03/24 13:11:12 by reribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_duplicate(char **params)
{
	int	i;
	int c;

	i = 0;
	while(params[i] != '\0')
	{
		c = i + 1;
		while(params[c] != '\0')
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

int	ft_isnum(int c)
{
	if (c < 48 || (c > 57))
		return (0);
	else
		return (1);
}


