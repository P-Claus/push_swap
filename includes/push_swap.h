/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pclaus <pclaus@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 18:22:57 by pclaus            #+#    #+#             */
/*   Updated: 2024/03/02 19:19:16 by pclaus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/includes/libft.h"

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
void    insert_multiple_end(char **argv, Node **head);
void	init_list(Node **head, int data);
void	print_list(Node *head_a, Node *head_b);
void    print_list_with_info(Node *head_a, Node *head_b, int argc);
void	remove_all_nodes(Node **head);
void	remove_node(Node **head);

/*	ERROR CHECKING	*/
int	check_for_errors(int argc, char **argv);
int	error_check_integer(char **argv);
int    error_check_duplicates(int argc, char **argv);
int    error_check_for_int(char **argv);

/*	ACTIONS	*/
void	sa(Node *head_a);
void	sb(Node *head_b);
void	ss(Node *head_a, Node *head_b);
void	pa(Node **head_a, Node **head_b);
void	pb(Node **head_a, Node **head_b);
void	ra(Node **head);
void	rb(Node **head);
void	rr(Node **head_a, Node **head_b);
void    rra(Node **head);
void    rrb(Node **head);
void    rrr(Node **head_a, Node **head_b);

/*	ALGORITHM FUNCTIONS	*/
void	sort_three(Node **head);
void	sort_five(Node **head_a, Node **head_b);
void    sort_five_final_sort(Node **head);



/*	MISCELLANEOUS FUNCTIONS	*/
long	ft_atoi_long(const char *str);
int		is_valid_int(char *str);
void	tail_to_head(Node **tail);
void	head_to_tail(Node **head);
int    check_destination(Node **head, int new_value);
int	find_lowest_int(Node **head_a);

#endif
