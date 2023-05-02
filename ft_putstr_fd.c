/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndiamant <ndiamant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 14:36:20 by ndiamant          #+#    #+#             */
/*   Updated: 2023/05/02 13:00:29 by ndiamant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * Ecrit la chaine de caractères 's' sur le descripteur de fichier donné.
*/

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	if (!s || !fd)
		return ;
	while (*s)
		ft_putchar_fd(*s++, fd);
}
