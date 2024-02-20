/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   insert_beginning.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pclaus <pclaus@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 21:29:28 by pclaus            #+#    #+#             */
/*   Updated: 2024/02/20 21:51:51 by pclaus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void    insert_beginning(Node **head, int data)
{
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