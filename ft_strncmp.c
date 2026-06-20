/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gstefani <gstefani@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/16 20:55:34 by gstefani          #+#    #+#             */
/*   Updated: 2026/06/16 20:55:34 by gstefani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char *p1;
	unsigned char *p2;
	size_t	i;

	p1 = (unsigned char *)s1;
	p2 = (unsigned char *)s2;
	i = 0;
	while(p1[i] != '\0' && i < n && p1[i] == p2[i])
	{
		i++;
	}
	if(i == n)
	{
		return 0;
	}
	return p1[i] - p2[i];
}