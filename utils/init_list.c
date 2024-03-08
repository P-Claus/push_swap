/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pclaus <pclaus@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 21:17:40 by pclaus            #+#    #+#             */
/*   Updated: 2024/03/08 20:50:56 by pclaus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	init_list(t_node **head, int data)
{
	*head = (t_node *)malloc(sizeof(t_node));
	if (!*head)
		return ;
	(*head)->value = data;
	(*head)->current_index = 0;
	(*head)->next = NULL;
	(*head)->prev = NULL;
}
