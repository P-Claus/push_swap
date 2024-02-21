/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_list.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pclaus <pclaus@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 21:16:02 by pclaus            #+#    #+#             */
/*   Updated: 2024/02/21 21:15:11 by pclaus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void    print_list(Node *tail)
{
    Node *head = tail;
    while (head != NULL && head->prev != NULL)
        head = head->prev;
    Node *current = head;
    while (current != NULL)
    {
        printf("The value is: %d || The index is: %d\n", current->value, current->current_index);
        current = current->next;;
    }
}