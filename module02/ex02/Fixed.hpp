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

		Fixed( void );								// default constructor
		Fixed( const Fixed& fixed);					// copy constructor
		Fixed( const int number );					// integer constructor
		Fixed( const float number );				// float constructor
		Fixed& operator=( const Fixed& fixed ) ;	// Copy assignment operator
		~Fixed( void );								// destructor

		// Overload comparison operators
		bool	operator<( const Fixed& rhs) const;
		bool	operator>( const Fixed& rhs) const;
		bool	operator<=(const Fixed& rhs) const;
		bool	operator>=(const Fixed& rhs) const;
		bool	operator==(const Fixed& rhs) const;
		bool	operator!=(const Fixed& rhs) const;

		// Overload arithmetic operators
		Fixed	operator-(const Fixed& rhs) const;
		Fixed	operator+(const Fixed& rhs) const;
		Fixed	operator*(const Fixed& rhs) const;
		Fixed	operator/(const Fixed& rhs) const;

		// Overload increment/decrement operators
		Fixed	operator++( int );	// post-increment
		Fixed	operator--( int );	// post-decrement
		Fixed&	operator++();		// pre-increment
		Fixed&	operator--();		// pre-decrement

		// Min and Max
		static Fixed&		min(Fixed& a, Fixed& b);
		static const Fixed&	min(const Fixed& a, const Fixed& b);
		static Fixed&		max(Fixed& a, Fixed& b);
		static const Fixed&	max(const Fixed& a, const Fixed& b);



		int		getRawBits( void ) const;
		void	setRawBits( int const raw );

		int		toInt( void ) const;
		float	toFloat( void ) const;

};

std::ostream& operator<<( std::ostream& os, const Fixed& fixed );

#endif
