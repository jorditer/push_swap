/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jterrada <jterrada@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/15 11:46:44 by jterrada          #+#    #+#             */
/*   Updated: 2025/02/27 23:17:11 by jterrada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP
# define PUSH_SWAP

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
// algo_prep.c
void	bubble_sort(int *arr2, int arr_l);
void	algo_prep(int *arr, int *arr2, int arr_l);
void	check_duplicates(int *arr, int *arr2, int arr_l);

// errors.c
void	ft_error_free2(int *arr, int *arr2);
void	ft_error_free(int *arr);
void	ft_error(void);

#endif