/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checks.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jterrada <jterrada@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 18:24:17 by jterrada          #+#    #+#             */
/*   Updated: 2025/03/01 13:29:57 by jterrada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_whitespace(char c)
{
	return (c == ' ' || (c >= 9 && c <= 13));
}

int	is_num(char c)
{
	return (c >= '0' && c <= '9');
}

int	is_sign(char c)
{
	return (c == '+' || c == '-');
}

void	is_valid(char c)
{
	if (!(is_whitespace(c) || is_num(c) || is_sign(c)))
	{
		ft_error();
	}
}

void	check_args(int argc, char **argv)
{
	int i;

	i = 0;
	while (i < argc)
	{
		if (argv[i][0] == '\0')
			ft_error();
		i++;
	}
}