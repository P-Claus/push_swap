/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pclaus <pclaus@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 16:44:18 by pclaus            #+#    #+#             */
/*   Updated: 2024/02/28 13:18:56 by pclaus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void    sort_three(Node **head)
{
    if ((*head)->value < (*head)->next->value && (*head)->next->next->value > (*head)->next->value)
        sa(*head);
    if ((*head)->value > (*head)->next->value && (*head)->next->next->value > (*head)->next->value)
        sa(*head);
}