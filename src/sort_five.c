/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_five.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pclaus <pclaus@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 21:45:01 by pclaus            #+#    #+#             */
/*   Updated: 2024/03/02 19:34:09 by pclaus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../includes/push_swap.h"

void    sort_five(Node **head_a, Node **head_b)
{
    int  destination;

    pb(head_a, head_b);
    pb(head_a, head_b);
    sort_three(head_a);
    if ((*head_b)->value > (*head_b)->next->value)
    {
        rb(head_b);
        pa(head_a, head_b);
    }
    else
        pa(head_a, head_b);
    print_list(*head_a, *head_b);
    destination = check_destination(head_a, (*head_a)->value);
    ft_printf("The destination is: %d\n", destination);
    if (destination == 1)
        sa(*head_a);
    if (destination == 2)
    {
        sa(*head_a);
        ra(head_a);
        sa(*head_a);
    }
    
    pa(head_a, head_b);
    
    print_list(*head_a, *head_b);
    destination = check_destination(head_a, (*head_a)->value);
    ft_printf("The destination is: %d\n", destination);
    
    if (destination == 1)
        sa(*head_a);
    if (destination == 2)
    {
        sa(*head_a);
        ra(head_a);
        sa(*head_a);
    }
    if (destination == 3)
    {
        rra(head_a);
        sa(*head_a);
        rra(head_a);
        sa(*head_a);
    }
    print_list(*head_a, *head_b);
    ft_printf("The lowest int is at position: %d\n", find_lowest_int(head_a));
    sort_five_final_sort(head_a);


}

