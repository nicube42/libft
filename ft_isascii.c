/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndiamant <ndiamant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 21:51:35 by ndiamant          #+#    #+#             */
/*   Updated: 2023/05/02 13:00:29 by ndiamant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
  * Test if the character is in the in the ascii table
 */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}
