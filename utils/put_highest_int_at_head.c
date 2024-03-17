/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_highest_int_at_head.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pclaus <pclaus@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 20:58:48 by pclaus            #+#    #+#             */
/*   Updated: 2024/03/17 21:05:12 by pclaus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	put_highest_int_at_head(t_node **head)
{
	update_median(head, count_nodes(head));
	while ((*head))
	{
		ft_printf("The value is: %d\n", (*head)->value);
		ft_printf("Above median is: %d\n", (*head)->above_median);
		if ((*head)->next)
			*head = (*head)->next;
		else
			break ;
	}
	tail_to_head(head);
}