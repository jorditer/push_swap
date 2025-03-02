/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jterrada <jterrada@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 21:51:09 by jterrada          #+#    #+#             */
/*   Updated: 2025/03/02 13:05:37 by jterrada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_error(void)
{
	ft_putstr_fd("Error\n", 2);
	exit(1);
}

void	ft_error_free(int *arr)
{
	free(arr);
	ft_error();
}

void	ft_error_free2(int *arr, int *arr2)
{
	free(arr);
	free(arr2);
	ft_error();
}

void	ft_error_free3(int *arr, int *arr2, int *arr3)
{
	free(arr);
	free(arr2);
	free(arr3);
	ft_error();
}

int	is_valid_sign_pos(char *str, int pos)
{
	if (pos > 0 && !is_whitespace(str[pos - 1]))
		return (0);
	return (1);
}
