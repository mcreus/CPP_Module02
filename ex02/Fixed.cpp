/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcreus <mcreus@student.42perpignan.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 17:18:20 by mcreus            #+#    #+#             */
/*   Updated: 2023/10/09 16:19:22 by mcreus           ###   ########.fr       */
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

Fixed   Fixed::operator+( Fixed const &plus)
{
    Fixed   res;
    
    res._a = this->_a + plus._a;
    return (res);
}

Fixed   Fixed::operator-( Fixed const &moins)
{
    Fixed   res;

    res._a = this->_a + moins._a;
    return (res);
}

Fixed   Fixed::operator*( Fixed const &multiple)
{
    Fixed   res;

    res._a = (this->_a * multiple._a) >> _nBits;
    return (res);
}

Fixed   Fixed::operator/( Fixed const &divise)
{
    Fixed   res;
    
    res._a = this->_a / divise._a;
    return (res);
}

bool	Fixed::operator>(Fixed const & pGrand) const
{
    bool   res;

    if (this->_a > pGrand._a)
        res = true;
    else
        res = false;
    return (res);
}

bool    Fixed::operator<(Fixed const & pPetit) const
{
    bool   res;

    if (this->_a < pPetit._a)
        res = true;
    else
        res = false;
    return (res);
}

bool	Fixed::operator>=(Fixed const & pgoEgal) const
{
    bool   res;

    if (this->_a >= pgoEgal._a)
        res = true;
    else
        res = false;
    return (res);
}

bool    Fixed::operator<=(Fixed const & ppoEgal) const
{
    bool   res;

    if (this->_a <= ppoEgal._a)
        res = true;
    else
        res = false;
    return (res);
}

bool    Fixed::operator==(Fixed const & strictEgal) const
{
    bool   res;

    if (this->_a == strictEgal._a)
        res = true;
    else
        res = false;
    return (res);
}

bool    Fixed::operator!=(Fixed const & differend) const
{
    bool   res;

    if (!(this->_a == differend._a))
        res = true;
    else
        res = false;
    return (res);
}

Fixed   Fixed::operator++()
{
    ++this->_a;
    return (*this);
}

Fixed   Fixed::operator++(int)
{
    Fixed   temp;
    
    temp = *this;
    ++(*this);
    return (temp);
}

Fixed   Fixed::operator--()
{
    --this->_a;
    return(*this);
}

Fixed   Fixed::operator--(int)
{
    Fixed   temp;

    temp = *this;
    --(*this);
    return (temp);
}

const Fixed	&Fixed::min(const Fixed &first, const Fixed &second)
{
    if (first < second)
        return (first);
    return (second);
}

const Fixed	&Fixed::max(const Fixed &first, const Fixed &second)
{
    if (first > second)
        return (first);
    return (second);
}

Fixed	&Fixed::min(Fixed &first, Fixed &second)
{
    if (first < second)
        return (first);
    return (second);
}

Fixed	&Fixed::max(Fixed &first, Fixed &second)
{
    if (first > second)
        return (first);
    return (second);
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