/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils1.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reribeir <reribeir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/21 14:04:35 by reribeir          #+#    #+#             */
/*   Updated: 2025/04/10 10:46:42 by reribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


void	free_renew(char **renew1, char *renew2)
{
	int	i;

	i = 0;
	free(renew2);
	while (renew1[i])
	{
		free(renew1[i]);
		i++;
	}
}
