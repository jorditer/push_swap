/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jterrada <jterrada@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 21:51:09 by jterrada          #+#    #+#             */
/*   Updated: 2025/02/27 23:52:56 by jterrada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_error(void)
{
	ft_putstr("Error\n");
	exit(1);
}

void	ft_error_free(int *arr)
{
	free(arr);
	ft_printf("Error free\n"); // DEBUUGGING DELETE
	ft_error();
}

void	ft_error_free2(int *arr, int *arr2)
{
	free(arr);
	free(arr2);
	ft_printf("Error free2!\n"); // DEBUUGGING DELETE
	ft_error();
}