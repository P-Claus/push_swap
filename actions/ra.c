/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ra.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pclaus <pclaus@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 15:02:56 by pclaus            #+#    #+#             */
/*   Updated: 2024/02/24 21:12:53 by pclaus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void    ra(Node **head)
{
    Node    *old_head;
    Node    *current;

    old_head = *head;
    *head = (*head)->next;
    current = *head;
    while (current->next != NULL)
        current = current->next;
    current->next = old_head;
    old_head->next = NULL;
    old_head->prev = current;

}