/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcorrea- <hcorrea-@student.42lisboa.pt>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 16:32:49 by hcorrea-          #+#    #+#             */
/*   Updated: 2022/11/04 14:25:52 by hcorrea-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *str, unsigned int start, size_t len)
{
	char	*result;
	size_t	i;
	size_t	j;

	i = start;
	j = 0;
	if (!str)
		return (0);
	if (start >= ft_strlen(str))
	{
		result = malloc(1);
		if (!result)
			return (0);
		*result = '\0';
		return (result);
	}
	if (len > ft_strlen(str))
		return (ft_strdup((char *)str + start));
	result = (char *)malloc(len + 1);
	if (!result)
		return (0);
	while (j < len && i < ft_strlen(str))
		result[j++] = str[i++];
	result[j] = '\0';
	return (result);
}
