/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donggele <donggele@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/13 04:53:13 by donggele          #+#    #+#             */
/*   Updated: 2021/03/13 06:31:21 by donggele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	exsqrt(int nb)
{
	int i;

	i = 0;
	if (nb < 0)
		return (0);
	while (i * i <= nb && i <= 46340)
		i++;
	i--;
	return (i);
}

int	ft_is_prime(int nb)
{
	int index;
	int sqrt;

	if (nb <= 1)
		return (0);
	else if (nb <= 3)
		return (1);
	else if (nb % 2 == 0 || nb % 3 == 0)
		return (0);
	index = 5;
	sqrt = exsqrt(nb);
	while (index <= sqrt)
	{
		if (nb % index == 0)
			return (0);
		index++;
	}
	return (1);
}
