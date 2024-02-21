/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   insert_beginning.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pclaus <pclaus@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 21:29:28 by pclaus            #+#    #+#             */
/*   Updated: 2024/02/21 16:03:52 by pclaus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void    insert_beginning(Node **head, int data)
{
    if (!head)
    {
        *head = (Node *)malloc(sizeof(Node));
        if (!head)
            exit(1);
        (*head)->value = data;
        (*head)->current_index = 0;
        (*head)->next = NULL;
        (*head)->prev = NULL;
    }
    Node *new_node = malloc(sizeof(Node));
    if (!new_node)
        exit(EXIT_FAILURE);

    new_node->value = data;
    new_node->prev = NULL;
    new_node->next = *head;
    if (*head != NULL)
    {
        (*head)->prev = new_node;
    }
    *head = new_node;
}