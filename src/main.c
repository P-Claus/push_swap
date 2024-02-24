/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pclaus <pclaus@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 10:43:31 by pclaus            #+#    #+#             */
/*   Updated: 2024/02/24 09:23:35 by pclaus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int main(int argc, char **argv)
{
   Node *a;
   Node *b;
   int   count;

   count = 1;
   a = NULL;
   b = NULL;
   if (argc == 1)
      return (1);
   if (check_for_errors(argc, argv))
      return (1);
   
   else
   {
      while (argv[count])
      {
         insert_end(&a, ft_atoi(argv[count]));
         insert_end(&b, ft_atoi(argv[count]));
         count++;
      }
   }
   reset_head(&a);
   reset_head(&b);
   print_list(a, b, argc);
   ss(a, b);
   sa(a);
   print_list(a, b, argc);
   ss(a, b);
   print_list(a, b, argc);

   remove_all_nodes(&a);
   remove_all_nodes(&b);
}
