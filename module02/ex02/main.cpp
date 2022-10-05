#include <iostream>
#include <stdio.h>
#include "Fixed.hpp"

int	main(void) {

	Fixed a;
	Fixed const b( 10 );
	Fixed const c( 42.42f );
	Fixed const d( b );

	a = Fixed( 10 );
	
	std::cout << "a is " << a << std::endl;
	std::cout << "b is " << b << std::endl;
	std::cout << "c is " << c << std::endl;
	std::cout << "d is " << d << std::endl;

	std::cout << "a is " << a.toInt() << " as integer" << std::endl;
	std::cout << "b is " << b.toInt() << " as integer" << std::endl;
	std::cout << "c is " << c.toInt() << " as integer" << std::endl;
	std::cout << "d is " << d.toInt() << " as integer" << std::endl;

	// b = 11
	// a = 11
	bool	result = b < a;
	std::cout << result << std::endl;
	result = b > a;
	std::cout << result << std::endl;
	result = b <= a;
	std::cout << result << std::endl;


	Fixed ali = a * b;
	std::cout << ali << std::endl;

	return 0;
}
