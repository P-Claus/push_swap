/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_many.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pclaus <pclaus@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 16:52:57 by pclaus            #+#    #+#             */
/*   Updated: 2024/03/14 19:07:29 by pclaus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	sort_many(t_node **head_a, t_node **head_b)
{
	int	steps;

	pb(head_a, head_b);
	pb(head_a, head_b);
	pb(head_a, head_b);
	sort_three(head_b);
	steps = count_steps_to_be_in_position(head_a, head_b);
	ft_printf("The lowest amount of steps is: %d\n", steps);
}
