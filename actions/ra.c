/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ra.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pclaus <pclaus@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 15:02:56 by pclaus            #+#    #+#             */
/*   Updated: 2024/03/08 20:52:40 by pclaus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ra(t_node **head)
{
	t_node	*old_head;
	t_node	*current;

	old_head = *head;
	*head = (*head)->next;
	current = *head;
	current->prev = NULL;
	while (current->next != NULL)
		current = current->next;
	current->next = old_head;
	old_head->next = NULL;
	old_head->prev = current;
	ft_printf("ra\n");
}
