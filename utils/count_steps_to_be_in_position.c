/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count_steps_to_be_in_position.c                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pclaus <pclaus@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 17:07:52 by pclaus            #+#    #+#             */
/*   Updated: 2024/03/14 17:41:12 by pclaus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	count_steps_to_be_in_position(t_node **head_a, t_node **head_b)
{
	int	count_a;
	int	count_b;
	int	iter;
	int	cheapest_steps_to_push;

	count_a = count_nodes_and_update_index(head_a);
	count_b = count_nodes_and_update_index(head_b);
	cheapest_steps_to_push = INT_MAX;
	update_median(head_a, count_a);
	update_median(head_b, count_b);
	while (*head_a)
	{
		iter = 0;
		(*head_a)->destination = check_destination(head_b, (*head_a)->value);
		while (iter < (*head_a)->destination)
		{
			if ((*head_a)->destination == count_b)
			{
				head_to_tail(head_b);
				break ;
			}
			*head_b = (*head_b)->next;
			iter++;
		}
		if ((*head_b)->above_median == 0)
			(*head_a)->cheapest_to_push = (*head_a)->destination + 1;
		if ((*head_b)->above_median == 1)
			(*head_a)->cheapest_to_push = count_b - (*head_a)->destination + 1;
		if ((*head_a)->above_median == 0)
		{
			(*head_a)->cheapest_to_push += (*head_a)->index;
		}
		else if ((*head_a)->above_median == 1)
		{
			(*head_a)->cheapest_to_push += count_a - (*head_a)->index;
		}
		tail_to_head(head_b);
		if ((*head_a)->cheapest_to_push < cheapest_steps_to_push)
			cheapest_steps_to_push = (*head_a)->cheapest_to_push;
		if ((*head_a)->next)
			*head_a = (*head_a)->next;
		else
			break ;
	}
}
