/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   insert_end.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pclaus <pclaus@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 20:33:10 by pclaus            #+#    #+#             */
/*   Updated: 2024/02/23 21:14:16 by pclaus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void    insert_end(Node **head, int data)
{
    static int index;

    if (!index)
        index = 0;
    if (*head == NULL)
    {
        *head = (Node *)malloc(sizeof(Node));
        if (!*head)
            exit(1);
        (*head)->value = data;
        (*head)->current_index = 0;
        (*head)->next = NULL;
        (*head)->prev = NULL;
    }
    else
    {
        Node *new_node = malloc(sizeof(Node));
        if (!new_node)
            return;
        new_node->value = data;
        new_node->current_index = index;
        new_node->prev = *head;
        new_node->next = NULL;
        (*head)->next = new_node;
        *head = new_node;
    }
   index++;
}