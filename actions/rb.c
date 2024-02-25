/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pclaus <pclaus@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 22:01:47 by pclaus            #+#    #+#             */
/*   Updated: 2024/02/25 22:06:20 by pclaus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void    rb(Node **head)
{
    Node    *old_head;
    Node    *current;

    old_head = *head; //old head points to the same node as head
    *head = (*head)->next; // advance the head to the second node
    current = *head; // set current to the second node, where head is pointing to now
    current->prev = NULL; // set the prev pointer of the second node to null because it'll become the new first
    while (current->next != NULL)
        current = current->next; // go to the last node in the list
    current->next = old_head; // set the next pointer of the last (current) node to point to the opld head so the original first
    old_head->next = NULL;
    old_head->prev = current;
    ft_printf("rb\n");
}