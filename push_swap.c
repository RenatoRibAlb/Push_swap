/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reribeir <reribeir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 08:14:12 by reribeir          #+#    #+#             */
/*   Updated: 2025/03/11 16:08:13 by reribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

int	main(int ac, char **av)
{
	char	*params;
	char	*tmp;
	int		i;

	i = 1;
	params = NULL;
	params = ft_strdup("");
	if (ac > 1)
	{
		while (av[i])
		{
			tmp = params;
			params = ft_strjoin(params, av[i]);
			free(tmp);
			tmp = params;
			params = ft_strjoin(params, " ");
			free(tmp);
			i++;
		}
	}
	get_line(params);
	return(0);
}

t_index	get_line(char *params)
{
	char	**array;
	t_index	*list;
	int		i;

	i = 0;
	array = ft_split(params, ' ');
	while (array[i])
		i++;
	list = malloc(sizeof(t_index) * i);
	i = 0;
	while(array[i])
	{
		list[i].value = ft_atoi(array[i]);
		list[i].index = -1;
		i++;
	}
}
t_index	sort_line(t_index *list)
{
	int	i;
	int	temp;
	int	ind;

	i = 0;
	ind = 0;
	while(list[i].index)
	{
		temp = i + 1;
		if (list[i].index == -1)
		{
			if (list[i].value > list[temp].value)
			{
				list[temp].index == ind;
				ind++;
			}
			temp++;
		}
		else
			i++;
	}
}
