/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jterrada <jterrada@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/28 10:47:51 by jterrada          #+#    #+#             */
/*   Updated: 2025/02/28 13:58:59 by jterrada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void rotate(int *arr, int arr_l)
{
	int first_element;
	int i;
	
	if (arr_l <= 1)
		return ;
	i = 0;
	first_element = arr[0];
	while(i < (arr_l - 1))
	{
		arr[i] = arr[i + 1];
		i++;
	}
	arr[arr_l - 1] = first_element;
}

void do_ra(int *arr, int arr_l)
{
	rotate(arr, arr_l);
	ft_putstr("ra\n");
}

void do_rb(int *arr2, int arr2_l)
{
	rotate(arr2, arr2_l);
	ft_putstr("rb\n");
}

void do_rr(int *arr, int *arr2, int arr_l, int arr2_l)
{
	rotate(arr, arr_l);
	rotate(arr2, arr2_l);
	ft_putstr("rr\n");
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
// 	do_ra(arr, len1);
// 	printf("\nPost ra: \n");
// 	for (int i = 0; i < len1; i++)
// 		printf("Array 1 [%d]: %d\n", i, arr[i]);
// 	printf("\n");
// 	for (int i = 0; i < len2; i++)
// 		printf("Array 2 [%d]: %d\n", i, arr2[i]);
// 	do_rb(arr2, len2);
// 	printf("\nPost rb: \n");
// 	for (int i = 0; i < len1; i++)
// 		printf("Array 1 [%d]: %d\n", i, arr[i]);
// 	printf("\n");
// 	for (int i = 0; i < len2; i++)
// 		printf("Array 2 [%d]: %d\n", i, arr2[i]);
// 	do_rr(arr, arr2, len1, len2);
// 	printf("\nPost rr: \n");
// 	for (int i = 0; i < len1; i++)
// 		printf("Array 1 [%d]: %d\n", i, arr[i]);
// 	printf("\n");
// 	for (int i = 0; i < len2; i++)
// 		printf("Array 2 [%d]: %d\n", i, arr2[i]);
// 	free(arr);
// 	free(arr2);
// }