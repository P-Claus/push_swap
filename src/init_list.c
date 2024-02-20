/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pclaus <pclaus@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 21:17:40 by pclaus            #+#    #+#             */
/*   Updated: 2024/02/20 21:42:35 by pclaus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void    init_list()
{
    Node *head = (Node *)malloc(sizeof(Node));
    if (!head)
        return NULL;
    head->current_index = 0;
    head->next = NULL;
    head->prev = NULL;
}