/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_destination.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pclaus <pclaus@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 17:35:45 by pclaus            #+#    #+#             */
/*   Updated: 2024/03/06 22:22:42 by pclaus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int    check_destination(Node **head, int new_value)
{
    int  count;
    Node    *old_head;
    int lowest_int;

    count = 0;
    old_head = *head;
    lowest_int = return_lowest_int(head);
    //ft_printf("The lowest int is: %d\n", lowest_int);
    while ((*head))
    {
        if (new_value > (*head)->value)
            count++;
        else if (new_value < (*head)->value && new_value < lowest_int && (*head)->value != lowest_int)
            count++;
        if ((*head)->value == lowest_int && new_value < (*head)->value)
            break;
        if ((*head)->prev && lowest_int == (*head)->value && new_value > lowest_int && new_value > (*head)->prev->value)
            break;
        if ((*head)->next)
            *head = (*head)->next;
        else
            break;
    }
    *head = old_head;
    return (count);
}
