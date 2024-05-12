/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_abs.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgarault <fgarault@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/12 18:13:14 by fgarault          #+#    #+#             */
/*   Updated: 2024/05/12 18:35:23 by fgarault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int     ft_abs(int value)
{
    if (value < 0)
        return -value;
    return value;
}