/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_list.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pclaus <pclaus@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 21:16:02 by pclaus            #+#    #+#             */
/*   Updated: 2024/02/23 21:15:41 by pclaus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void    print_list(Node *head_a, Node *head_b, int argc)
{
    int count;

    count = 0;
    
    Node *current_a = head_a;
    Node *current_b = head_b;
    ft_printf("\n_ _\n\n");
    while (count < argc - 1)
    {
        ft_printf("%d", current_a->value);
        current_a = current_a->next;
        if (current_b != NULL && current_b->value != 0)
        {
            ft_printf("%d\n", current_b->value);
            current_b = current_b->next;
        }
        else
            ft_printf("\n");
        count++;
    }
    ft_printf("_ _\n");
    ft_printf("a b\n");
}