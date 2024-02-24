/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_list.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pclaus <pclaus@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 21:16:02 by pclaus            #+#    #+#             */
/*   Updated: 2024/02/24 14:59:45 by pclaus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void    print_list(Node *head_a, Node *head_b, int argc)
{
    (void)argc;
    
    Node *current_a = head_a;
    Node *current_b = head_b;
    while ((current_a != NULL) && (current_a->value != 0))
    {
        if (current_a != NULL && current_a->value != 0)
        {
            ft_printf("%d   ", current_a->value);
            current_a = current_a->next;
        }
    }
    ft_printf("\n");
    while ((current_b != NULL) && (current_b->value != 0))
    {
        if (current_b != NULL && current_b->value != 0)
        {
            ft_printf("%d   ", current_b->value);
            current_b = current_b->next;
        }
    }
    ft_printf("\n");
}