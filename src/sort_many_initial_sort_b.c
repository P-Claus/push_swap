/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_many_initial_sort_b.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pclaus <pclaus@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 17:01:23 by pclaus            #+#    #+#             */
/*   Updated: 2024/03/09 17:03:47 by pclaus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	sort_many_initial_sort_b(t_node **head)
{
	if ((*head)->value < (*head)->next->value)
		return ;
	else
		sb(*head);
}