/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   insert_end.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pclaus <pclaus@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 20:33:10 by pclaus            #+#    #+#             */
/*   Updated: 2024/02/21 21:15:48 by pclaus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void    insert_end(Node **tail, int data)
{
    static int index;

    if (!index)
        index = 0;
    if (!*tail)
    {
        *tail = (Node *)malloc(sizeof(Node));
        if (!*tail)
            exit(1);
        (*tail)->value = data;
        (*tail)->current_index = 0;
        (*tail)->next = NULL;
        (*tail)->prev = NULL;
    }
    else
    {
        Node *new_node = malloc(sizeof(Node));
        if (!new_node)
            return;
        new_node->value = data;
        new_node->current_index = index;
        new_node->prev = *tail;
        new_node->next = NULL;
        (*tail)->next = new_node;
        *tail = new_node;
    }
    
    index++;
}