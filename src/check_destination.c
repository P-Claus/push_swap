/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_destination.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pclaus <pclaus@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 17:35:45 by pclaus            #+#    #+#             */
/*   Updated: 2024/03/02 14:12:38 by pclaus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int    check_destination(Node **head)
{
    int  count;
    Node    *old_head;

    count = 0;
    old_head = *head;
    while (old_head->value > (*head)->next->value)
    {
        count++;
        if ((*head)->next)
            *head = (*head)->next;
        if (!(*head)->next)
            break;
    }
    *head = old_head;
    return (count);
}