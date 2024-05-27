/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yumatsui <yumatsui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 11:48:02 by yumatsui          #+#    #+#             */
/*   Updated: 2024/04/19 18:20:15 by yumatsui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	max_len;
	size_t	dst_len;
	size_t	src_len;
	size_t	j;

	if (src == NULL || size == 0)
		return (ft_strlen(src));
	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	if (size <= dst_len)
		return (size + src_len);
	max_len = size - dst_len - 1;
	j = 0;
	while (j < max_len)
	{
		if (src[j] == '\0')
			break ;
		dst[dst_len + j] = src[j];
		j++;
	}
	dst[j + dst_len] = '\0';
	return (src_len + dst_len);
}
