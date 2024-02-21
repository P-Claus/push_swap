/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pclaus <pclaus@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 16:06:15 by pclaus            #+#    #+#             */
/*   Updated: 2024/02/21 21:13:01 by pclaus           ###   ########.fr       */
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
   if (argc == 1 || ((argc == 2) && !(argv[2][0])))
   {
      ft_printf("You need to enter arguments\n");
      return (1);
   }
   else
   {
      while (argv[count])
      {
         insert_end(&a, ft_atoi(argv[count]));
         count++;
      }
   }
   print_list(a);

   remove_all_nodes(&a);
   (void)b;
}
