/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndiamant <ndiamant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 09:45:40 by ndiamant          #+#    #+#             */
/*   Updated: 2023/05/02 13:00:29 by ndiamant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * The strlcpy() and strlcat() functions copy and concatenate strings 
 * with the same input parameters and output result as snprintf(3).
 * They are designed to be safer, more consistent, and less error prone 
 * replacements for the easily misused functions strncpy(3) and strncat(3).
 * strlcpy() and strlcat() take the full size of the destination buffer and 
 * guarantee NUL-termination if there is room.
 * Note that room for the NUL should be included in dstsize.
 * strlcat() appends string src to the end of dst.
 * It will append at most dstsize - strlen(dst) - 1 characters.
 * It will then NUL-terminate, unless dstsize is 0 or the original dst string 
 * was longer than dstsize (in practice this should not happen as it means that 
 * either dstsize is incorrect or that dst is not a proper string).
*/

#include <stddef.h>
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	ret;

	i = 0;
	while (*dst && i < dstsize)
	{
		++dst;
		++i;
	}
	ret = ft_strlcpy(dst, src, dstsize - i);
	return (ret + i);
}
