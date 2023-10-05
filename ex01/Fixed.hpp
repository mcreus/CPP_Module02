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
		~Fixed();
		Fixed &operator=( Fixed const & c);
		int getRawBits(void) const;
		void    setRawBits(int const raw);

	private:

		int _a;
		static int const    _nBits;

};

std::ofstream	&operator<<(std::ofstream &o, float f);

#endif