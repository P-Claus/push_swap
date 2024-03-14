/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count_steps_to_be_in_position.c                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pclaus <pclaus@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 17:07:52 by pclaus            #+#    #+#             */
/*   Updated: 2024/03/14 17:18:42 by pclaus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	count_steps_to_be_in_position(t_node **head_a, t_node **head_b)
{
	int	count_a;
	int	count_b;
	int	iter;
	int	cheapest_steps_to_push;

	// int	new_destination;
	count_a = count_nodes_and_update_index(head_a);
	count_b = count_nodes_and_update_index(head_b);
	ft_printf("The amount of nodes in a is: %d\n", count_a);
	ft_printf("The amount of nodes in b is: %d\n", count_b);
	cheapest_steps_to_push = INT_MAX;
	ft_printf("-------------------------------------------------------\n");
	print_list(*head_a, *head_b);
	ft_printf("-------------------------------------------------------\n");
	update_median(head_a, count_a);
	update_median(head_b, count_b);
	while (*head_a)
	{
		iter = 0;
		ft_printf("The value is: %d\n", (*head_a)->value);
		(*head_a)->destination = check_destination(head_b, (*head_a)->value);
		ft_printf("The destination is: %d\n", (*head_a)->destination);
		ft_printf("The index is: %d\n", (*head_a)->index);
		// get the above_median value of the destination in b
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
		// ft_printf("Above median is: %d\n", (*head_a)->above_median);
		// Need to find a way to find the above_median value of the destination of where a needs to go
		if ((*head_b)->above_median == 0)
			(*head_a)->cheapest_to_push = (*head_a)->destination + 1;
		if ((*head_b)->above_median == 1)
			(*head_a)->cheapest_to_push = count_b - (*head_a)->destination + 1;
		/*
			while ((*head_a)->destination != count)
			{
				rb(head_b);
				(*head_a)->destination = check_destination(head_b,
						(*head_a)->value);
				ft_printf("The destination is: %d\n", (*head_a)->destination);
			}
			new_destination = check_destination(head_b, (*head_a)->value);
			ft_printf("The new destination is: %d\n", new_destination);
			if (new_destination == count)
				pb(head_a, head_b);
			ft_printf("Above median is: %d\n", (*head_b)->above_median);
	*/
		if ((*head_a)->above_median == 0)
		{
			(*head_a)->cheapest_to_push += (*head_a)->index;
		}
		else if ((*head_a)->above_median == 1)
		{
			(*head_a)->cheapest_to_push += count_a - (*head_a)->index;
		}
		tail_to_head(head_b);
		ft_printf("The value of head_b is: %d\n", (*head_b)->value);
		ft_printf("The cheapest_to_push is: %d\n", (*head_a)->cheapest_to_push);
		if ((*head_a)->cheapest_to_push < cheapest_steps_to_push)
			cheapest_steps_to_push = (*head_a)->cheapest_to_push;
		ft_printf("The overall cheapest to push variable is: %d\n",
			cheapest_steps_to_push);
		ft_printf("-------------------------------------------------------\n");
		tail_to_head(head_b);
		if ((*head_a)->next)
			*head_a = (*head_a)->next;
		else
			break ;
	}
}
