/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jterrada <jterrada@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/15 11:46:44 by jterrada          #+#    #+#             */
/*   Updated: 2025/02/27 18:49:46 by jterrada         ###   ########.fr       */
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
int		*parse_input(int len, char **str);
int		count_numbers(int len, char **str);
// checks.c
int		is_sign(char c);
void	is_valid(char c);
int		is_num(char c);
int		is_whitespace(char c);
void	ft_error(void);

#endif