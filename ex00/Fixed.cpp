/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcreus <mcreus@student.42perpignan.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 15:04:02 by mcreus            #+#    #+#             */
/*   Updated: 2023/10/05 17:05:44 by mcreus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int  Fixed::_nBits = 8;

Fixed::Fixed()
{
    std::cout << "Default constructor called" << std::endl;
    this->_a = 0;
    return ;
}

Fixed::Fixed(Fixed const & b)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = b;
    return ;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

Fixed &Fixed::operator=( Fixed const & c)
{
    std::cout << "Copy assigment operator called" << std::endl;
    setRawBits(c.getRawBits());
    return (*this);    
}

int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return(this->_a);
}

void    Fixed::setRawBits(int const raw)
{
    this->_a = raw;
}