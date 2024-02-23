/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_for_errors.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pclaus <pclaus@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 18:16:55 by pclaus            #+#    #+#             */
/*   Updated: 2024/02/23 16:34:54 by pclaus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int    check_for_errors(int argc, char **argv)
{
    if (error_check_duplicates(argc, argv) == 1)
    {
        ft_printf("Error\n");
        return (1);
    }
    if (error_check_integer(argv) == 1)
    {
        ft_printf("Error\n");
        return (1);
    }
   /* 
    if (error_check_for_int(argv) == 1)
    {
        ft_printf("Error");
        return (1);
    }*/
    return (0);
}

int    error_check_integer(char **argv)
{
    int count;

    count = 1;
    while (argv[count])
    {
        if (!ft_str_is_numeric(argv[count]))
        {
            return (1);
        }
        count++;
    }
    return (0);
}

int    error_check_duplicates(int argc, char **argv)
{
    int array[argc - 1];
    int count;
    int i;

    count = 1;
    i = 0;
    while (i < argc - 1)
        array[i++] = 0;
    i = 0;
    while (argv[count])
    {
        while (i < argc - 1)
        {
            if (array[i++] == ft_atoi(argv[count]))
                return (1);
        }
        i = 0;
        array[count] = ft_atoi(argv[count]);
        count++;
    }
    return (0);
}

int    error_check_for_int(char **argv)
{
    int count;
    long    nb;

    count = 0;
    nb = 0;
    while (argv[count++])
    {
        nb = ft_atoi_long(argv[count]);
        if (nb > INT_MAX || nb < INT_MIN)
            return (1);
    }
    return (0);
}