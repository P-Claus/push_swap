/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pclaus <pclaus@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 09:26:24 by pclaus            #+#    #+#             */
/*   Updated: 2024/02/24 14:54:00 by pclaus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void    pb(Node **head_a, Node **head_b)
{
    if (*head_a == NULL)
        return;
    insert_beginning(head_b, (*head_a)->value);
    remove_node(head_a);
    ft_printf("pb\n");
}