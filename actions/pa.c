/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pclaus <pclaus@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 09:26:24 by pclaus            #+#    #+#             */
/*   Updated: 2024/02/26 22:09:20 by pclaus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void    pa(Node **head_a, Node **head_b)
{
    Node    *top_b;
    Node    *new_node;

    if (*head_b == NULL)
        return;
    new_node = malloc(sizeof(Node));
    if (!new_node)
        return;
    top_b = *head_b;
    *head_b = (*head_b)->next;
    (*head_b)->prev = NULL;
    new_node->prev = NULL;
    new_node->next = *head_a;
    new_node->value = top_b->value;
    (*head_a)->prev = new_node;
    *head_a = new_node;
    free(top_b);
    ft_printf("pa\n");
}