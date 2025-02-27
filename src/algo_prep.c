/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_prep.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jterrada <jterrada@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 22:39:13 by jterrada          #+#    #+#             */
/*   Updated: 2025/02/27 23:21:52 by jterrada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// El *arr esta ahi solo pal free
void	check_duplicates(int *arr, int *arr2, int arr_l)
{
	int	i;

	i = 0;
	while (i < arr_l - 1)
	{
		if (arr2[i] == arr2[i + 1])
			ft_error_free2(arr, arr2);
		i++;
	}
}

void	bubble_sort(int *arr2, int arr_l)
{
	int	i;
	int	j;
	int	temp;

	i = 0;
	while (i < (arr_l - 1))
	{
		j = 0;
		while (j < (arr_l - i - 1))
		{
			if (arr2[j] > arr2[j + 1])
			{
				temp = arr2[j];
				arr2[j] = arr2[j + 1];
				arr2[j + 1] = temp;
			}
			j++;
		}
		i++;
	}
}

void	algo_prep(int *arr, int *arr2, int arr_l)
{
	int	i;
	int	j;

	i = 0;
	while (i < arr_l)
	{
		arr2[i] = arr[i];
		i++;
	}
	bubble_sort(arr2, arr_l);
	i = 0;
	while (i < arr_l)
	{
		j = 0;
		while (j < arr_l)
		{
			if (arr[i] == arr2[j])
				arr[i] = j;
			j++;
		}
		i++;
	}
}
