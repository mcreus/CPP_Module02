#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <iomanip>
# include <cmath>

class Fixed
{
	public:

		Fixed();
		Fixed(Fixed const & b);
		Fixed(int const d);
		Fixed(float const e);
		~Fixed();
		Fixed 	&operator=( Fixed const & c);
		Fixed	operator+( Fixed const & plus);
		Fixed	operator-( Fixed const & moins);
		Fixed	operator*( Fixed const & multiple);
		Fixed	operator/( Fixed const & divise);
		bool	operator>(Fixed const & pGrand) const;
		bool	operator<(Fixed const & pPetit) const;
		bool	operator>=(Fixed const & pgoEgal) const;
		bool	operator<=(Fixed const & ppoEgal) const;
		bool	operator==(Fixed const & strictEgal) const;
		bool	operator!=(Fixed const & differend) const;
		Fixed	operator++();
		Fixed	operator++(int);
		Fixed	operator--();
		Fixed	operator--(int);
		static const Fixed	&min(const Fixed &first, const Fixed &second);
		static const Fixed	&max(const Fixed &first, const Fixed &second);
		static Fixed	&min(Fixed &first, Fixed &second);
		static Fixed	&max(Fixed &first, Fixed &second);
		int 	getRawBits(void) const;
		void    setRawBits(int const raw);
		float	toFloat(void) const;
		int		toInt(void) const;

	private:

		int 				_a;
		static int const    _nBits;

};

std::ostream	&operator<<(std::ostream &o, Fixed const &f);

#endif