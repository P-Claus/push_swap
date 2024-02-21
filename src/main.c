/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pclaus <pclaus@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 16:06:15 by pclaus            #+#    #+#             */
/*   Updated: 2024/02/21 16:14:26 by pclaus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int main(int argc, char **argv)
{
   Node *a;
   Node *b;

   a = NULL;
   b = NULL;
   if (argc == 1 || ((argc == 2) && !(argv[2][0])))
   {
      ft_printf("You need to enter arguments\n");
      return (1);
   }
   else
   {
      //init_list(&a, ft_atoi(argv[1]));
      insert_beginning(&a, ft_atoi(argv[1]));
      insert_beginning(&a, ft_atoi(argv[2]));
      insert_beginning(&a, ft_atoi(argv[3]));
   }
   ft_printf("Node a has a value of: %d\n", a->value);
   print_list(a);

   remove_all_nodes(&a);
   ft_printf("%p\n", a);
   ft_printf("%p\n", b);
}