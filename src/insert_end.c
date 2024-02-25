/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   insert_end.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pclaus <pclaus@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 20:33:10 by pclaus            #+#    #+#             */
/*   Updated: 2024/02/25 21:36:56 by pclaus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void    insert_end(Node **head, int data)
{
    Node *new_node = malloc(sizeof(Node));
    if (!new_node)
        return;
    new_node->value = data;
    new_node->prev = *head;
    new_node->next = NULL;
    if (new_node->prev != NULL && new_node->prev->next == NULL)
        new_node->prev->next = new_node;
    if (!*head)
        *head = new_node;
    else
    {
        (*head)->next = new_node;
        *head = new_node;
    }
}