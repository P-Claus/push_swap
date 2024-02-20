/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pclaus <pclaus@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 20:09:15 by pclaus            #+#    #+#             */
/*   Updated: 2024/02/20 17:47:21 by pclaus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/includes/libft.h"
# include "./actions.h"

# include <stdarg.h>

typedef	struct s_stack_node
{
	int	value;
	int	current_index;
	struct s_stack_node	*next;
	struct s_stack_node	*prev;
}						Node;


#endif
