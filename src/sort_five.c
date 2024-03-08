/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_five.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pclaus <pclaus@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 21:45:01 by pclaus            #+#    #+#             */
/*   Updated: 2024/03/08 17:59:17 by pclaus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	sort_five(t_node **head_a, t_node **head_b)
{
	int	destination;

	pb(head_a, head_b);
	pb(head_a, head_b);
	sort_three(head_a);
	destination = check_destination(head_a, (*head_b)->value);
	if (destination == 1)
	{
		pa(head_a, head_b);
		sa(*head_a);
	}
	else if (destination == 2)
	{
		rra(head_a);
		pa(head_a, head_b);
	}
	else if (destination == 0 || destination == 3)
		pa(head_a, head_b);
	destination = check_destination(head_a, (*head_b)->value);
	if (destination == 1)
	{
		ra(head_a);
		pa(head_a, head_b);
	}
	else if (destination == 2)
	{
		ra(head_a);
		ra(head_a);
		pa(head_a, head_b);
	}
	else if (destination == 3)
	{
		rra(head_a);
		pa(head_a, head_b);
	}
	else if (destination == 0 || destination == 4)
		pa(head_a, head_b);
	sort_five_final_sort(head_a);
}
