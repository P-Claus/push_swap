/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   update_median.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pclaus <pclaus@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 20:17:00 by pclaus            #+#    #+#             */
/*   Updated: 2024/03/12 18:16:12 by pclaus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	update_median(t_node **head, int count)
{
	int	median;
	int	iter;

	
	//ft_printf("-------------------------------------------------------\n");
	//ft_printf("The amount of nodes in the list is: %d\n", count);
	median = count / 2;
	ft_printf("The median is: %d\n", median);
	//ft_printf("-------------------------------------------------------\n");
	iter = 0;
	while (*head)
	{
		if (count % 2 == 0)
		{
			if (iter < median)
				(*head)->above_median = 0;
			else
				(*head)->above_median = 1;
		}
		else if (count % 2 != 0)
		{
			if (iter <= median)
				(*head)->above_median = 0;
			else
				(*head)->above_median = 1;
		}
		iter++;
		ft_printf("The above_median of head_b is: %d\n", (*head)->above_median);	
		if ((*head)->next)
			*head = (*head)->next;
		else
			break ;
	}
	tail_to_head(head);
	
}
