/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndiamant <ndiamant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 14:06:37 by ndiamant          #+#    #+#             */
/*   Updated: 2023/05/02 13:00:29 by ndiamant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * Applique la fonction 'f' à chaque caractères passés en argument pour créer 
 *une nouvelle chaine de caractère résultant des applications succèssives de 'f'
*/

#include <stdlib.h>
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*ret;
	unsigned int	i;

	ret = malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!ret || !s)
		return (0);
	i = 0;
	while (s[i])
	{
		ret[i] = f(i, s[i]);
		++i;
	}
	ret[i] = 0;
	return (ret);
}
