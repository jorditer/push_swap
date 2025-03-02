/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jterrada <jterrada@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/15 11:46:44 by jterrada          #+#    #+#             */
/*   Updated: 2025/03/02 19:17:53 by jterrada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <unistd.h>
# include <math.h>
# include <fcntl.h>
# include <stdlib.h>

# include "../lib/Libft/headers/libft.h"

// parse.c
int		*parse_input(int len, char **str, int *count);
int		count_total_numbers(int len, char **str);
void	count_str_numbers(int *total, char *str);
void	fill_arr(int *arr, char **str, int len);
char	*kindof_atol(int *arr, char *str, int pos);
// checks.c
int		is_sign(char c);
void	is_valid(char c);
int		is_num(char c);
int		is_whitespace(char c);
void	check_args(int argc, char **argv);
// algo_prep.c
void	bubble_sort(int *arr2, int arr_l);
void	algo_prep(int *arr, int *arr2, int arr_l);
void	check_duplicates(int *arr, int *arr2, int arr_l);
// errors.c
void	ft_error_free3(int *arr, int *arr2, int *arr3);
void	ft_error_free2(int *arr, int *arr2);
void	ft_error_free(int *arr);
void	ft_error(void);
int		is_valid_sign_pos(char *str, int pos);
// push.c
void	do_pb(int **arr, int **arr2, int *arr_l, int *arr2_l);
void	do_pa(int **arr, int **arr2, int *arr_l, int *arr2_l);
// swap.c
void	do_ss(int *arr, int *arr2, int arr_l, int arr2_l);
void	do_sb(int *arr2, int arr2_l);
void	do_sa(int *arr, int arr_l);
// rotate.c
void	do_ra(int *arr, int arr_l);
void	do_rb(int *arr2, int arr2_l);
void	do_rr(int *arr, int *arr2, int arr_l, int arr2_l);
// r_rotate.c
void	do_rra(int *arr, int arr_l);
void	do_rrb(int *arr2, int arr2_l);
void	do_rrr(int *arr, int *arr2, int arr_l, int arr2_l);
// algorithm.c
void	do_sorting(int **arr, int **arr2, int *arr_l, int *arr2_l);
// algorithm_helpers.c
int		count_max_bits(int max_n);
int		is_sorted(int *arr, int arr_l);
// void	do_mechanical_turk(int **arr, int **arr2, int *arr_l, int *arr2_l);

#endif