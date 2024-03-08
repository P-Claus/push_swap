/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pclaus <pclaus@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 18:22:57 by pclaus            #+#    #+#             */
/*   Updated: 2024/03/08 20:50:09 by pclaus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/includes/libft.h"
# include <limits.h>
# include <stdarg.h>

typedef struct s_stack_node
{
	int					value;
	int					current_index;
	struct s_stack_node	*next;
	struct s_stack_node	*prev;
}						t_node;

int						main(int argc, char **argv);
void					insert_beginning(t_node **head, int data);
void					insert_end(t_node **head, int data);
void					insert_multiple_end(char **argv, t_node **head);
void					init_list(t_node **head, int data);
void					print_list(t_node *head_a, t_node *head_b);
void					print_list_with_info(t_node *head_a, t_node *head_b);
void					remove_all_nodes(t_node **head);
void					remove_node(t_node **head);

/*	ERROR CHECKING	*/
int						check_for_errors(char **argv);
int						error_check_integer(char **argv);
int						error_check_duplicates(char **argv);
int						error_check_for_int(char **argv);

/*	ACTIONS	*/
void					sa(t_node *head_a);
void					sb(t_node *head_b);
void					ss(t_node *head_a, t_node *head_b);
void					pa(t_node **head_a, t_node **head_b);
void					pb(t_node **head_a, t_node **head_b);
void					ra(t_node **head);
void					rb(t_node **head);
void					rr(t_node **head_a, t_node **head_b);
void					rra(t_node **head);
void					rrb(t_node **head);
void					rrr(t_node **head_a, t_node **head_b);

/*	ALGORITHM FUNCTIONS	*/
void					sort_three(t_node **head);
void					sort_five(t_node **head_a, t_node **head_b);
void					sort_five_final_sort(t_node **head);

/*	MISCELLANEOUS FUNCTIONS	*/
void					tail_to_head(t_node **tail);
void					head_to_tail(t_node **head);
int						is_valid_int(char *str);
int						check_destination(t_node **head, int new_value);
int						find_lowest_int(t_node **head_a);
int						return_lowest_int(t_node **head_a);
long					ft_atoi_long(const char *str);

#endif
