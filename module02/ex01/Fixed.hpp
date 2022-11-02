#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed {

	private:

		int			_fixed_point_value;
		static int	_fractional_bits;

		int			_int_to_fixed_point( const int number );
		int			_float_to_fixed_point( const float number );

	public:

		Fixed(void);								// default constructor
		Fixed(const Fixed& fixed);					// copy constructor
		Fixed(const int number);					// integer constructor
		Fixed(const float number);					// float constructor
		Fixed& operator=(const Fixed& fixed);		// Copy assignment operator
		~Fixed(void);								// destructor

		int		getRawBits(void) const;
		void	setRawBits(int const raw);

		int		toInt(void) const;
		float	toFloat(void) const;

};

std::ostream& operator<<(std::ostream& os, const Fixed& fixed);

#endif
