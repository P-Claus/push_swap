/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rra_and_increase_iter.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pclaus <pclaus@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 13:58:27 by pclaus            #+#    #+#             */
/*   Updated: 2024/03/21 13:59:23 by pclaus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void    rra_and_increase_iter(t_node **head_a, int *iter_a)
{
    rra(head_a);
    (*iter_a)++;
}