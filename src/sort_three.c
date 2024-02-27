/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pclaus <pclaus@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 16:44:18 by pclaus            #+#    #+#             */
/*   Updated: 2024/02/27 16:59:51 by pclaus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void    sort_three(Node **head_a)
{
    if ((*head_a)->value > (*head_a)->next->value)
        sa(*head_a);
    if ((*head_a)->value > (*head_a)->next->next->value)
        rra(head_a);
}