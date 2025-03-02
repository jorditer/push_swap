/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm_helpers.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jterrada <jterrada@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/02 19:12:42 by jterrada          #+#    #+#             */
/*   Updated: 2025/03/02 19:23:41 by jterrada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	count_max_bits(int max_n)
{
	int	max_bits;

	max_bits = 0;
	while ((max_n >> max_bits) != 0)
		max_bits++;
	return (max_bits);
}

int	is_sorted(int *arr, int arr_l)
{
	int	i;

	i = 0;
	while (i < (arr_l - 1))
	{
		if (arr[i] > arr[i + 1])
			return (0);
		i++;
	}
	return (1);
}
