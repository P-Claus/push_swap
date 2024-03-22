/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_if_list_is_sorted.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pclaus <pclaus@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 20:25:14 by pclaus            #+#    #+#             */
/*   Updated: 2024/03/22 09:24:09 by pclaus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	check_if_list_is_sorted(t_node **head)
{
	if (!(*head)->next)
		return (0);
	while ((*head)->next)
	{
		if ((*head)->value > (*head)->next->value)
			return (1);
		if ((*head)->value < (*head)->next->value)
			*head = (*head)->next;
		else
			return (0);
	}
	return (0);
}
