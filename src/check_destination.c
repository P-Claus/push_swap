/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_destination.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pclaus <pclaus@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 17:35:45 by pclaus            #+#    #+#             */
/*   Updated: 2024/03/05 21:26:57 by pclaus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int    check_destination(Node **head, int new_value)
{
    int  count;
    Node    *old_head;

    count = 0;
    old_head = *head;
    while ((*head)->next && new_value < (*head)->value)
    {
        count++;
        if ((*head)->next && new_value > (*head)->next->value)
            break;
        *head = (*head)->next;
    }
    *head = old_head;
    while ((*head)->next && new_value > (*head)->value)
    {
        count++;
        if ((*head)->next && new_value < (*head)->next->value)
            break;
        *head = (*head)->next;
    }
    *head = old_head;
    return (count);
}
