/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jterrada <jterrada@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 23:43:21 by jterrada          #+#    #+#             */
/*   Updated: 2025/02/28 14:01:46 by jterrada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap(int *arr, int arr_l)
{
	int	temp;

	if (arr_l >= 2)
	{
		temp = arr[0];
		arr[0] = arr[1];
		arr[1] = temp;
	}
}

void	do_sa(int *arr, int arr_l)
{
	swap(arr, arr_l);
	ft_putstr("sa\n");
}

void	do_sb(int *arr2, int arr2_l)
{
	swap(arr2, arr2_l);
	ft_putstr("sb\n");
}

void	do_ss(int *arr, int *arr2, int arr_l, int arr2_l)
{
	swap(arr, arr_l);
	swap(arr2, arr2_l);
	ft_putstr("ss\n");
}

// int main(void)
// {
// 	int *arr = malloc(sizeof(int) * 4);
// 	int *arr2 = malloc(sizeof(int) * 4);
// 	arr[0] = 1; arr[1] = 2; arr[2] = 3; arr[3] = 4;
// 	arr2[0] = 5; arr2[1] = 6; arr2[2] = 7; arr2[3] = 8;
// 	int len1 = 4;
// 	int len2 = 4;
// 	printf("Pre: \n");
// 	for (int i = 0; i < len1; i++)
// 	printf("Array 1 [%d]: %d\n", i, arr[i]);
// 	printf("\n");
// 	for (int i = 0; i < len2; i++)
// 	printf("Array 2 [%d]: %d\n", i, arr2[i]);
// 	do_sa(arr, len1);
// 	printf("\nPost sa: \n");
// 	for (int i = 0; i < len1; i++)
// 		printf("Array 1 [%d]: %d\n", i, arr[i]);
// 	printf("\n");
// 	for (int i = 0; i < len2; i++)
// 		printf("Array 2 [%d]: %d\n", i, arr2[i]);
// 	do_sb(arr2, len2);
// 	printf("\nPost sb: \n");
// 	for (int i = 0; i < len1; i++)
// 		printf("Array 1 [%d]: %d\n", i, arr[i]);
// 	printf("\n");
// 	for (int i = 0; i < len2; i++)
// 		printf("Array 2 [%d]: %d\n", i, arr2[i]);
// 	do_ss(arr, arr2, len1, len2);
// 	printf("\nPost ss: \n");
// 	for (int i = 0; i < len1; i++)
// 		printf("Array 1 [%d]: %d\n", i, arr[i]);
// 	printf("\n");
// 	for (int i = 0; i < len2; i++)
// 		printf("Array 2 [%d]: %d\n", i, arr2[i]);
// 	free(arr);
// 	free(arr2);
// }