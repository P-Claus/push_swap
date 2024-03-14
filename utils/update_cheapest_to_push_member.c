/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   update_cheapest_to_push_member.c                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pclaus <pclaus@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 18:17:46 by pclaus            #+#    #+#             */
/*   Updated: 2024/03/14 18:19:30 by pclaus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	update_cheapest_to_push_member(t_node **head_a, t_node **head_b,
		int count_a, int count_b)
{
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
}