/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jterrada <jterrada@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/01 11:42:21 by jterrada          #+#    #+#             */
/*   Updated: 2025/03/02 21:35:12 by jterrada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	do_radix(int **arr, int **arr2, int *arr_l, int *arr2_l)
{
	int	max_bits;
	int	i;
	int	j;
	int	n;
	int	og_len;

	max_bits = count_max_bits(*arr_l - 1);
	i = 0;
	while (i < max_bits && !(*arr2_l == 0 && is_sorted(*arr, *arr_l)))
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

int	find_smallest_index(int *arr, int arr_l)
{
	int	i;
	int	smallest;
	int	smallest_idx;

	if (arr_l <= 0)
		return (-1);
	smallest = arr[0];
	smallest_idx = 0;
	i = 1;
	while (i < arr_l)
	{
		if (arr[i] < smallest)
		{
			smallest = arr[i];
			smallest_idx = i;
		}
		i++;
	}
	return (smallest_idx);
}

void	move_to_top(int *arr, int arr_l, int idx)
{
	if (idx <= arr_l / 2)
	{
		while (idx > 0)
		{
			do_ra(arr, arr_l);
			idx--;
		}
	}
	else
	{
		while (idx < arr_l)
		{
			do_rra(arr, arr_l);
			idx++;
		}
	}
}

void	sort_remaining(int *arr, int arr_l)
{
	if (arr_l == 2)
	{
		if (arr[0] > arr[1])
			do_sa(arr, arr_l);
	}
	else if (arr_l == 3)
	{
		if (arr[0] > arr[1] && arr[0] > arr[2])
			do_ra(arr, arr_l);
		else if (arr[1] > arr[0] && arr[1] > arr[2])
			do_rra(arr, arr_l);
		if (arr[0] > arr[1])
			do_sa(arr, arr_l);
	}
}

void	do_sorting(int **arr, int **arr2, int *arr_l, int *arr2_l)
{
	int	smallest_idx;
	int	elements_to_keep;

	if (is_sorted(*arr, *arr_l))
		return ;
	if (*arr_l <= 10)
	{
		if (*arr_l <= 3)
			elements_to_keep = *arr_l;
		else
			elements_to_keep = 3;
		while (*arr_l > elements_to_keep)
		{
			smallest_idx = find_smallest_index(*arr, *arr_l);
			move_to_top(*arr, *arr_l, smallest_idx);
			do_pb(arr, arr2, arr_l, arr2_l);
		}
		sort_remaining(*arr, *arr_l);
		while (*arr2_l > 0)
			do_pa(arr, arr2, arr_l, arr2_l);
	}
	else
		do_radix(arr, arr2, arr_l, arr2_l);
}
