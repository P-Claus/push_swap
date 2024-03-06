/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rra.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pclaus <pclaus@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 14:15:25 by pclaus            #+#    #+#             */
/*   Updated: 2024/03/05 21:47:06 by pclaus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void    rra(Node **head)
{
    Node    *old_tail;
    Node    *current;

    while ((*head)->next)
        *head = (*head)->next;
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
    ft_printf("rra\n");
}