/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   insert_end.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pclaus <pclaus@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 20:33:10 by pclaus            #+#    #+#             */
/*   Updated: 2024/02/24 21:34:31 by pclaus           ###   ########.fr       */
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
    if (!*head)
        *head = new_node;
    else
    {
        (*head)->next = new_node;
        *head = new_node;
    }        
    ft_printf("The head is: %d\n", (*head)->prev);
}