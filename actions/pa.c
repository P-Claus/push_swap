/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pclaus <pclaus@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 14:52:15 by pclaus            #+#    #+#             */
/*   Updated: 2024/02/03 14:52:18 by pclaus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/actions.h"

void	pa(int *ptr_a, int *ptr_b)
{
	ft_printf("%d\n", *ptr_a);
	ft_printf("%d\n", *ptr_b);
	ft_printf("%d\n", *++ptr_a);
	ft_printf("%d\n", *++ptr_b);
	while (*ptr_a )
	{
		ft_printf("%d\n", *++ptr_a);
	}
	while (*ptr_b)
	{
		ft_printf("%d\n", *++ptr_b);
	}
}
