/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pclaus <pclaus@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 09:26:24 by pclaus            #+#    #+#             */
/*   Updated: 2024/03/02 15:06:56 by pclaus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void    pa(Node **head_a, Node **head_b)
{
    Node *top_b;

    if (*head_b == NULL)
        return;
    if ((*head_b)->prev == NULL && (*head_b)->next == NULL)
    {
        (*head_a)->prev = *head_b;
        (*head_b)->next = *head_a;
        *head_a = *head_b;
        *head_b = NULL;
    }
    else
    {
        top_b = *head_b;
        *head_b = (*head_b)->next;
        if ((*head_b)->next == NULL)
            (*head_b)->prev = NULL;
        top_b->next = *head_a;
        (*head_a)->prev = top_b;
        *head_a = top_b;
    }
    ft_printf("pa\n");
}