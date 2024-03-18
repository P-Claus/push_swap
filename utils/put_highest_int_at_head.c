/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_highest_int_at_head.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pclaus <pclaus@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 20:58:48 by pclaus            #+#    #+#             */
/*   Updated: 2024/03/18 22:13:06 by pclaus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	put_highest_int_at_head(t_node **head)
{
	int highest_int;

	highest_int = return_highest_int(head);
	update_median(head, count_nodes(head));
	while ((*head)->value != highest_int)
	{
		// if ((*head)->above_median == 0)
		rb(head);
		// else if ((*head)->above_median == 1)
		// rrb(head);
		ft_printf("The value is: %d\n", (*head)->value);
	}
	tail_to_head(head);
}