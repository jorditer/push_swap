/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jterrada <jterrada@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 21:51:09 by jterrada          #+#    #+#             */
/*   Updated: 2025/02/27 21:55:10 by jterrada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_error(void)
{
	ft_printf("Error\n");
	exit(1);
}

void	ft_error_free(int *arr)
{
	free(arr);
	ft_printf("Error free\n"); // DEBUUGGING DELETE
	ft_error();
}