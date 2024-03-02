/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pclaus <pclaus@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 10:43:31 by pclaus            #+#    #+#             */
/*   Updated: 2024/03/02 14:13:09 by pclaus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int main(int argc, char **argv)
{
   Node *a;
   Node *b;

   a = NULL;
   b = NULL;
   if (argc == 1)
      return (1);
   if (check_for_errors(argc, argv))
      return (1);
   else
      insert_multiple_end(argv, &a);
   if (argc == 4)
      sort_three(&a);
   if (argc == 6)
      sort_five(&a, &b);
   print_list(a, b);
   print_list_with_info(a, b, argc);
   remove_all_nodes(&a);
   remove_all_nodes(&b);
}
