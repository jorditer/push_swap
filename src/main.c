/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jterrada <jterrada@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/01 12:56:45 by jterrada          #+#    #+#             */
/*   Updated: 2025/03/02 19:23:56 by jterrada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	int	arr_l;
	int	arr2_l;
	int	*arr;
	int	*arr2;

	if (argc == 1)
		return (0);
	check_args(argc, argv);
	arr = parse_input(argc, argv, &arr_l);
	arr2 = malloc(sizeof(int) * arr_l);
	if (!arr2)
		exit (1);
	algo_prep(arr, arr2, arr_l);
	check_duplicates(arr, arr2, arr_l);
	free(arr2);
	arr2 = NULL;
	arr2_l = 0;
	do_sorting(&arr, &arr2, &arr_l, &arr2_l);
	free(arr);
	free(arr2);
}

// int main(int argc, char **argv)
// {
// 	int arr_l;
// 	int arr2_l;
// 	int	*arr;
// 	int *arr2;

// 	if (argc == 1)
// 		return (0);
// 	//
// 	ft_printf("Arguments: %d\n", argc - 1);
// 	for (int num = 1; num < argc; num++)// DEBUG DELETE
// 		ft_printf("Argument %d: %s\n", num, argv[num]);// DEBUG DELETE
// 	//
// 	arr = parse_input(argc, argv, &arr_l);
// 	arr2 = malloc(sizeof(int) * arr_l);
// 	if (!arr2)
// 		exit (1);
// 	algo_prep(arr, arr2, arr_l);
// 	for(int i = 0; i < arr_l; i++)// DEBUG DELETE
// 		ft_printf("Array renumbered [%d]: %d\n", i, arr[i]);// DEBUG DELETE
// 	check_duplicates(arr, arr2, arr_l);
// 	free(arr2);
// 	arr2 = NULL;
// 	arr2_l = 0;
// 	do_radix(&arr, &arr2, &arr_l, &arr2_l);
// 	free(arr);
// 	ft_printf("end\n"); // DEBUGG BORRA
// }