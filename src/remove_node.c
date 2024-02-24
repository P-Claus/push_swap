/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   remove_node.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pclaus <pclaus@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 09:37:18 by pclaus            #+#    #+#             */
/*   Updated: 2024/02/24 09:49:34 by pclaus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void    remove_node(Node **head)
{
    Node *current;
    Node *next_node;

    current = *head;
    if (head == NULL)
        return;
    next_node = current->next;
    free(current);
    *head = next_node;    
}