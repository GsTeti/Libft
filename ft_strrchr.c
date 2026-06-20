/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gstefani <gstefani@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/04 17:43:43 by gstefani          #+#    #+#             */
/*   Updated: 2026/06/04 17:43:43 by gstefani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{
	int i;

	if(s == NULL)
	{
		return (NULL);
	}
	i = ft_strlen(s);
	while(i >= 0)
	{
		if(s[i] == c)
		{
			return ((char *)&s[i]);
		}
		i--;
	}
	return (NULL);
}