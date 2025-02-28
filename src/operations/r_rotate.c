/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   r_rotate.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jterrada <jterrada@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/28 10:49:41 by jterrada          #+#    #+#             */
/*   Updated: 2025/02/28 13:57:26 by jterrada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void r_rotate(int *arr, int arr_l)
{
	int last_element;
	int i;
	
	if (arr_l <= 1)
		return ;
	last_element = arr[arr_l - 1];
	i = arr_l - 1;
	while(i > 0)
	{
		arr[i] = arr[i - 1];
		i--;
	}
	arr[0] = last_element;
}

void do_rra(int *arr, int arr_l)
{
	r_rotate(arr, arr_l);
	ft_putstr("rra\n");
}

void do_rrb(int *arr2, int arr2_l)
{
	r_rotate(arr2, arr2_l);
	ft_putstr("rrb\n");
}

void do_rrr(int *arr, int *arr2, int arr_l, int arr2_l)
{
	r_rotate(arr, arr_l);
	r_rotate(arr2, arr2_l);
	ft_putstr("rrr\n");
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
// 	do_rra(arr, len1);
// 	printf("\nPost rra: \n");
// 	for (int i = 0; i < len1; i++)
// 		printf("Array 1 [%d]: %d\n", i, arr[i]);
// 	printf("\n");
// 	for (int i = 0; i < len2; i++)
// 		printf("Array 2 [%d]: %d\n", i, arr2[i]);
// 	do_rrb(arr2, len2);
// 	printf("\nPost rrb: \n");
// 	for (int i = 0; i < len1; i++)
// 		printf("Array 1 [%d]: %d\n", i, arr[i]);
// 	printf("\n");
// 	for (int i = 0; i < len2; i++)
// 		printf("Array 2 [%d]: %d\n", i, arr2[i]);
// 	do_rrr(arr, arr2, len1, len2);
// 	printf("\nPost rrr: \n");
// 	for (int i = 0; i < len1; i++)
// 		printf("Array 1 [%d]: %d\n", i, arr[i]);
// 	printf("\n");
// 	for (int i = 0; i < len2; i++)
// 		printf("Array 2 [%d]: %d\n", i, arr2[i]);
// 	free(arr);
// 	free(arr2);
// }