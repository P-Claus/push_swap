/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_a_below_median_to_send_nodes.c              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pclaus <pclaus@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 14:23:42 by pclaus            #+#    #+#             */
/*   Updated: 2024/03/21 15:45:39 by pclaus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void    rotate_a_below_median_to_send_nodes(t_function_params fa, t_node **head_a, t_node **head_b)
{
    while (fa.iter_a < fa.index_a)
				{
					tail_to_head(head_a);
					if (fa.iter_b <= fa.index_b && *fa.index_b < (count_nodes(head_b) + 1)
						/ 2)
						rr_and_increase_iter(head_a, head_b, fa.iter_a, fa.iter_b);
					else
						ra_and_increase_iter(head_a, fa.iter_a);
				}
}