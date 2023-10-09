/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcreus <mcreus@student.42perpignan.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 17:18:20 by mcreus            #+#    #+#             */
/*   Updated: 2023/10/09 12:04:23 by mcreus           ###   ########.fr       */
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

Fixed::Fixed(const int d)
{
    std::cout << "Int constructor called" << std::endl;
    this->_a = d << _nBits;
}

Fixed::Fixed(float const e)
{
    std::cout << "Float constructor called" << std::endl;
    this->_a = roundf(e * (1 << _nBits));
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

Fixed &Fixed::operator=( Fixed const & c)
{
    std::cout << "Copy assigment operator called" << std::endl;
    _a = c._a;
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

float   Fixed::toFloat(void) const
{
    float   res;
    
    res = static_cast<float>(_a) / (1 << _nBits);
    return (res);
}

int Fixed::toInt(void) const
{
    int res2;
    
    res2 = _a >> _nBits;
    return (res2);
}

std::ostream   &operator<<(std::ostream &o, Fixed const &f)
{
    o << f.toFloat();
    
    return (o);
}