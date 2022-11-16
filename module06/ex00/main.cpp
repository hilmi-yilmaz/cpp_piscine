#include <iostream>
#include <string>
#include <iomanip>

#include <limits>

enum Status {
	OK,
	IMPOSSIBLE,
	NON_DISPLAYABLE
};

void	assignFromChar(const std::string& input) {
	char c = input[0];
	int i = static_cast<int> (c);
	float f = static_cast<float> (c);
	double d = static_cast<double> (c);

	std::cout << "char: '" << c << "'" << std::endl;
	std::cout << "int: " << i << std::endl;
	std::cout << std::fixed << std::setprecision(1) << "float: " << f << "f" << std::endl;
	std::cout << std::fixed << std::setprecision(1) << "double: " << d << std::endl;
}

void	assignFromInt(const std::string& input) {
	// try {
	// 	int i = std::stoi(input);
	// 	std::cout << "int: " << i << std::endl;

	// 	float f = static_cast<float> (i);
	// 	std::cout << std::fixed << std::setprecision(1) << "float: " << f << "f" << std::endl;

	// 	double d = static_cast<double> (i);
	// 	std::cout << std::fixed << std::setprecision(1) << "double: " << d << std::endl;
	// } catch (const std::out_of_range& e) {
	// 	std::cout << e.what() << std::endl;
	// } catch (const std::invalid_argument& e) {
	// 	std::cout << e.what() << std::endl;
	// }

	

	int i;

	Status status_i = OK;
	Status	status_c = OK;

	try {
		i = std::stoi(input);
	} catch (const std::out_of_range& e) {
		// std::cout << "int: impossible" << std::endl;
		status_i = IMPOSSIBLE;
	}

	if (i < 0 || i > 127) {
		// std::cout << "char: impossible" << std::endl;
		status_c = IMPOSSIBLE;
	} else if (i < 32) {
		// std::cout << "char: Non displayable" << std::endl;
		status_c = NON_DISPLAYABLE;
	}

	char c = static_cast<char> (i);
	float f = static_cast<float> (i);
	double d = static_cast<double> (i);


	// Print char
	std::cout << "char: ";
	if (status_c == IMPOSSIBLE) {
		std::cout << "impossible" << std::endl;
	} else if (status_c == NON_DISPLAYABLE) {
		std::cout << "Non displayable" << std::endl;
	} else {
		std::cout << "'" << c << "'" << std::endl;
	}

	// Print int
	std::cout << "int: ";
	if (status_i == IMPOSSIBLE) {
		std::cout << "impossible" << std::endl;
	} else {
		std::cout << i << std::endl;
	}

	std::cout << std::fixed << std::setprecision(1) << "float: " << f << "f" << std::endl;
	std::cout << std::fixed << std::setprecision(1) << "double: " << d << std::endl;
}

// void	assignFromFloat(const std::string& input) {

// 	float f;


// }


int	main(int argc, char **argv) {

	// std::cout << std::fixed << std::setprecision(100) << std::numeric_limits<float>::min() << std::endl;
	// std::cout << "char: " << sizeof(char) << " bytes" << std::endl;
	// std::cout << "short: " << sizeof(short) << " bytes" << std::endl;
	// std::cout << "int: " << sizeof(int) << " bytes" << std::endl;
	// std::cout << "long: " << sizeof(long) << " bytes" << std::endl;
	// std::cout << "pointer: " << sizeof(int*) << " bytes" << std::endl;





	(void)argc;
	// Parse the input
	std::string	input = argv[1];

	char	type;

	// First recognize what type the input is: char, int, float or double.
	if (input.length() == 1 && std::isdigit(input[0]) == 0 && input[0] >= 32 && input[0] <= 127) {
		type = 'c';
	} else if (input.back() == 'f') {
		type = 'f';
	} else if (input.find('.') != std::string::npos) {
		type = 'd';
	} else {
		type = 'i';
	}
	std::cout << "Type of input is: " << type << std::endl;

	// Convert from char
	if (type == 'c') {
		assignFromChar(input);
	} else if (type == 'i') {
		assignFromInt(input); }
	// } else if (type == 'f') {
	// 	assignFromFloat(input);
	// }


	// // Variables of all types

	// // Try to convert to a char
	// if (input.length() == 1 && std::isdigit(input[0]) == 0 && input[0] >= 32 && input[0] <= 127) {
	// 	char c = input[0];
	// 	std::cout << "char: " << c << std::endl;
	// 	// 1. Convert char to int
	// 	int i = static_cast<int> (c);
	// 	std::cout << "int: " << i << std::endl;
	// 	// 2. Convert char to float
	// 	float f = static_cast<float> (c);
	// 	std::cout << std::fixed << std::setprecision(1) << "float: " << f << "f" << std::endl;
	// 	// 3. Convert char to double
	// 	double d = static_cast<double> (c);
	// 	std::cout << std::fixed << std::setprecision(1) << "double: " << d << std::endl;

	// } else {
	// 	std::cout << "char: Non displayable" << std::endl;
	// }

	// // Try convert to an integer
	// try {
	// 	int i = std::stoi(input);
	// 	std::cout << "int: " << i << std::endl;

	// 	float f = static_cast<float> (i);
	// 	std::cout << std::fixed << std::setprecision(1) << "float: " << f << "f" << std::endl;

	// 	double d = static_cast<double> (i);
	// 	std::cout << std::fixed << std::setprecision(1) << "double: " << d << std::endl;
	

	// } catch (const std::out_of_range& e) {
	// 	std::cout << e.what() << std::endl;
	// } catch (const std::invalid_argument& e) {
	// 	std::cout << e.what() << std::endl;
	// }


	// // Convert integer-string to int
	// try {
	// 	num = std::stoi(argv[1]);
	// } catch (const std::out_of_range& e) {
	// 	std::cout << e.what() << std::endl;
	// } catch (const std::invalid_argument& e) {
	// 	std::cout << e.what() << std::endl;
	// }
	// std::cout << "int: " << num << std::endl;

	// if (num >= 32 && num <= 127) {
	// 	char c = static_cast<char> (num);
	// 	std::cout << "char: " << c << std::endl;
	// }
	// else {
	// 	std::cout << "char: Non displayable" << std::endl;
	// }


	// // Convert integer-string to float
	// float numf;
	// try {
	// 	numf = std::stof(argv[1]);
	// } catch (const std::out_of_range& e) {
	// 	std::cout << e.what() << std::endl;
	// } catch (const std::invalid_argument& e) {
	// 	std::cout << e.what() << std::endl;
	// }
	// std::cout << std::setprecision(5) << "float: " << numf << "f" << std::endl;


	return 0;
}
