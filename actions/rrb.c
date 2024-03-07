/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrb.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pclaus <pclaus@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 14:45:27 by pclaus            #+#    #+#             */
/*   Updated: 2024/03/07 18:01:22 by pclaus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	rrb(Node **head)
{
	Node	*old_tail;
	Node	*current;

	head_to_tail(head);
	old_tail = *head;
	*head = (*head)->prev;
	current = *head;
	current->next = NULL;
	while (current->prev != NULL)
		current = current->prev;
	current->prev = old_tail;
	old_tail->next = current;
	old_tail->prev = NULL;
	*head = old_tail;
	ft_printf("rrb\n");
}
