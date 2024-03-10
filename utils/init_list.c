/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pclaus <pclaus@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 21:17:40 by pclaus            #+#    #+#             */
/*   Updated: 2024/03/10 15:30:35 by pclaus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	init_list(t_node **head, int data)
{
	*head = (t_node *)malloc(sizeof(t_node));
	if (!*head)
		return ;
	(*head)->value = data;
	(*head)->next = NULL;
	(*head)->prev = NULL;
}
