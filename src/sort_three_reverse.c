/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three_reverse.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pclaus <pclaus@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 17:38:41 by pclaus            #+#    #+#             */
/*   Updated: 2024/03/15 17:40:59 by pclaus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	sort_three_reverse(t_node **head)
{
	if ((*head)->value > (*head)->next->value
		&& (*head)->next->value > (*head)->next->next->value)
		return ;
	if ((*head)->value > (*head)->next->value
		&& (*head)->next->next->value > (*head)->next->value
		&& (*head)->value < (*head)->next->next->value)
		rra(head);
	if ((*head)->value > (*head)->next->value
		&& (*head)->next->value < (*head)->next->next->value
		&& (*head)->next->next->value < (*head)->value)
		sa(*head);
	if ((*head)->value < (*head)->next->value
		&& (*head)->next->value > (*head)->next->next->value
		&& (*head)->next->next->value > (*head)->value)
		ra(head);
	if ((*head)->value < (*head)->next->value
		&& (*head)->next->value < (*head)->next->next->value
		&& (*head)->next->next->value > (*head)->value)
		ra(head);
	if ((*head)->value < (*head)->next->value
		&& (*head)->next->value > (*head)->next->next->value
		&& (*head)->next->next->value < (*head)->value)
		sa(*head);
}