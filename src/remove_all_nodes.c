/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   remove_all_nodes.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pclaus <pclaus@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 16:08:58 by pclaus            #+#    #+#             */
/*   Updated: 2024/02/21 21:18:30 by pclaus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void remove_all_nodes(Node **tail)
{
    if (*tail == NULL) {
        return; // List is already empty
    }

    Node *head = *tail;
    while (head != NULL && head->prev != NULL)
        head = head->prev;

    Node *current = head;
    Node *nextNode;

    while (current != NULL) {
        nextNode = current->next; // Store next node before freeing current node
        free(current);
        current = nextNode; // Move to the next node
    }

    *tail = NULL; // Update head pointer to indicate empty list
}
