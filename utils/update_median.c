/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   update_median.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pclaus <pclaus@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 20:17:00 by pclaus            #+#    #+#             */
/*   Updated: 2024/03/12 14:41:14 by pclaus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	update_median(t_node **head, int count)
{
	int	median;

	ft_printf("The amount of nodes in the list is: %d\n", count);
	median = count / 2;
	ft_printf("The median is: %d\n", median);
	while (*head)
	{
		if (median % 2 == 0)
		{
			if (count < median)
				(*head)->above_median = 0;
			else
				(*head)->above_median = 1;
		}
		else if (median % 2 != 0)
		{
			if (count <= median)
				(*head)->above_median = 0;
			else
				(*head)->above_median = 1;
		}
		if ((*head)->next)
			*head = (*head)->next;
		else
			break ;
	}
}
