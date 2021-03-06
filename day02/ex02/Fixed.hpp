#ifndef	FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed {
	private:
		int	_value;
		static const int bits;
	public:
		Fixed(void);
		Fixed(Fixed const &fixed);
		Fixed(int const src);
		Fixed(float const src);
		~Fixed(void);

		Fixed			&operator=(Fixed const &fixed);

		bool			operator==(Fixed const &fixed) const;
		bool			operator!=(Fixed const &fixed) const;
		bool			operator>(Fixed const &fixed) const;
		bool			operator>=(Fixed const &fixed) const;
		bool			operator<(Fixed const &fixed) const;
		bool			operator<=(Fixed const &fixed) const;

		Fixed			operator+(Fixed const &fixed) const;
		Fixed			operator-(Fixed const &fixed) const;
		Fixed			operator*(Fixed const &fixed) const;
		Fixed			operator/(Fixed const &fixed) const;

		Fixed			operator--(int); //Post decrementation
		Fixed			&operator--(void); //Pre decrementation
		Fixed			operator++(int); //Post incrementation
		Fixed			&operator++(void); //Pre incrementation

		int				getRawBits(void) const;
		void			setRawBits(int const raw);

		float			toFloat(void) const;
		int				toInt(void) const;

		static Fixed	max(Fixed const &f1, Fixed const &f2);
		static Fixed	min(Fixed const &f1, Fixed const &f2);
};

std::ostream	&operator<<(std::ostream &os, Fixed const &fixed);

#endif