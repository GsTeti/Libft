/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gstefani <gstefani@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/17 00:23:40 by gstefani          #+#    #+#             */
/*   Updated: 2026/06/17 00:23:40 by gstefani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	size;
	char	*dest;
	
	size = ft_strlen(s1) + 1;
	dest = (char *) malloc(size);
	if(dest == NULL)
	{
		return NULL;
	}
	ft_strlcpy(dest, s1, size);
	return dest;
}