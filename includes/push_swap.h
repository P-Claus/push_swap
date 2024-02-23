/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pclaus <pclaus@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 18:22:57 by pclaus            #+#    #+#             */
/*   Updated: 2024/02/23 17:09:21 by pclaus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/includes/libft.h"
# include "./actions.h"

# include <stdarg.h>
# include <limits.h>

typedef	struct s_stack_node
{
	int	value;
	int	current_index;
	struct s_stack_node	*next;
	struct s_stack_node	*prev;
}						Node;

int	main(int argc, char **argv);
void    insert_beginning(Node **head, int data);
void	insert_end(Node **head, int data);
void	init_list(Node **head, int data);
void	print_list(Node *tail);
void	remove_all_nodes(Node **head);

/*	ERROR CHECKING	*/
int	check_for_errors(int argc, char **argv);
int	error_check_integer(char **argv);
int    error_check_duplicates(int argc, char **argv);
int    error_check_for_int(char **argv);

/*	MISCELLANEOUS FUNCTIONS	*/
long	ft_atoi_long(const char *str);
int		is_valid_int(char *str);

#endif
