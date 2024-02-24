/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   insert_end.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pclaus <pclaus@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 20:33:10 by pclaus            #+#    #+#             */
/*   Updated: 2024/02/24 09:13:00 by pclaus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void    insert_end(Node **head, int data)
{
    if (*head == NULL)
    {
        *head = (Node *)malloc(sizeof(Node));
        if (!*head)
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
        new_node->prev = *head;
        new_node->next = NULL;
        (*head)->next = new_node;
        *head = new_node;
    }
}