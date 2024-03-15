/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_destination_reverse.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pclaus <pclaus@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 17:17:51 by pclaus            #+#    #+#             */
/*   Updated: 2024/03/15 20:56:27 by pclaus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	check_destination_reverse(t_node **head, int new_value)
{
	int		count;
	t_node	*old_head;
	int		highest_int;

	count = 0;
	old_head = *head;
	highest_int = return_highest_int(head);
	ft_printf("The highest int is: %d\n", highest_int);
	while ((*head))
	{
		if ((*head)->value == highest_int && new_value > (*head)->value)
			break ;
		if ((*head)->prev && new_value < (*head)->prev->value
			&& new_value > (*head)->value)
			break ;
		if ((*head)->prev && (*head)->value == highest_int
			&& new_value < (*head)->value && new_value < (*head)->prev->value)
			break ;
		count++;
		if ((*head)->next)
			*head = (*head)->next;
		else
			break ;
	}
	*head = old_head;
	return (count);
}
