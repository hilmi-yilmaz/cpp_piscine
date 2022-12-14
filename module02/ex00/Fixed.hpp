#ifndef FIXED_HPP
# define FIXED_HPP

class Fixed {

	private:

		int			_fixed_point_value;
		static int	_fractional_bits;

	public:

		Fixed( void );
		Fixed( const Fixed& fixed );			// copy constructor
		~Fixed( void );
		Fixed& operator=( const Fixed& fixed ) ;	// Copy assignment operator

		int		getRawBits( void ) const;
		void	setRawBits( int const raw );

};

#endif
