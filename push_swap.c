/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reribeir <reribeir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 08:14:12 by reribeir          #+#    #+#             */
/*   Updated: 2025/01/14 17:54:12 by reribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

t_list push_swap(int c, char *v)
{
	int		i;
	t_list	*node;

	i = 1;
	if (c <= 0 || !v)
		exit;
	while (i < c)
	{
		node = ft_lstnew(v[i]);
		node->next;
		i++;
	}
}

int	main(int c, char *v[])
{

}
