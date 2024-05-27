/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yumatsui <yumatsui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 21:05:44 by yumatsui          #+#    #+#             */
/*   Updated: 2024/04/19 18:15:20 by yumatsui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*us;

	if (n == 0)
		return (NULL);
	us = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (us[i] == (unsigned char)c)
			return (&us[i]);
		i++;
	}
	return (NULL);
}

// int main()
// {
// 	const char *test1 = "libft-test-tokyo\0\0\0acdfg\0\0\0\0\0";
// 	const char *test2 = "libft-test-tokyo\0\0\0acdfg\0\0\0\0\0";
// 	write(1, memchr(test1, NULL, 30),1);
// 	write(1, ft_memchr(test2, NULL, 30),1);
// 	printf("\n");
// }