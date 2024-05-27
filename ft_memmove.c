/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yumatsui <yumatsui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 12:07:12 by yumatsui          #+#    #+#             */
/*   Updated: 2024/04/19 18:08:58 by yumatsui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*u_dst;
	unsigned char	*u_src;

	if (len == 0 || dst == src)
		return (dst);
	if (!dst && !src)
		return (NULL);
	u_dst = (unsigned char *)dst;
	u_src = (unsigned char *)src;
	if (u_dst <= u_src)
		ft_memcpy(dst, src, len);
	else
	{
		while (len--)
			u_dst[len] = u_src[len];
		u_dst[0] = u_src[0];
	}
	return (dst);
}
