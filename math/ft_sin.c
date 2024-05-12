/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sin.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgarault <fgarault@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/12 18:13:32 by fgarault          #+#    #+#             */
/*   Updated: 2024/05/12 18:40:17 by fgarault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

double  ft_sin( double angle ) {
    double result = 0.0;
    double term = angle;
    int i = 1;

    while (i <= 10 )
    {
        result += term;
        term = -term * angle * angle / ((2 * angle) * (2 * angle + 1));
        i++;
    }
    return (result);
}