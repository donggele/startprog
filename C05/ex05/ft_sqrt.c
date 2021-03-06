/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donggele <donggele@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/13 04:02:21 by donggele          #+#    #+#             */
/*   Updated: 2021/03/13 04:47:11 by donggele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int i;

	i = 0;
	if (nb < 0)
		return (0);
	while (i * i <= nb && i <= 46340)
	{
		i++;
	}
	i--;
	if (i * i == nb)
		return (i);
	else
		return (0);
}
