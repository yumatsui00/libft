/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yumatsui <yumatsui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 13:16:46 by yumatsui          #+#    #+#             */
/*   Updated: 2024/04/20 15:38:03 by yumatsui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_sub2(const char *s, unsigned int start, size_t len, char *ans)
{
	size_t	i;

	i = 0;
	while (i < len && s[start + i])
	{
		ans[i] = s[start + i];
		i++;
	}
	while (i < len)
	{
		ans[i] = '\0';
		i++;
	}
	ans[i] = '\0';
	return (ans);
}

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*ans;
	size_t	s_len;

	if (s == NULL)
		return (NULL);
	s_len = ft_strlen(s);
	if (s_len <= start)
	{
		ans = (char *)malloc(1);
		if (!ans)
			return (NULL);
		ans[0] = '\0';
		return (ans);
	}
	ans = (char *)malloc(sizeof(char) * (len + 1));
	if (!ans)
		return (NULL);
	return (ft_sub2(s, start, len, ans));
}
