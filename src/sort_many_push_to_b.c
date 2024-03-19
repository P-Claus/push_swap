/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_many_push_to_b.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pclaus <pclaus@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 19:10:01 by pclaus            #+#    #+#             */
/*   Updated: 2024/03/19 15:19:56 by pclaus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	sort_many_push_to_b(t_node **head_a, t_node **head_b,
		int cheapest_steps_to_push)
{
	int	iter;
	int	index_a;
	int	index_b;

	iter = 0;
	while ((*head_a))
	{
		index_a = (*head_a)->index;
		index_b = (*head_a)->destination - 1;
		// ft_printf("------------------------------------------------\n");
		// ft_printf("The value is: %d\n", (*head_a)->value);
		// ft_printf("The destination is: %d\n", (*head_a)->destination);
		// ft_printf("The index of a is: %d\n", (*head_a)->index);
		// ft_printf("The cheapest is: %d\n", (*head_a)->cheapest_to_push);
		// ft_printf("Above median is: %d\n", (*head_a)->above_median);
		// print_list(*head_a, *head_b);
		// ft_printf("-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+\n");
		if ((*head_a)->cheapest_to_push == cheapest_steps_to_push)
		{
			// rotate bot ha and b to  save actions
			/*
			while (index_a != 0 && (*head_a)->destination != 0)
			{
				if ((*head_a)->above_median == 0
					&& (*head_b)->above_median == 0)
					rr(head_a, head_b);
				if ((*head_a)->above_median == 1
					&& (*head_b)->above_median == 1)
					rrr(head_b, head_b);
			} */
			// rotate a until the node is at index 0
			if ((*head_a)->above_median == 0)
			{
				while (iter < index_a)
				{
					tail_to_head(head_a);
					// print_list(*head_a, *head_b);
					ra(head_a);
					iter++;
				}
			}
			else if ((*head_a)->above_median == 1)
			{
				index_a = count_nodes(head_a) - (*head_a)->index;
				while (iter < index_a)
				{
					tail_to_head(head_a);
					// print_list(*head_a, *head_b);
					rra(head_a);
					iter++;
				}
			}
			iter = 0;
			// rotate b so it can be pushed in the correct position
			if (index_b < (count_nodes(head_b) + 1) / 2)
			{
				while (iter <= index_b)
				{
					rb(head_b);
					iter++;
				}
			}
			else if (index_b >= (count_nodes(head_b) + 1) / 2)
			{
				while (iter < (count_nodes(head_b) - index_b) - 1)
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
