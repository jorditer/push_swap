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
	int	i;
	int	total;

	i = 1;
	total = 0;
	while (i < len)
	{
		count_str_numbers(&total, str[i]);
		i++;
	}
	return (total);
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

char	*kindof_atol(int *arr, char *str, int pos)
{
	int		i;
	long	n;
	int		sign;

	i = 0;
	n = 0;
	sign = 1;
	if (is_sign(str[i]))
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] && !is_whitespace(str[i]))
	{
		n = n * 10 + (str[i] - '0');
		i++;
	}
	n *= sign;
	if (n >= 2147483647 || n <= -2147483648 || !is_valid_sign_pos(str, i))
		ft_error_free(arr);
	arr[pos] = (int)n;
	return (&str[i]);
}

void	fill_arr(int *arr, char **str, int len)
{
	int		i;
	int		pos;
	char	*s;

	i = 1;
	pos = 0;
	while (i < len)
	{
		s = str[i];
		while (*s)
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
	int	*arr;

	*count = count_total_numbers(len, str);
	arr = malloc(sizeof(int) * *count);
	if (!arr)
		exit (1);
	fill_arr(arr, str, len);
	return (arr);
}
