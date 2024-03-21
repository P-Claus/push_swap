/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_and_increase_iter.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pclaus <pclaus@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 13:23:10 by pclaus            #+#    #+#             */
/*   Updated: 2024/03/21 13:32:59 by pclaus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void    rr_and_increase_iter(t_node **head_a, t_node **head_b, int *iter_a, int*iter_b)
{
    rr(head_a, head_b);
    (*iter_a)++;
    (*iter_b)++;
}