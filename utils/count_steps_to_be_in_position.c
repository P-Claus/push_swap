/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count_steps_to_be_in_position.c                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pclaus <pclaus@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 17:07:52 by pclaus            #+#    #+#             */
/*   Updated: 2024/03/10 15:52:46 by pclaus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	count_steps_to_be_in_position(t_node **head_a, t_node **head_b)
{
	(void)*head_b;
	int count;

	count = 1;
	//	int	node_with_lowest_destination;

	// node_with_lowest_destination = 0;
	if (*head_a)
	{
		ft_printf("The value is: %d\n", (*head_a)->value);
		if ((*head_a)->next)
			ft_printf("The next pointer is: %p\n", (*head_a)->next);
		if ((*head_a)->prev)
			ft_printf("The prev pointer is: %p\n", (*head_a)->prev);
		(*head_a)->destination = check_destination(head_b, (*head_a)->value);
		ft_printf("The destination is: %d\n", (*head_a)->destination);
		ft_printf("-------------------------------------------------------\n");
		while ((*head_b)->next)
		{
			count++;
			if ((*head_b)->next)
				*head_b = (*head_b)->next;
		}
		tail_to_head(head_b);
		ft_printf("Count is: %d\n", count);
		while ((*head_a)->destination != count)
		{
			rb(head_b);
			(*head_a)->destination = check_destination(head_b,
					(*head_a)->value);
		}
		int new_destination = check_destination(head_b, (*head_a)->value);
		ft_printf("The new destination is: %d\n", new_destination);
		if (new_destination == count)
			pb(head_a, head_b);
		/*
		if ((*head_a)->next)
			*head_a = (*head_a)->next;
		else
			break ; */
	}
}