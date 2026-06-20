/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gstefani <gstefani@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/17 01:46:13 by gstefani          #+#    #+#             */
/*   Updated: 2026/06/17 01:46:13 by gstefani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char *str1;
	const unsigned char *str2;
	size_t	i;

	str1 = (const unsigned char *)s1;
	str2 = (const unsigned char *)s2;

	i = 0;
	while(i < n)
	{
		if(str1[i] != str2[i])
		{
			return str1[i] - str2[i];
		}
		i++;
	}
	return 0;
}