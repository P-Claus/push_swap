/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_list_with_info.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pclaus <pclaus@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 21:50:56 by pclaus            #+#    #+#             */
/*   Updated: 2024/03/05 21:37:33 by pclaus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void    print_list_with_info(Node *head_a, Node *head_b)
{
    Node *current_a = head_a;
    Node *current_b = head_b;
    ft_printf("a:   ");
    while ((current_a != NULL) && (current_a->value != 0))
    {
            ft_printf("V: %d | ", current_a->value);
            if (current_a->next)
                ft_printf("N: %p | ", current_a->next);
            if (current_a->prev)    
                ft_printf("P: %p | ", current_a->prev);
            current_a = current_a->next;
    }
    ft_printf("\n");
    ft_printf("b:   ");
    while ((current_b != NULL) && (current_b->value != 0))
    {
            ft_printf("V: %d | ", current_b->value);
            if (current_b->next)
                ft_printf("N: %p | ", current_b->next);
            if (current_b->prev)    
                ft_printf("P: %p | ", current_b->prev);
            current_b = current_b->next;
    }
    ft_printf("\n");
}