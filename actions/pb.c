/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pclaus <pclaus@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 09:26:24 by pclaus            #+#    #+#             */
/*   Updated: 2024/03/07 17:43:59 by pclaus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	pb(Node **head_a, Node **head_b)
{
	Node	*top_a;

	if (*head_a == NULL)
		return ;
	if ((*head_a)->prev == NULL && (*head_a)->next == NULL)
	{
		(*head_b)->prev = *head_b;
		(*head_a)->next = *head_b;
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
		(*head_b)->prev = NULL;
	}
	ft_printf("pb\n");
}
