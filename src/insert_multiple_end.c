/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   insert_multiple_end.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pclaus <pclaus@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 16:18:32 by pclaus            #+#    #+#             */
/*   Updated: 2024/02/27 16:32:25 by pclaus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void    insert_multiple_end(char **argv, Node **head)
{
    int count;

    count = 1;
    while (argv[count])
    {
        insert_end(head, ft_atoi(argv[count]));
        count++;
    }
    tail_to_head(head);
}