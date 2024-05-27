/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yumatsui <yumatsui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 13:09:16 by yumatsui          #+#    #+#             */
/*   Updated: 2024/04/18 21:48:29 by yumatsui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*dup;
	char	*ans;

	ans = (char *)malloc(ft_strlen(s1) + 1);
	if (!ans)
		return (NULL);
	dup = ans;
	while (*s1)
	{
		*ans = *s1;
		s1++;
		ans++;
	}
	*ans = '\0';
	return (dup);
}
