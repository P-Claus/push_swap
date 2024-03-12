/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count_steps_to_be_in_position.c                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pclaus <pclaus@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 17:07:52 by pclaus            #+#    #+#             */
/*   Updated: 2024/03/12 14:44:16 by pclaus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	count_steps_to_be_in_position(t_node **head_a, t_node **head_b)
{
	(void)*head_b;
	int count;

	count = 0;
	//	int	node_with_lowest_destination;

	// node_with_lowest_destination = 0;
	while ((*head_b))
	{
		count++;
		if ((*head_b)->next)
			*head_b = (*head_b)->next;
		else
			break ;
	}
	while (*head_a)
	{
		ft_printf("The value is: %d\n", (*head_a)->value);
		// if ((*head_a)->next)
		// ft_printf("The next pointer is: %p\n", (*head_a)->next);
		// if ((*head_a)->prev)
		// ft_printf("The prev pointer is: %p\n", (*head_a)->prev);
		(*head_a)->destination = check_destination(head_b, (*head_a)->value);
		// ft_printf("The destination is: %d\n", (*head_a)->destination);
		// ft_printf("Above median is: %d\n", (*head_a)->above_median);

		// ft_printf("Count is: %d\n", count);
		if ((*head_a)->destination != count)
		{
			rb(head_b);
			(*head_a)->destination = check_destination(head_b,
					(*head_a)->value);
		}

		// int new_destination = check_destination(head_b, (*head_a)->value);
		// ft_printf("The new destination is: %d\n", new_destination);
		// if (new_destination == count)
		// pb(head_a, head_b);
		update_median(head_b, count);
		ft_printf("-------------------------------------------------------\n");

		if ((*head_a)->next)
			*head_a = (*head_a)->next;
		else
			break ;
	}
	ft_printf("value 1 is: %d, value 2 is: %d, value 3 is: %d\n",
		(*head_b)->value, (*head_b)->next->value, (*head_b)->next->next->value);
}