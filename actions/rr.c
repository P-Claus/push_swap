/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rr.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pclaus <pclaus@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 22:19:20 by pclaus            #+#    #+#             */
/*   Updated: 2024/03/07 17:54:05 by pclaus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	rr(Node **head_a, Node **head_b)
{
	Node	*old_head;
	Node	*current;

	old_head = *head_a;
	(*head_a) = (*head_a)->next;
	current = *head_a;
	current->prev = NULL;
	while (current->next)
		current = current->next;
	current->next = old_head;
	old_head->prev = current;
	old_head->next = NULL;
	old_head = *head_b;
	(*head_b) = (*head_b)->next;
	current = *head_b;
	current->prev = NULL;
	while (current->next)
		current = current->next;
	current->next = old_head;
	old_head->prev = current;
	old_head->next = NULL;
	ft_printf("rr\n");
}
