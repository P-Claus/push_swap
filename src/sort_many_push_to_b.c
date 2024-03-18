/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_many_push_to_b.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pclaus <pclaus@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 19:10:01 by pclaus            #+#    #+#             */
/*   Updated: 2024/03/18 19:40:48 by pclaus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	sort_many_push_to_b(t_node **head_a, t_node **head_b,
		int cheapest_steps_to_push)
{
	int	iter;
	int	index;

	(void)*head_b;
	iter = 0;
	while ((*head_a))
	{
		ft_printf("The value is: %d\n", (*head_a)->value);
		ft_printf("The destination is: %d\n", (*head_a)->destination);
		ft_printf("The index is: %d\n", (*head_a)->index);
		ft_printf("The cheapest is: %d\n", (*head_a)->cheapest_to_push);
		ft_printf("Above median is: %d\n", (*head_a)->above_median);
		if ((*head_a)->cheapest_to_push == cheapest_steps_to_push)
		{
			// rotate a until the node is at index 0
			index = (*head_a)->index;
			if ((*head_a)->above_median == 0)
			{
				while (iter < index)
				{
					tail_to_head(head_a);
					ra(head_a);
					iter++;
				}
			}
			else if ((*head_a)->above_median == 1)
			{
				while (iter <= index)
				{
					tail_to_head(head_a);
					ra(head_a);
					rra(head_a);
					iter++;
				}
			}
			iter = 0;
			// rotate b so it can be pushed in the correct position
			index = (*head_a)->destination - 1;
			if (index < (count_nodes(head_b) + 1) / 2)
			{
				while (iter <= index)
				{
					rb(head_b);
					iter++;
				}
			}
			else if (index >= (count_nodes(head_b) + 1) / 2)
			{
				while (iter < (count_nodes(head_b) - index) - 1)
				{
					rrb(head_b);
					iter++;
				}
			}
			pb(head_a, head_b);
			return ;
		}
		if ((*head_a)->next)
			*head_a = (*head_a)->next;
		else
			break ;
	}
	tail_to_head(head_a);
}
