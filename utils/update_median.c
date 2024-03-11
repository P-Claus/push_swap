/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   update_median.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pclaus <pclaus@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 20:17:00 by pclaus            #+#    #+#             */
/*   Updated: 2024/03/11 21:49:01 by pclaus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	update_median(t_node **head)
{
	int	total_nodes;
	int	median;
	int	count;

	total_nodes = 0;
	if (*head)
	{
		total_nodes++;
		if ((*head)->next)
			*head = (*head)->next;
		// else
		// break ;
	}
	ft_printf("The amount of nodes in the list is: %d\n", total_nodes);
	tail_to_head(head);
	median = total_nodes / 2;
	ft_printf("The median is: %d\n", median);
	count = 0;
	if (*head)
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
		count++;
		if ((*head)->next)
			*head = (*head)->next;
		// else
		// break ;
	}
}
