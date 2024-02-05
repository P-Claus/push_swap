/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pclaus <pclaus@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 20:09:15 by pclaus            #+#    #+#             */
/*   Updated: 2024/02/05 20:09:18 by pclaus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#infdef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/includes/libft.h"
# include "./actions.h"

typedef	struct s_stack_node
{
	int	value;
	int	current_index;
	struct s_stack_node	*next;
	struct s_stack_node	*prev;
}	t_stack_node;


#endif
