/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donggele <donggele@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/26 03:44:32 by donggele          #+#    #+#             */
/*   Updated: 2021/03/10 21:01:32 by donggele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	isalphabet(char *str)
{
	if (*str >= 'a' && *str <= 'z')
		return (1);
	else if (*str >= 'A' && *str <= 'Z')
		return (1);
	else
		return (0);
}

int	ft_str_is_alpha(char *str)
{
	while (*str)
	{
		if (!isalphabet(str))
			return (0);
		str++;
	}
	return (1);
}
