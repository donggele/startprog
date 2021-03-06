/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donggele <donggele@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/09 22:06:26 by donggele          #+#    #+#             */
/*   Updated: 2021/03/11 04:30:44 by donggele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int num;
	int fn;
	int count;

	fn = 0;
	num = 0;
	count = 0;
	while ((*str >= 9 && *str <= 13) || *str == 32)
		str++;
	while (*str == '+' || *str == '-')
	{
		if (*str++ == '-')
			count++;
	}
	while (*str >= '0' && *str <= '9')
	{
		fn *= 10;
		num = *str - '0';
		fn = fn + num;
		str++;
	}
	if (count % 2 == 1)
		return (-fn);
	else
		return (fn);
}
