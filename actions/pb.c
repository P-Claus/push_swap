/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pclaus <pclaus@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 09:26:24 by pclaus            #+#    #+#             */
/*   Updated: 2024/02/26 22:17:22 by pclaus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void    pb(Node **head_a, Node **head_b)
{
    Node    *top_a;
    Node    *new_node;
    
    if (*head_a == NULL)
        return;
    new_node = malloc(sizeof(Node));
    if (!new_node)
        return;
    top_a = *head_a;
    *head_a = (*head_a)->next;
    (*head_a)->prev = NULL;
    new_node->prev = NULL;
    new_node->next = *head_b;
    new_node->value = top_a->value;
    (*head_b)->prev = new_node;
    *head_b = new_node;
    free(top_a);
    ft_printf("pb\n");
}