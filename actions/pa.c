/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pclaus <pclaus@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 09:26:24 by pclaus            #+#    #+#             */
/*   Updated: 2024/03/01 17:15:13 by pclaus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void    pa(Node **head_a, Node **head_b)
{
    /*
    Node    *top_b;
    Node    *new_node;

    if (*head_b == NULL)
        return;
    new_node = malloc(sizeof(Node));
    if (!new_node)
        return;
    top_b = *head_b;
    if ((*head_b)->next)
        *head_b = (*head_b)->next;
    if ((*head_b)->prev)
        (*head_b)->prev = NULL;
    new_node->prev = NULL;
    new_node->next = *head_a;
    new_node->value = top_b->value;
    if (*head_a)
        (*head_a)->prev = new_node;
    *head_a = new_node;
    free(top_b);
    */
    Node *top_b;

    if (*head_b == NULL)
        return;
    if ((*head_b)->prev == NULL && (*head_b)->next == NULL)
    {
        (*head_a)->prev = *head_b;
        (*head_b)->next = *head_a;
        *head_b = NULL;
    }
    else
    {
        top_b = *head_b;
        *head_b = (*head_b)->next;
        top_b->next = *head_a;
        (*head_a)->prev = top_b;
        *head_a = top_b;
    }
    ft_printf("pa\n");
}