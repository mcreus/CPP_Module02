/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcreus <mcreus@student.42perpignan.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 12:10:39 by mcreus            #+#    #+#             */
/*   Updated: 2023/10/09 16:16:18 by mcreus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void ) 
{
    Fixed a;
    Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
    std::cout << "b=" << b << std::endl;

    std::cout << "a=" << a << std::endl;
    std::cout << "++a=" << ++a << std::endl;
    std::cout << "a=" << a << std::endl;
    std::cout << "a++=" << a++ << std::endl;
    std::cout << "a=" << a << std::endl;
    std::cout << "b=" << b << std::endl;
    std::cout << "max=" << Fixed::max( a, b ) << std::endl;
    return 0;
}