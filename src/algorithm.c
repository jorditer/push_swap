/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jterrada <jterrada@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/01 11:42:21 by jterrada          #+#    #+#             */
/*   Updated: 2025/03/01 12:55:07 by jterrada         ###   ########.fr       */
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

void	do_radix(int **arr, int **arr2, int *arr_l, int *arr2_l)
{
	int	max_bits;
	int	i;
	int	j;
	int	n;
	int	og_len;

	max_bits = count_max_bits(*arr_l - 1);
	i = 0;
	while (i < max_bits)
	{
		j = 0;
		og_len = *arr_l;
		while (j < og_len)
		{
			n = (*arr)[0];
			if (((n >> i) & 1) == 1)
				do_ra(*arr, *arr_l);
			else
				do_pb(arr, arr2, arr_l, arr2_l);
			j++;
		}
		while (*arr2_l > 0)
			do_pa(arr, arr2, arr_l, arr2_l);
		i++;
	}
}
