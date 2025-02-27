/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jterrada <jterrada@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 18:22:43 by jterrada          #+#    #+#             */
/*   Updated: 2025/02/27 18:54:5 by jterrada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	count_total_numbers(int len, char **str)
{
	int i = 1;
	int total = 0;

	while (i < len)
	{
		count_str_numbers(&total, str[i]);
		i++;
	}
	return total;
}
void	count_str_numbers(int *total, char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		is_valid(str[i]);
		if (str[i] && is_whitespace(str[i]))
		{
			while (str[i] && is_whitespace(str[i]))
				i++;
		}
		write(1, &str[i], 1);    // DEBUG DELETE
		ft_printf(": number\n"); // DEBUG DELETE
		if (str[i] && (is_num(str[i]) || is_sign(str[i])))
		{
			if (str[i] && is_sign(str[i]))
			{
				i++;
				if (!str[i] || !is_num(str[i]))
					ft_error();
			}
			(*total)++;
			i++;
			while (str[i] && is_num(str[i]))
				i++;
			}
	}
}

// -2147483648 +2147483648
char	*kindof_atol(int *arr, char *str, int pos)
{
	long n;
	int sign;

	n = 0;
	sign = 1;
	if (is_sign(*str))
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	while (*str && !is_whitespace(*str))
	{
		n = n * 10 + (*str - '0');
		str++;
	}
	n *= sign;
	ft_printf("Atol number = %d\n", n);
	if (n >= 2147483647)
		ft_error_free(arr);
	if (n <= -2147483648)
		ft_error_free(arr);
	arr[pos] = (int)n;
	return (str);
}

void	fill_arr(int *arr, char **str, int len)
{
	int	i;
	int pos;
	char *s;

	i = 1;
	pos = 0;
	while(i < len)
	{
		s = str[i];
		while(*s)
		{
			while (is_whitespace(*s))
				s++;
			if (*s)
			{
				s = kindof_atol(arr, s, pos);
				pos++;
			}
		}
		i++;
	}
}

int	*parse_input(int len, char **str, int *count)
{
	int *arr;

	*count = count_total_numbers(len, str);
	ft_printf("Count = %d\n", *count);
	arr = malloc(sizeof(int) * *count);
	if (!arr)
		exit (1);
	fill_arr(arr, str, len);
	for(int i = 0; i < *count; i++)// DEBUG DELETE
		ft_printf("Array [%d]: %d\n", i, arr[i]);// DEBUG DELETE
	return (arr);
}
