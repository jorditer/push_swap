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

int	count_numbers(int len, char **str)
{
	int	i;
	int count;

	i = 0;
	count = 0;
	while (i < len)
	{
		while (*str[i])
		{
			is_valid(*str[i]);
			if (*str[i] && is_whitespace(*str[i]))
			{
				while (*str[i] && is_whitespace(*str[i]))
					str[i]++;
			}
			if (*str[i] && (is_num(*str[i]) || is_sign(*str[i])))
			{
				if (*str[i] && is_sign(*str[i]))
				{
					str[i]++;
					if (!*str[i] || !is_num(*str[i]))
						ft_error();
				}
				count++;
				str[i]++;
				while (*str[i] && is_num(*str[i]))
					str[i]++;
			}
		}
		i++;
	}
	return (count);
}

int	*parse_input(int len, char **str)
{
	int	count;
	int *arr;

	count = count_numbers(len, str);
	ft_printf("%d", count);
	arr = malloc(sizeof(int) * count);
	return (arr);
}
