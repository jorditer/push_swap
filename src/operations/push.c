/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jterrada <jterrada@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/28 12:14:53 by jterrada          #+#    #+#             */
/*   Updated: 2025/03/01 12:52:25 by jterrada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	copy_elements(int *dest, int *src, int count, int offset)
{
	int	i;

	i = 0;
	while (i < count)
	{
		dest[i + offset] = src[i];
		i++;
	}
}

void	push(int **arr, int **arr2, int *arr_l, int *arr2_l)
{
	int	*arr_new;
	int	*arr2_new;
	int	num;

	if (*arr_l <= 0)
		return ;
	num = (*arr)[0];
	arr_new = malloc(sizeof(int) * (*arr_l - 1));
	if (!arr_new)
		ft_error_free2(*arr, *arr2);
	arr2_new = malloc(sizeof(int) * (*arr2_l + 1));
	if (!arr2_new)
		ft_error_free3(*arr, *arr2, arr_new);
	copy_elements(arr_new, *arr + 1, *arr_l - 1, 0);
	arr2_new[0] = num;
	copy_elements(arr2_new, *arr2, *arr2_l, 1);
	free(*arr);
	free(*arr2);
	*arr = arr_new;
	*arr2 = arr2_new;
	(*arr_l)--;
	(*arr2_l)++;
}

void	do_pa(int **arr, int **arr2, int *arr_l, int *arr2_l)
{
	push(arr2, arr, arr2_l, arr_l);
	ft_putstr("pa\n");
}

void	do_pb(int **arr, int **arr2, int *arr_l, int *arr2_l)
{
	push(arr, arr2, arr_l, arr2_l);
	ft_putstr("pb\n");
}

// int main(void)
// {
// 	int *arr = malloc(sizeof(int) * 4);
// 	int *arr2 = malloc(sizeof(int) * 4);
// 	arr[0] = 1; arr[1] = 2; arr[2] = 3; arr[3] = 4;
// 	arr2[0] = 5; arr2[1] = 6; arr2[2] = 7; arr2[3] = 8;
// 	int len1 = 4;
// 	int len2 = 4;
// 	printf("Pre pb: \n");
// 	for (int i = 0; i < len1; i++)
// 	printf("Array 1 [%d]: %d\n", i, arr[i]);
// 	printf("\n");
// 	for (int i = 0; i < len2; i++)
// 	printf("Array 2 [%d]: %d\n", i, arr2[i]);
// 	do_pa(&arr, &arr2, &len1, &len2);
// 	printf("\nPost pa: \n");
// 	for (int i = 0; i < len1; i++)
// 		printf("Array 1 [%d]: %d\n", i, arr[i]);
// 	printf("\n");
// 	for (int i = 0; i < len2; i++)
// 		printf("Array 2 [%d]: %d\n", i, arr2[i]);
// 	do_pb(&arr, &arr2, &len1, &len2);
// 	printf("\nPost pb: \n");
// 	for (int i = 0; i < len1; i++)
// 		printf("Array 1 [%d]: %d\n", i, arr[i]);
// 	printf("\n");
// 	for (int i = 0; i < len2; i++)
// 		printf("Array 2 [%d]: %d\n", i, arr2[i]);
// 	free(arr);
// 	free(arr2);
// }
//gcc -Wall -Wextra -Werror -g -I../../include push.c ../errors.c 
//../../lib/Libft/libft.a -o push_test
