/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pclaus <pclaus@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 09:26:24 by pclaus            #+#    #+#             */
/*   Updated: 2024/03/15 21:33:52 by pclaus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	pb(t_node **head_a, t_node **head_b)
{
	t_node	*top_a;

	if (*head_a == NULL)
		return ;
	if ((*head_a)->prev == NULL && (*head_a)->next == NULL)
	{
		(*head_b)->prev = *head_a;
		(*head_a)->next = *head_b;
		*head_b = *head_a;
		*head_a = NULL;
	}
	else
	{
		top_a = *head_a;
		*head_a = (*head_a)->next;
		(*head_a)->prev = NULL;
		top_a->next = *head_b;
		top_a->prev = NULL;
		if (*head_b)
			(*head_b)->prev = top_a;
		*head_b = top_a;
	}
	ft_printf("pb\n");
}
