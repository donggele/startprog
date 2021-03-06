/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donggele <donggele@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/13 21:29:43 by donggele          #+#    #+#             */
/*   Updated: 2021/03/14 16:49:28 by donggele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int range;
	int *buffer;
	int index;

	if (min >= max)
		return (0);
	range = max - min;
	buffer = (int *)malloc((sizeof(int) * range));
	if (buffer == NULL)
		return (0);
	else
	{
		index = 0;
		while (index < range)
		{
			buffer[index] = min + index;
			index++;
		}
	}
	return (buffer);
}
