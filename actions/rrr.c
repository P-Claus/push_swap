/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrr.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pclaus <pclaus@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 15:27:23 by pclaus            #+#    #+#             */
/*   Updated: 2024/02/27 15:54:08 by pclaus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void    rrr(Node **head_a, Node **head_b)
{
    Node    *old_tail;
    Node    *current;
    
    head_to_tail(head_a);
    old_tail = *head_a;
    *head_a = (*head_a)->prev;
    current = *head_a;
    current->next = NULL;
    tail_to_head(&current);
    current->prev = old_tail;
    old_tail->next = current;
    old_tail->prev = NULL;
    *head_a = old_tail;
    head_to_tail(head_b);
    old_tail = *head_b;
    *head_b = (*head_b)->prev;
    current = *head_b;
    current->next = NULL;
    tail_to_head(&current);
    current->prev = old_tail;
    old_tail->next = current;
    old_tail->prev = NULL;
    *head_b = old_tail;
    ft_printf("rrr\n");
}
