/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pclaus <pclaus@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 10:42:31 by pclaus            #+#    #+#             */
/*   Updated: 2024/02/23 18:21:00 by pclaus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	sa(Node *tail_a)
{
	int temp;
	
	Node *head_a = tail_a;
    while (head_a != NULL && head_a->prev != NULL)
	{
		head_a = head_a->prev;
	}
	temp = head_a->value;
	head_a->value = head_a->next->value;
	head_a->next->value = temp;
	ft_printf("sa\n");
}

