/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pclaus <pclaus@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 16:06:15 by pclaus            #+#    #+#             */
/*   Updated: 2024/02/20 18:04:53 by pclaus           ###   ########.fr       */
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
      ft_printf("argc is: %d\n", argc);
      ft_printf("argv[1] is: %s\n", argv[1]);
   }
   ft_printf("%p\n", a);
   ft_printf("%p\n", b);
}