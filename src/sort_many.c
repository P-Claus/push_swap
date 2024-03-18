/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_many.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pclaus <pclaus@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 16:52:57 by pclaus            #+#    #+#             */
/*   Updated: 2024/03/18 22:45:33 by pclaus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	sort_many(t_node **head_a, t_node **head_b)
{
	int	steps;

	pb(head_a, head_b);
	pb(head_a, head_b);
	pb(head_a, head_b);
	sort_three_reverse(head_b);
	while (*head_a)
	{
		steps = count_steps_to_be_in_position(head_a, head_b);
		sort_many_push_to_b(head_a, head_b, steps);
	}
	put_highest_int_at_head(head_b);
	while ((*head_b))
	{
		pa(head_a, head_b);
	}
}
