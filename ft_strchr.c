/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gstefani <gstefani@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/29 01:28:42 by gstefani          #+#    #+#             */
/*   Updated: 2026/05/29 01:28:42 by gstefani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	int i;

	i = 0;
	if(s == NULL)
	{
		return NULL;
	}

	while(s[i] != '\0')
	{
		if(s[i] == c)
		{
			return (char *)&s[i];
		}
		i++;
	}

	if(s[i] == c)
	{
		return (char *)&s[i];
	}
	return NULL;
}