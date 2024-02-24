/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   insert_beginning.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pclaus <pclaus@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 21:29:28 by pclaus            #+#    #+#             */
/*   Updated: 2024/02/24 09:34:12 by pclaus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void    insert_beginning(Node **head, int data)
{
    if (*head == NULL)
    {
        *head = (Node *)malloc(sizeof(Node));
        if (!head)
            exit(1);
        (*head)->value = data;
        (*head)->next = NULL;
        (*head)->prev = NULL;
    }
    else
    {
        Node *new_node = malloc(sizeof(Node));
        if (!new_node)
            return;
        new_node->value = data;
        new_node->prev = NULL;
        new_node->next = *head;
        (*head)->prev = new_node;
        *head = new_node;
    }
}