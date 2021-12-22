#ifndef	FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed {
	private:
		int	value;
		static const int bits;
	public:
		Fixed();
		Fixed(Fixed const &fixed);
		~Fixed();

		Fixed	&operator=(Fixed const &fixed);


		int		getRawBits() const;
		void	setRawBits(int const raw);
};
#endif
